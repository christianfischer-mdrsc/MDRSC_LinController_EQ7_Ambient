#include "ButtonHandler.h"

const uint8_t ButtonHandler::buttonPinsV3[BUTTON_COUNT] = {
    
    BUTTON_F1,
    BUTTON_F2,
    BUTTON_F3,
    BUTTON_F4,
    BUTTON_F5,
    BUTTON_F6
};
const uint8_t ButtonHandler::buttonPinsV2[BUTTON_COUNT] = {
    BUTTON_F1_V2,
    BUTTON_F2_V2,
    BUTTON_F3_V2,
    BUTTON_F4_V2,
    BUTTON_F5_V2,
    BUTTON_F6_V2
};




void ButtonHandler::begin(int _ID) {
    ID = _ID;
    irqFlags = 0;

    for (uint8_t i = 0; i < BUTTON_COUNT; i++) {
        if(ID >= 0x3000)
        {
            pinMode(buttonPinsV3[i], INPUT_PULLUP);
            buttons[i] = {
                .physical = false,
                .debounced = false,
                .lastDebounced = false,
                .lastChangeTime = 0,
                .pressTime = 0,
                .releaseTime = 0,
                .longPressFired = false,
                .clickPending = false,
                .clickTime = 0
            };

            attachInterruptArg(
                digitalPinToInterrupt(buttonPinsV3[i]),
                isrRouter,
                this,
                CHANGE
            );
        }else{
            pinMode(buttonPinsV2[i], INPUT_PULLUP);
            buttons[i] = {
                .physical = false,
                .debounced = false,
                .lastDebounced = false,
                .lastChangeTime = 0,
                .pressTime = 0,
                .releaseTime = 0,
                .longPressFired = false,
                .clickPending = false,
                .clickTime = 0
            };

            attachInterruptArg(
                digitalPinToInterrupt(buttonPinsV2[i]),
                isrRouter,
                this,
                CHANGE
            );
        }
        buttons[i].features = FEATURE_SINGLE | FEATURE_DOUBLE | FEATURE_LONG;
    }
}

void ButtonHandler::setButtonFeatures(uint8_t index, uint8_t featureMask)
{
    if(index >= BUTTON_COUNT) return;
    buttons[index].features = featureMask;
}

void IRAM_ATTR ButtonHandler::isrRouter(void* arg) {
    ButtonHandler* self = static_cast<ButtonHandler*>(arg);

    for (uint8_t i = 0; i < BUTTON_COUNT; i++) {
        bool level;
        if(self->ID >= 0x3000)
        {
             level = !digitalRead(buttonPinsV3[i]); // active LOW
        }
        else{
             level = !digitalRead(buttonPinsV2[i]); // active LOW
        }
       
        self->buttons[i].physical = level;
        self->irqFlags |= (1 << i);
    }
}

ButtonEvent ButtonHandler::updateButton(uint8_t i)
{
    Button& b = buttons[i];
    uint32_t now = millis();

    if (b.features == 0)
        return ButtonEvent::None;

    // ===== Entprellen =====
    if (b.physical != b.debounced &&
        (now - b.lastChangeTime >= BUTTON_DEBOUNCE_TIME))
    {
        b.lastDebounced = b.debounced;
        b.debounced = b.physical;
        b.lastChangeTime = now;

        // =========================
        // ===== BUTTON PRESSED ====
        // =========================
        if (b.debounced)
        {
            // Taste gedrückt
            b.pressTime = now;
            b.longPressFired = false;

            // Echte Flanke von "nicht gedrückt" -> "gedrückt"
            if (!b.lastDebounced)
            {
                return ButtonEvent::Press;
            }
        }

        // =========================
        // ===== BUTTON RELEASED ===
        // =========================
        else
        {
            b.releaseTime = now;
            uint32_t pressDuration = now - b.pressTime;

            // WICHTIG:
            if (b.longPressFired)
            {
                b.longPressFired = false;   // Reset für nächsten Zyklus
                b.clickPending = false;
                return ButtonEvent::None;   // NICHTS mehr erzeugen
            }

            // -------- DOUBLE CLICK --------
            if (b.features & FEATURE_DOUBLE)
            {
                if (b.clickPending &&
                    (now - b.clickTime <= BUTTON_DOUBLECLICK_TIME))
                {
                    b.clickPending = false;
                    return ButtonEvent::DoubleClick;
                }

                // erster Klick → warten
                b.clickPending = true;
                b.clickTime = now;
                return ButtonEvent::None;  // noch nichts auslösen
            }

            // -------- SINGLE CLICK --------
            if (b.features & FEATURE_SINGLE)
            {
                return ButtonEvent::Click;  // beim Release
            }
        }
    }

    return ButtonEvent::None;
}




void ButtonHandler::update()
{
    uint32_t now = millis();

    for (uint8_t i = 0; i < BUTTON_COUNT; i++)
    {
        Button& b = buttons[i];

        // ===== Interrupt-basiertes Update =====
        if (irqFlags & (1 << i))
        {
            ButtonEvent e = updateButton(i);

            if (e != ButtonEvent::None)
                handleEvent(i, e);

            noInterrupts();
            irqFlags &= ~(1 << i);
            interrupts();
        }

        // ===== LongPress während gedrückt =====
        if ((b.features & FEATURE_LONG) &&
            b.debounced &&                     // Taste gedrückt
            !b.longPressFired &&
            (now - b.pressTime >= BUTTON_LONGPRESS_TIME))
        {
            b.longPressFired = true;
            b.clickPending = false;
            handleEvent(i, ButtonEvent::LongPress);
        }

        // ===== DoubleClick Timeout prüfen =====
        if ((b.features & FEATURE_DOUBLE) &&
            b.clickPending &&
            !b.longPressFired &&
            (now - b.clickTime >= BUTTON_DOUBLECLICK_TIME))
        {
            if (b.features & FEATURE_SINGLE)
            {
                handleEvent(i, ButtonEvent::Click);
            }

            b.clickPending = false;
        }
    }
}




void ButtonHandler::setCallback(EventCallback cb)
{
    callback = cb;
}

void ButtonHandler::handleEvent(uint8_t index, ButtonEvent event) {
    if(callback)
    {
        callback(index, event);
    }
}

bool ButtonHandler::isPressed(uint8_t button) const {
    return buttons[button].debounced;
}

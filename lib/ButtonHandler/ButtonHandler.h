#ifndef BUTTON_HANDLER_H
#define BUTTON_HANDLER_H

#include <Arduino.h>
#include "ButtonHandlerDefines.h"

enum class ButtonEvent : uint8_t {
    None,
    Press,
    Release,
    Click,
    DoubleClick,
    LongPress
};

class ButtonHandler {
public:
    void begin(int _ID);
    void update();

    bool isPressed(uint8_t button) const;
    using EventCallback = std::function<void(uint8_t, ButtonEvent)>;
    void setCallback(EventCallback cb);

    void setButtonFeatures(uint8_t index, uint8_t featureMask);
private:
    struct Button {
        bool physical;
        bool debounced;
        bool lastDebounced;

        uint32_t lastChangeTime;  // Entprellen
        uint32_t pressTime;       // gedrückt
        uint32_t releaseTime;     // losgelassen

        bool longPressFired;

        // DoubleClick
        bool clickPending;
        uint32_t clickTime;

        uint8_t features;
    };

    static void IRAM_ATTR isrRouter(void* arg);
    EventCallback callback;
    ButtonEvent updateButton(uint8_t index);
    void handleEvent(uint8_t index, ButtonEvent event);

    Button buttons[BUTTON_COUNT];
    volatile uint8_t irqFlags;
    volatile int ID;

    static const uint8_t buttonPinsV3[BUTTON_COUNT];
    static const uint8_t buttonPinsV2[BUTTON_COUNT];
};

#endif

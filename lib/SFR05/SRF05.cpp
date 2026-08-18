#include "SRF05.h"

SRF05* SRF05::instance = nullptr;

SRF05::SRF05(gpio_num_t trigPin, gpio_num_t echoPin)
  : _trigPin(trigPin), _echoPin(echoPin), _echoStart(0), _echoEnd(0),
    _echoDone(false), _timer(nullptr), _timerMux(portMUX_INITIALIZER_UNLOCKED)
{
  instance = this; // Setze Singleton-Instanz
}

void SRF05::begin() {
  pinMode(_trigPin, OUTPUT);
  digitalWrite(_trigPin, LOW);

  pinMode(_echoPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(_echoPin), echoISRStatic, CHANGE);

  _timer = timerBegin(0, 80, true); // 80 MHz / 80 = 1 MHz
  timerAttachInterrupt(_timer, &onTimerStatic, true);
  timerAlarmWrite(_timer, 100000, true); // 100 ms
  timerAlarmEnable(_timer);
}

void SRF05::trigger() {
  digitalWrite(_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPin, LOW);
}

float SRF05::getDistance() {
  if (_echoDone) {
    noInterrupts();
    unsigned long duration = _echoEnd - _echoStart;
    _echoDone = false;
    interrupts();
    if(duration == 0 || duration > 3000) {
      return -1.0; // Ungültige Messung
    }
    return duration / 58.0;
  }
  return -1.0; // Keine gültige Messung
}

void IRAM_ATTR SRF05::echoISRStatic() {
  if (instance) instance->echoISR();
}

void IRAM_ATTR SRF05::echoISR() {
  if (digitalRead(_echoPin) == HIGH) {
    _echoStart = micros();
  } else {
    _echoEnd = micros();
    _echoDone = true;
  }
}

void IRAM_ATTR SRF05::onTimerStatic() {
  if (instance) instance->onTimer();
}

void IRAM_ATTR SRF05::onTimer() {
  portENTER_CRITICAL_ISR(&_timerMux);
  trigger();
  portEXIT_CRITICAL_ISR(&_timerMux);
}

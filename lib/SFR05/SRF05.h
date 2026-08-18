#ifndef SRF05_H
#define SRF05_H

#include <Arduino.h>

class SRF05 {
public:
    SRF05(gpio_num_t trigPin, gpio_num_t echoPin);
    void begin();
    float getDistance(); // in cm
    void trigger();      // Manuelles Auslösen

private:
    gpio_num_t _trigPin;
    gpio_num_t _echoPin;

    volatile int64_t _echoStart;
    volatile int64_t _echoEnd;
    volatile bool _echoDone;

    static void IRAM_ATTR echoISRStatic();
    void IRAM_ATTR echoISR();

    static SRF05* instance; // Singleton-Workaround für Interrupt

    static void IRAM_ATTR onTimerStatic();
    void IRAM_ATTR onTimer();

    hw_timer_t* _timer;
    portMUX_TYPE _timerMux;
};

#endif

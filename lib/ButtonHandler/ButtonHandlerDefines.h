#ifndef BUTTON_HANDLER_DEFINES_H
#define BUTTON_HANDLER_DEFINES_H

#include <Arduino.h>

// Pin mapping for buttons F1-F6
#define BUTTON_F1 15
#define BUTTON_F2 18
#define BUTTON_F3 2
#define BUTTON_F4 19
#define BUTTON_F5 0
#define BUTTON_F6 21

#define BUTTON_F1_V2 2
#define BUTTON_F2_V2 5
#define BUTTON_F3_V2 0
#define BUTTON_F4_V2 18
#define BUTTON_F5_V2 4
#define BUTTON_F6_V2 19


#define BUTTON_COUNT 6

// Timing in ms
#define BUTTON_DEBOUNCE_TIME    10
#define BUTTON_LONGPRESS_TIME   1000
#define BUTTON_DOUBLECLICK_TIME 250

enum ButtonFeature : uint8_t
{
    FEATURE_SINGLE = 1 << 0,
    FEATURE_DOUBLE = 1 << 1,
    FEATURE_LONG   = 1 << 2
};


#endif

#ifndef GLOBALS_H
#define GLOBALS_H

#include "../lib/LinMaster/Lin.h"
#include "system.h"

#define TRIG_PIN GPIO_NUM_26
#define ECHO_PIN GPIO_NUM_27

extern Lin lin;
extern bool activateScheduler;
extern bool frameSent;

#endif


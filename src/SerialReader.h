#ifndef SERIALREADER_H
#define SERIALREADER_H

#include <Arduino.h>
#include "system.h"
#include "ButtonHandler.h"
#include "main.h"
#include "signal_serial.h"
#include "globals.h"


void ReadSerialInput();

void OperateSerialCommands(String cmd);

#endif
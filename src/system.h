#ifndef SYSTEM_H
#define SYSTEM_H

#include <stdint.h>
#include <Preferences.h>

#define SOFTWAREVERSION "1.0.0"
#define PUBLISHER "MothersonDRSC"
#define DEVELOPER "Christian Fischer"
#define EMAIL "christian.fischer@motherson.com"
#define BUILD_DATE __DATE__
#define BUILD_TIME __TIME__
#define IDENTITY "LIN CAN Controller"
#define PROJECT "Kulisse"

extern int myID;

int SYSTEM_getIDValue(void);
void SYSTEM_setIDValue(int id);
void SYSTEM_printProjectInfo(void);

#endif // SYSTEM_H
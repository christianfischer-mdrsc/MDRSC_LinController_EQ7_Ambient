#include "system.h"
#include <stdio.h>

int myID = 0;
Preferences mySD;

int SYSTEM_getIDValue(void) {
    mySD.begin("config", false);
    myID = mySD.getInt("myID", 0xFF7F);
    return myID;
}

void SYSTEM_setIDValue(int id) {
    myID = id;
    mySD.putInt("myID", id);
}

void SYSTEM_printProjectInfo(void) {
    Serial.printf("============ Projektinformation ===========\n");
    
    Serial.printf("Software Version\t\t: %s\n", SOFTWAREVERSION);
    Serial.printf("Identity\t\t\t: %s\n", IDENTITY);
    Serial.printf("Publisher\t\t: %s\n", PUBLISHER);
    Serial.printf("Developer\t\t: %s\n", DEVELOPER);
    Serial.printf("E-Mail\t\t\t: %s\n", EMAIL);
    Serial.printf("Build Date\t\t: %s\n", BUILD_DATE);
    Serial.printf("Build Time\t\t: %s\n", BUILD_TIME);
    Serial.printf("Module ID\t\t: 0x%04X\n", myID);
    Serial.printf("Project\t\t\t: %s\n", PROJECT);
    Serial.printf("=====================================\n");
    
}
#include "SerialReader.h"


void ReadSerialInput()
{
    static String inputBuffer = "";

    while(Serial.available())
    {
        char c = Serial.read();
        if(c == '\n' || c == '\r')
        {
            if(inputBuffer.length() > 0)
            {
                String returnValue = inputBuffer;
                inputBuffer = "";
                OperateSerialCommands(returnValue);
                operateSerialSignal(returnValue, &signals);
            }
        }
        else
        {
            inputBuffer += c;
        }
    }
}

void OperateSerialCommands(String cmd)
{
    if(cmd.startsWith("*GETID?"))
    {
        int id = SYSTEM_getIDValue();
        Serial.printf("*ID!0x%x\n", id);
    }
    else if(cmd.startsWith("*SETID!"))
    {
        //"*SETID! 0x3000"
        String hexPart = cmd.substring(7); // alles nach "*SETID!"
        hexPart.trim();                      // Leerzeichen entfernen
        int newID = (int) strtol(hexPart.c_str(), nullptr, 16);
        if(newID < 4096 || newID > 65535){
            Serial.println("ID out of Range!");
        }else{
            SYSTEM_setIDValue(newID);
            Serial.printf("New ID: 0x%4x\n", newID);
        }
    }
    else if(cmd.startsWith("*FW?"))
    {
        Serial.printf("*FW!%s_v%s\n", PROJECT, SOFTWAREVERSION);
    }
    else if(cmd.startsWith("*INFO?"))
    {
        SYSTEM_printProjectInfo();
    }
    /* Diagnostic Operations */
    if (cmd.startsWith("sendLinFrame:")) {
        // Beispiel: sendLinFrame:IDENT:0x06:0x22:0xF1:0x90:0x00:0x00:0x00:0x00:true

        // Schritt 1: Rest des Strings abtrennen
        String args = cmd.substring(strlen("sendLinFrame:"));

        // Schritt 2: In einzelne Teile splitten
        int lastIndex = 0;
        uint8_t values[9]; // NAD + 8 Datenbytes
        bool printResponse = false;

        for (int i = 0; i < 10; i++) {
            int nextIndex = args.indexOf(':', lastIndex);
            String token;
            if (nextIndex == -1) {
                token = args.substring(lastIndex);
            } else {
                token = args.substring(lastIndex, nextIndex);
            }

            token.trim();

            if (i < 9) {
                // Werte als Hex oder Dez interpretieren
                if (token.startsWith("0x") || token.startsWith("0X")) {
                    values[i] = (uint8_t) strtol(token.c_str(), NULL, 16);
                } else {
                    values[i] = (uint8_t) token.toInt();
                }
            } else {
                // Letzter Wert: true/false
                printResponse = (token.equalsIgnoreCase("true"));
            }

            if (nextIndex == -1) break;
            lastIndex = nextIndex + 1;
        }

        // Schritt 3: Frame senden
        uint8_t ID = values[0];
        uint8_t data[256];
        memcpy(data, &values[1], 8);

        while(!frameSent){
            delay(1);
        }
        activateScheduler = false; // Scheduler deaktivieren, um Konflikte zu vermeiden

        lin.sendFrame(ID, data, 8);
        delay(10);
        // Schritt 4: Optional Antwort prüfen
        if (printResponse) {
            Serial.print("Request: ");
            for (int i = 0; i < 8; i++) {
                Serial.printf("0x%02X ", data[i]);
            }
            Serial.println();
            LinResponseResult res = lin.CheckResponse(data[2]);

            // --- Rohframes ausgeben ---
            Serial.printf("Response type: %d, Frames: %d\n", res.type, res.frameCount);

            for (uint8_t f = 0; f < res.frameCount; f++) {
                Serial.printf("Frame %d: ", f);
                for (uint8_t b = 0; b < 8; b++) {
                    Serial.printf("0x%02X ", res.data[f * 8 + b]);
                }
                Serial.println();
            }

        }
        activateScheduler = true; // Scheduler wieder aktivieren
    }
    else if(cmd.startsWith("readIdent:"))
    {
        /* syntax: readIdent:<NAD> */
        String args = cmd.substring(strlen("readIdent:"));

        args.trim();
        uint8_t nad = (uint8_t) strtol(args.c_str(), NULL, 16);
        while(!frameSent){
            delay(1);
        }
        activateScheduler = false; // Scheduler deaktivieren, um Konflikte zu vermeiden
        delay(10);
        uint8_t data[8] = {nad, 0x06, 0xB4, 0xA0, 0x40, 0x08, 0x1A, 0xFF};
        lin.sendFrame(0x3C, data, 8);
        delay(10);
        
        LinResponseResult res = lin.CheckResponse(0xB4);

        uint8_t payload[256];
        uint16_t len = lin.extractPayload(res, payload);
        Serial.printf("RGB_Ident:");
        for (uint16_t i = 0; i < len; i++) {
            Serial.printf("0x%02X:", payload[i]);
        }
        Serial.println();

        activateScheduler = true;
    }
}


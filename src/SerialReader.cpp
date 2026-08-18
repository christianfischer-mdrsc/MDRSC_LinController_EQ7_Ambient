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
        uint8_t data[8];
        memcpy(data, &values[1], 8);

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
            if (res.type == PositiveResponse) {
                Serial.print("Positive Response: ");
                for (int i = 0; i < 8; i++) {
                    Serial.printf("0x%02X ", res.data[i]);
                }
                Serial.println();
            } else if (res.type == NegativeResponse) {
                Serial.println("Negative Response");
            } else if (res.type == PendingResponse) {
                Serial.println("Pending Response");
            } else if (res.type == TimeoutResponse){
                Serial.println("Timeout/Error");
            }else{
                Serial.println("Response undefined Error");
            }
        }
    }

    if(cmd.startsWith("act_init")){
        uint8_t nad = 0x01;
        uint8_t count = 1;
        uint8_t controlID = 0x10;
        uint8_t statusID = 0x12;
        lin.AutoAdress(&nad, count);
        delay(10);
        Serial.printf("Auto Addressing: NAD 0x%02X\n", nad);

        lin.AssignFrameIDRange(nad, 0x12, 0x20);
        delay(10);
        Serial.println("Assigned Frame IDs (Control)0x01 and (Status)0x10");
    }
    else if(cmd.startsWith("act_move_ccw")){
        // Signale in Frame mappen
        signals.ACT_Master_NAD.data = 0x01;
        setSignalsForClear(&signals);
        FrameReq_Resp_table[0].linFrame.callback(&FrameReq_Resp_table[0].linFrame);
        lin.sendFrame(FrameReq_Resp_table[0].linFrame.u8_idField, FrameReq_Resp_table[0].linFrame.u8_dataptr, 8);
        FrameReq_Resp_table[0].sent = true;

        delay(20);
        setSignalsForSetPosition(&signals);
        signals.ACT_Master_Start_Position.data = 0;
        FrameReq_Resp_table[0].linFrame.callback(&FrameReq_Resp_table[0].linFrame);
        lin.sendFrame(FrameReq_Resp_table[0].linFrame.u8_idField, FrameReq_Resp_table[0].linFrame.u8_dataptr, 8);
        FrameReq_Resp_table[0].sent = true;

        delay(20);
        setSignalsForGoPosition(&signals);
        signals.ACT_Master_Desired_Position.data = 1000;
        FrameReq_Resp_table[0].linFrame.callback(&FrameReq_Resp_table[0].linFrame);
        lin.sendFrame(FrameReq_Resp_table[0].linFrame.u8_idField, FrameReq_Resp_table[0].linFrame.u8_dataptr, 8);
        FrameReq_Resp_table[0].sent = true;
        signals.ACT_Master_Select_Position.data = 0x2;

    }else if(cmd.startsWith("act_move_cw")){
        // Signale in Frame mappen
        signals.ACT_Master_NAD.data = 0x01;
        setSignalsForClear(&signals);
        FrameReq_Resp_table[0].linFrame.callback(&FrameReq_Resp_table[0].linFrame);
        lin.sendFrame(FrameReq_Resp_table[0].linFrame.u8_idField, FrameReq_Resp_table[0].linFrame.u8_dataptr, 8);
        FrameReq_Resp_table[0].sent = true;

        delay(20);
        setSignalsForSetPosition(&signals);
        signals.ACT_Master_Start_Position.data = 1000;
        FrameReq_Resp_table[0].linFrame.callback(&FrameReq_Resp_table[0].linFrame);
        lin.sendFrame(FrameReq_Resp_table[0].linFrame.u8_idField, FrameReq_Resp_table[0].linFrame.u8_dataptr, 8);
        FrameReq_Resp_table[0].sent = true;

        delay(20);
        setSignalsForGoPosition(&signals);
        signals.ACT_Master_Desired_Position.data = 0;
        FrameReq_Resp_table[0].linFrame.callback(&FrameReq_Resp_table[0].linFrame);
        lin.sendFrame(FrameReq_Resp_table[0].linFrame.u8_idField, FrameReq_Resp_table[0].linFrame.u8_dataptr, 8);
        FrameReq_Resp_table[0].sent = true;
        signals.ACT_Master_Select_Position.data = 0x2;

    }
}


void setSignalsForClear(LinSignals_t* sig)
{
    sig->ACT_Master_Save_Prog.data = 0x00;
    sig->ACT_Master_Clear_Flags.data = 0x0E; 
    sig->ACT_Master_Release_Block.data = 0x01;
    sig->ACT_Master_Coil_Holding.data = 0x00;
    sig->ACT_Master_Select_Position.data = 0x02;
    sig->ACT_Master_Emergency_Release.data = 0x3;
    sig->ACT_Master_Emergency_Position.data = 0x03;
    sig->ACT_Master_Direction.data = 0x03;
    sig->ACT_Master_Stop_Mode.data = 0x01;

}
void setSignalsForSetPosition(LinSignals_t* sig)
{
    sig->ACT_Master_Save_Prog.data = 0x00;
    sig->ACT_Master_Clear_Flags.data = 0x00; 
    sig->ACT_Master_Release_Block.data = 0x01;
    sig->ACT_Master_Coil_Holding.data = 0x00;
    sig->ACT_Master_Select_Position.data = 0x01;
    sig->ACT_Master_Emergency_Release.data = 0x3;
    sig->ACT_Master_Emergency_Position.data = 0x03;
    sig->ACT_Master_Direction.data = 0x03;
    sig->ACT_Master_Stop_Mode.data = 0x00;
}
void setSignalsForGoPosition(LinSignals_t* sig)
{
    sig->ACT_Master_Save_Prog.data = 0x00;
    sig->ACT_Master_Clear_Flags.data = 0x00; 
    sig->ACT_Master_Release_Block.data = 0x01;
    sig->ACT_Master_Coil_Holding.data = 0x00;
    sig->ACT_Master_Select_Position.data = 0x00;
    sig->ACT_Master_Emergency_Release.data = 0x3;
    sig->ACT_Master_Emergency_Position.data = 0x03;
    sig->ACT_Master_Direction.data = 0x03;
    sig->ACT_Master_Stop_Mode.data = 0x00;
}
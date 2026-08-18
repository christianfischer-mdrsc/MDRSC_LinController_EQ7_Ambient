#include "signal_serial.h"
#include <stdlib.h>

void operateSerialSignal(String input, LinSignals_t *mySignal) {
    if (input == "signals?") {
        Serial.println("Available signals:");
        Serial.println("ACT_Master_NAD");
        Serial.println("ACT_Master_Save_Prog");
        Serial.println("ACT_Master_Release_Block");
        Serial.println("ACT_Master_Clear_Flags");
        Serial.println("ACT_Master_Coil_Holding");
        Serial.println("ACT_Master_Select_Position");
        Serial.println("ACT_Master_Speed");
        Serial.println("ACT_Master_Desired_Position");
        Serial.println("ACT_Master_Start_Position");
        Serial.println("ACT_Master_Emergency_Release");
        Serial.println("ACT_Master_Emergency_Position");
        Serial.println("ACT_Master_Direction");
        Serial.println("ACT_Master_Stop_Mode");
        Serial.println("ACT_Slave_Response_Error");
        Serial.println("ACT_Slave_Overtemperature");
        Serial.println("ACT_Slave_Electronic_Defect");
        Serial.println("ACT_Slave_Suppy_Voltage");
        Serial.println("ACT_Slave_Emergency_Run");
        Serial.println("ACT_Slave_Release_Block");
        Serial.println("ACT_Slave_Block_Detected");
        Serial.println("ACT_Slave_Reset");
        Serial.println("ACT_Slave_Coil_Holding");
        Serial.println("ACT_Slave_Position_Status");
        Serial.println("ACT_Slave_Speed_Status");
        Serial.println("ACT_Slave_Actual_Position");
        Serial.println("ACT_Slave_Traverse");
        Serial.println("ACT_Slave_Holding_Torque");
        Serial.println("ACT_Slave_Special_Function");
        Serial.println("ACT_Slave_NAD");
        Serial.println("ACT_Slave_Emergency_Release");
        Serial.println("ACT_Slave_Emergency_Position");
        Serial.println("ACT_Slave_Direction");
        Serial.println("ACT_Slave_Stop_Mode");
        Serial.println("ACT_Slave_Test_Signal");
        return;
    }
    if(input.startsWith("set:")) {
        input = input.substring(4);
        if(input.startsWith("ACT_Master_NAD")) {
            int value = strtol(input.substring(14 + 1).c_str(), NULL, 0);
            mySignal->ACT_Master_NAD.data = value;
            Serial.printf("New Value for ACT_Master_NAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Master_Save_Prog")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->ACT_Master_Save_Prog.data = value;
            Serial.printf("New Value for ACT_Master_Save_Prog = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Master_Release_Block")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->ACT_Master_Release_Block.data = value;
            Serial.printf("New Value for ACT_Master_Release_Block = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Master_Clear_Flags")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->ACT_Master_Clear_Flags.data = value;
            Serial.printf("New Value for ACT_Master_Clear_Flags = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Master_Coil_Holding")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->ACT_Master_Coil_Holding.data = value;
            Serial.printf("New Value for ACT_Master_Coil_Holding = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Master_Select_Position")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->ACT_Master_Select_Position.data = value;
            Serial.printf("New Value for ACT_Master_Select_Position = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Master_Speed")) {
            int value = strtol(input.substring(16 + 1).c_str(), NULL, 0);
            mySignal->ACT_Master_Speed.data = value;
            Serial.printf("New Value for ACT_Master_Speed = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Master_Desired_Position")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->ACT_Master_Desired_Position.data = value;
            Serial.printf("New Value for ACT_Master_Desired_Position = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Master_Start_Position")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->ACT_Master_Start_Position.data = value;
            Serial.printf("New Value for ACT_Master_Start_Position = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Master_Emergency_Release")) {
            int value = strtol(input.substring(28 + 1).c_str(), NULL, 0);
            mySignal->ACT_Master_Emergency_Release.data = value;
            Serial.printf("New Value for ACT_Master_Emergency_Release = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Master_Emergency_Position")) {
            int value = strtol(input.substring(29 + 1).c_str(), NULL, 0);
            mySignal->ACT_Master_Emergency_Position.data = value;
            Serial.printf("New Value for ACT_Master_Emergency_Position = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Master_Direction")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->ACT_Master_Direction.data = value;
            Serial.printf("New Value for ACT_Master_Direction = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Master_Stop_Mode")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->ACT_Master_Stop_Mode.data = value;
            Serial.printf("New Value for ACT_Master_Stop_Mode = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Response_Error")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Response_Error.data = value;
            Serial.printf("New Value for ACT_Slave_Response_Error = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Overtemperature")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Overtemperature.data = value;
            Serial.printf("New Value for ACT_Slave_Overtemperature = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Electronic_Defect")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Electronic_Defect.data = value;
            Serial.printf("New Value for ACT_Slave_Electronic_Defect = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Suppy_Voltage")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Suppy_Voltage.data = value;
            Serial.printf("New Value for ACT_Slave_Suppy_Voltage = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Emergency_Run")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Emergency_Run.data = value;
            Serial.printf("New Value for ACT_Slave_Emergency_Run = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Release_Block")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Release_Block.data = value;
            Serial.printf("New Value for ACT_Slave_Release_Block = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Block_Detected")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Block_Detected.data = value;
            Serial.printf("New Value for ACT_Slave_Block_Detected = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Reset")) {
            int value = strtol(input.substring(15 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Reset.data = value;
            Serial.printf("New Value for ACT_Slave_Reset = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Coil_Holding")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Coil_Holding.data = value;
            Serial.printf("New Value for ACT_Slave_Coil_Holding = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Position_Status")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Position_Status.data = value;
            Serial.printf("New Value for ACT_Slave_Position_Status = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Speed_Status")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Speed_Status.data = value;
            Serial.printf("New Value for ACT_Slave_Speed_Status = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Actual_Position")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Actual_Position.data = value;
            Serial.printf("New Value for ACT_Slave_Actual_Position = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Traverse")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Traverse.data = value;
            Serial.printf("New Value for ACT_Slave_Traverse = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Holding_Torque")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Holding_Torque.data = value;
            Serial.printf("New Value for ACT_Slave_Holding_Torque = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Special_Function")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Special_Function.data = value;
            Serial.printf("New Value for ACT_Slave_Special_Function = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_NAD")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_NAD.data = value;
            Serial.printf("New Value for ACT_Slave_NAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Emergency_Release")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Emergency_Release.data = value;
            Serial.printf("New Value for ACT_Slave_Emergency_Release = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Emergency_Position")) {
            int value = strtol(input.substring(28 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Emergency_Position.data = value;
            Serial.printf("New Value for ACT_Slave_Emergency_Position = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Direction")) {
            int value = strtol(input.substring(19 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Direction.data = value;
            Serial.printf("New Value for ACT_Slave_Direction = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Stop_Mode")) {
            int value = strtol(input.substring(19 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Stop_Mode.data = value;
            Serial.printf("New Value for ACT_Slave_Stop_Mode = %d", value);
            Serial.println();
        }
        else if(input.startsWith("ACT_Slave_Test_Signal")) {
            int value = strtol(input.substring(21 + 1).c_str(), NULL, 0);
            mySignal->ACT_Slave_Test_Signal.data = value;
            Serial.printf("New Value for ACT_Slave_Test_Signal = %d", value);
            Serial.println();
        }
    } else if(input.startsWith("get:")) {
        input = input.substring(4);
        if(input.startsWith("ACT_Master_NAD")) {
            Serial.print("ACT_Master_NAD: ");
            Serial.println(mySignal->ACT_Master_NAD.data);
        }
        else if(input.startsWith("ACT_Master_Save_Prog")) {
            Serial.print("ACT_Master_Save_Prog: ");
            Serial.println(mySignal->ACT_Master_Save_Prog.data);
        }
        else if(input.startsWith("ACT_Master_Release_Block")) {
            Serial.print("ACT_Master_Release_Block: ");
            Serial.println(mySignal->ACT_Master_Release_Block.data);
        }
        else if(input.startsWith("ACT_Master_Clear_Flags")) {
            Serial.print("ACT_Master_Clear_Flags: ");
            Serial.println(mySignal->ACT_Master_Clear_Flags.data);
        }
        else if(input.startsWith("ACT_Master_Coil_Holding")) {
            Serial.print("ACT_Master_Coil_Holding: ");
            Serial.println(mySignal->ACT_Master_Coil_Holding.data);
        }
        else if(input.startsWith("ACT_Master_Select_Position")) {
            Serial.print("ACT_Master_Select_Position: ");
            Serial.println(mySignal->ACT_Master_Select_Position.data);
        }
        else if(input.startsWith("ACT_Master_Speed")) {
            Serial.print("ACT_Master_Speed: ");
            Serial.println(mySignal->ACT_Master_Speed.data);
        }
        else if(input.startsWith("ACT_Master_Desired_Position")) {
            Serial.print("ACT_Master_Desired_Position: ");
            Serial.println(mySignal->ACT_Master_Desired_Position.data);
        }
        else if(input.startsWith("ACT_Master_Start_Position")) {
            Serial.print("ACT_Master_Start_Position: ");
            Serial.println(mySignal->ACT_Master_Start_Position.data);
        }
        else if(input.startsWith("ACT_Master_Emergency_Release")) {
            Serial.print("ACT_Master_Emergency_Release: ");
            Serial.println(mySignal->ACT_Master_Emergency_Release.data);
        }
        else if(input.startsWith("ACT_Master_Emergency_Position")) {
            Serial.print("ACT_Master_Emergency_Position: ");
            Serial.println(mySignal->ACT_Master_Emergency_Position.data);
        }
        else if(input.startsWith("ACT_Master_Direction")) {
            Serial.print("ACT_Master_Direction: ");
            Serial.println(mySignal->ACT_Master_Direction.data);
        }
        else if(input.startsWith("ACT_Master_Stop_Mode")) {
            Serial.print("ACT_Master_Stop_Mode: ");
            Serial.println(mySignal->ACT_Master_Stop_Mode.data);
        }
        else if(input.startsWith("ACT_Slave_Response_Error")) {
            Serial.print("ACT_Slave_Response_Error: ");
            Serial.println(mySignal->ACT_Slave_Response_Error.data);
        }
        else if(input.startsWith("ACT_Slave_Overtemperature")) {
            Serial.print("ACT_Slave_Overtemperature: ");
            Serial.println(mySignal->ACT_Slave_Overtemperature.data);
        }
        else if(input.startsWith("ACT_Slave_Electronic_Defect")) {
            Serial.print("ACT_Slave_Electronic_Defect: ");
            Serial.println(mySignal->ACT_Slave_Electronic_Defect.data);
        }
        else if(input.startsWith("ACT_Slave_Suppy_Voltage")) {
            Serial.print("ACT_Slave_Suppy_Voltage: ");
            Serial.println(mySignal->ACT_Slave_Suppy_Voltage.data);
        }
        else if(input.startsWith("ACT_Slave_Emergency_Run")) {
            Serial.print("ACT_Slave_Emergency_Run: ");
            Serial.println(mySignal->ACT_Slave_Emergency_Run.data);
        }
        else if(input.startsWith("ACT_Slave_Release_Block")) {
            Serial.print("ACT_Slave_Release_Block: ");
            Serial.println(mySignal->ACT_Slave_Release_Block.data);
        }
        else if(input.startsWith("ACT_Slave_Block_Detected")) {
            Serial.print("ACT_Slave_Block_Detected: ");
            Serial.println(mySignal->ACT_Slave_Block_Detected.data);
        }
        else if(input.startsWith("ACT_Slave_Reset")) {
            Serial.print("ACT_Slave_Reset: ");
            Serial.println(mySignal->ACT_Slave_Reset.data);
        }
        else if(input.startsWith("ACT_Slave_Coil_Holding")) {
            Serial.print("ACT_Slave_Coil_Holding: ");
            Serial.println(mySignal->ACT_Slave_Coil_Holding.data);
        }
        else if(input.startsWith("ACT_Slave_Position_Status")) {
            Serial.print("ACT_Slave_Position_Status: ");
            Serial.println(mySignal->ACT_Slave_Position_Status.data);
        }
        else if(input.startsWith("ACT_Slave_Speed_Status")) {
            Serial.print("ACT_Slave_Speed_Status: ");
            Serial.println(mySignal->ACT_Slave_Speed_Status.data);
        }
        else if(input.startsWith("ACT_Slave_Actual_Position")) {
            Serial.print("ACT_Slave_Actual_Position: ");
            Serial.println(mySignal->ACT_Slave_Actual_Position.data);
        }
        else if(input.startsWith("ACT_Slave_Traverse")) {
            Serial.print("ACT_Slave_Traverse: ");
            Serial.println(mySignal->ACT_Slave_Traverse.data);
        }
        else if(input.startsWith("ACT_Slave_Holding_Torque")) {
            Serial.print("ACT_Slave_Holding_Torque: ");
            Serial.println(mySignal->ACT_Slave_Holding_Torque.data);
        }
        else if(input.startsWith("ACT_Slave_Special_Function")) {
            Serial.print("ACT_Slave_Special_Function: ");
            Serial.println(mySignal->ACT_Slave_Special_Function.data);
        }
        else if(input.startsWith("ACT_Slave_NAD")) {
            Serial.print("ACT_Slave_NAD: ");
            Serial.println(mySignal->ACT_Slave_NAD.data);
        }
        else if(input.startsWith("ACT_Slave_Emergency_Release")) {
            Serial.print("ACT_Slave_Emergency_Release: ");
            Serial.println(mySignal->ACT_Slave_Emergency_Release.data);
        }
        else if(input.startsWith("ACT_Slave_Emergency_Position")) {
            Serial.print("ACT_Slave_Emergency_Position: ");
            Serial.println(mySignal->ACT_Slave_Emergency_Position.data);
        }
        else if(input.startsWith("ACT_Slave_Direction")) {
            Serial.print("ACT_Slave_Direction: ");
            Serial.println(mySignal->ACT_Slave_Direction.data);
        }
        else if(input.startsWith("ACT_Slave_Stop_Mode")) {
            Serial.print("ACT_Slave_Stop_Mode: ");
            Serial.println(mySignal->ACT_Slave_Stop_Mode.data);
        }
        else if(input.startsWith("ACT_Slave_Test_Signal")) {
            Serial.print("ACT_Slave_Test_Signal: ");
            Serial.println(mySignal->ACT_Slave_Test_Signal.data);
        }
    }
}

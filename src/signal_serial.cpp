#include "signal_serial.h"
#include <stdlib.h>

void operateSerialSignal(String input, LinSignals_t *mySignal) {
    if (input == "signals?") {
        Serial.println("Available signals:");
        Serial.println("BCM_RGB_Color_u_01");
        Serial.println("BCM_RGB_Color_u_02");
        Serial.println("BCM_RGB_Color_u_03");
        Serial.println("BCM_RGB_Color_u_04");
        Serial.println("BCM_RGB_Color_u_05");
        Serial.println("BCM_RGB_Color_u_06");
        Serial.println("BCM_RGB_Color_u_07");
        Serial.println("BCM_RGB_Color_u_08");
        Serial.println("BCM_RGB_Color_u_09");
        Serial.println("BCM_RGB_Color_u_10");
        Serial.println("BCM_RGB_Color_u_11");
        Serial.println("BCM_RGB_Color_u_12");
        Serial.println("BCM_RGB_Color_u_13");
        Serial.println("BCM_RGB_Color_u_14");
        Serial.println("BCM_RGB_Color_v_01");
        Serial.println("BCM_RGB_Color_v_02");
        Serial.println("BCM_RGB_Color_v_03");
        Serial.println("BCM_RGB_Color_v_04");
        Serial.println("BCM_RGB_Color_v_05");
        Serial.println("BCM_RGB_Color_v_06");
        Serial.println("BCM_RGB_Color_v_07");
        Serial.println("BCM_RGB_Color_v_08");
        Serial.println("BCM_RGB_Color_v_09");
        Serial.println("BCM_RGB_Color_v_10");
        Serial.println("BCM_RGB_Color_v_11");
        Serial.println("BCM_RGB_Color_v_12");
        Serial.println("BCM_RGB_Color_v_13");
        Serial.println("BCM_RGB_Color_v_14");
        Serial.println("BCM_RGB_Dimmrampe_01");
        Serial.println("BCM_RGB_Dimmrampe_02");
        Serial.println("BCM_RGB_Dimmrampe_03");
        Serial.println("BCM_RGB_Dimmrampe_04");
        Serial.println("BCM_RGB_Dimmrampe_05");
        Serial.println("BCM_RGB_Dimmrampe_06");
        Serial.println("BCM_RGB_Dimmrampe_07");
        Serial.println("BCM_RGB_Dimmrampe_08");
        Serial.println("BCM_RGB_Dimmrampe_09");
        Serial.println("BCM_RGB_Dimmrampe_10");
        Serial.println("BCM_RGB_Dimmrampe_11");
        Serial.println("BCM_RGB_Dimmrampe_12");
        Serial.println("BCM_RGB_Dimmrampe_13");
        Serial.println("BCM_RGB_Dimmrampe_14");
        Serial.println("BCM_RGB_GlobalSync");
        Serial.println("BCM_RGB_GlobalSync_01");
        Serial.println("BCM_RGB_GlobalSync_03");
        Serial.println("BCM_RGB_GlobalSync_05");
        Serial.println("BCM_RGB_GlobalSync_07");
        Serial.println("BCM_RGB_GlobalSync_09");
        Serial.println("BCM_RGB_GlobalSync_11");
        Serial.println("BCM_RGB_GlobalSync_13");
        Serial.println("BCM_RGB_Intensitaet_01");
        Serial.println("BCM_RGB_Intensitaet_02");
        Serial.println("BCM_RGB_Intensitaet_03");
        Serial.println("BCM_RGB_Intensitaet_04");
        Serial.println("BCM_RGB_Intensitaet_05");
        Serial.println("BCM_RGB_Intensitaet_06");
        Serial.println("BCM_RGB_Intensitaet_07");
        Serial.println("BCM_RGB_Intensitaet_08");
        Serial.println("BCM_RGB_Intensitaet_09");
        Serial.println("BCM_RGB_Intensitaet_10");
        Serial.println("BCM_RGB_Intensitaet_11");
        Serial.println("BCM_RGB_Intensitaet_12");
        Serial.println("BCM_RGB_Intensitaet_13");
        Serial.println("BCM_RGB_Intensitaet_14");
        Serial.println("BCM_RGB_Sonderfunktion_01");
        Serial.println("BCM_RGB_Sonderfunktion_02");
        Serial.println("BCM_RGB_Sonderfunktion_03");
        Serial.println("BCM_RGB_Sonderfunktion_04");
        Serial.println("BCM_RGB_Sonderfunktion_05");
        Serial.println("BCM_RGB_Sonderfunktion_06");
        Serial.println("BCM_RGB_Sonderfunktion_07");
        Serial.println("BCM_RGB_Sonderfunktion_08");
        Serial.println("BCM_RGB_Sonderfunktion_09");
        Serial.println("BCM_RGB_Sonderfunktion_10");
        Serial.println("BCM_RGB_Sonderfunktion_11");
        Serial.println("BCM_RGB_Sonderfunktion_12");
        Serial.println("BCM_RGB_Sonderfunktion_13");
        Serial.println("BCM_RGB_Sonderfunktion_14");
        Serial.println("RGB_Slave_01d_HelligkeitsFaktor");
        Serial.println("RGB_Slave_01d_HW_Version");
        Serial.println("RGB_Slave_01d_IntError");
        Serial.println("RGB_Slave_01d_ResponseError");
        Serial.println("RGB_Slave_01d_StoredNAD");
        Serial.println("RGB_Slave_01d_SW_Version");
        Serial.println("RGB_Slave_01d_TempState");
        Serial.println("RGB_Slave_01d_Weisspunkt_u");
        Serial.println("RGB_Slave_01d_Weisspunkt_v");
        Serial.println("RGB_Slave_02d_HelligkeitsFaktor");
        Serial.println("RGB_Slave_02d_HW_Version");
        Serial.println("RGB_Slave_02d_IntError");
        Serial.println("RGB_Slave_02d_ResponseError");
        Serial.println("RGB_Slave_02d_StoredNAD");
        Serial.println("RGB_Slave_02d_SW_Version");
        Serial.println("RGB_Slave_02d_TempState");
        Serial.println("RGB_Slave_02d_Weisspunkt_u");
        Serial.println("RGB_Slave_02d_Weisspunkt_v");
        Serial.println("RGB_Slave_03d_HelligkeitsFaktor");
        Serial.println("RGB_Slave_03d_HW_Version");
        Serial.println("RGB_Slave_03d_IntError");
        Serial.println("RGB_Slave_03d_ResponseError");
        Serial.println("RGB_Slave_03d_StoredNAD");
        Serial.println("RGB_Slave_03d_SW_Version");
        Serial.println("RGB_Slave_03d_TempState");
        Serial.println("RGB_Slave_03d_Weisspunkt_u");
        Serial.println("RGB_Slave_03d_Weisspunkt_v");
        Serial.println("RGB_Slave_04d_HelligkeitsFaktor");
        Serial.println("RGB_Slave_04d_HW_Version");
        Serial.println("RGB_Slave_04d_IntError");
        Serial.println("RGB_Slave_04d_ResponseError");
        Serial.println("RGB_Slave_04d_StoredNAD");
        Serial.println("RGB_Slave_04d_SW_Version");
        Serial.println("RGB_Slave_04d_TempState");
        Serial.println("RGB_Slave_04d_Weisspunkt_u");
        Serial.println("RGB_Slave_04d_Weisspunkt_v");
        Serial.println("RGB_Slave_05d_HelligkeitsFaktor");
        Serial.println("RGB_Slave_05d_HW_Version");
        Serial.println("RGB_Slave_05d_IntError");
        Serial.println("RGB_Slave_05d_ResponseError");
        Serial.println("RGB_Slave_05d_StoredNAD");
        Serial.println("RGB_Slave_05d_SW_Version");
        Serial.println("RGB_Slave_05d_TempState");
        Serial.println("RGB_Slave_05d_Weisspunkt_u");
        Serial.println("RGB_Slave_05d_Weisspunkt_v");
        Serial.println("RGB_Slave_06d_HelligkeitsFaktor");
        Serial.println("RGB_Slave_06d_HW_Version");
        Serial.println("RGB_Slave_06d_IntError");
        Serial.println("RGB_Slave_06d_ResponseError");
        Serial.println("RGB_Slave_06d_StoredNAD");
        Serial.println("RGB_Slave_06d_SW_Version");
        Serial.println("RGB_Slave_06d_TempState");
        Serial.println("RGB_Slave_06d_Weisspunkt_u");
        Serial.println("RGB_Slave_06d_Weisspunkt_v");
        Serial.println("RGB_Slave_07d_HelligkeitsFaktor");
        Serial.println("RGB_Slave_07d_HW_Version");
        Serial.println("RGB_Slave_07d_IntError");
        Serial.println("RGB_Slave_07d_ResponseError");
        Serial.println("RGB_Slave_07d_StoredNAD");
        Serial.println("RGB_Slave_07d_SW_Version");
        Serial.println("RGB_Slave_07d_TempState");
        Serial.println("RGB_Slave_07d_Weisspunkt_u");
        Serial.println("RGB_Slave_07d_Weisspunkt_v");
        Serial.println("RGB_Slave_08d_HelligkeitsFaktor");
        Serial.println("RGB_Slave_08d_HW_Version");
        Serial.println("RGB_Slave_08d_IntError");
        Serial.println("RGB_Slave_08d_ResponseError");
        Serial.println("RGB_Slave_08d_StoredNAD");
        Serial.println("RGB_Slave_08d_SW_Version");
        Serial.println("RGB_Slave_08d_TempState");
        Serial.println("RGB_Slave_08d_Weisspunkt_u");
        Serial.println("RGB_Slave_08d_Weisspunkt_v");
        Serial.println("RGB_Slave_09d_HelligkeitsFaktor");
        Serial.println("RGB_Slave_09d_HW_Version");
        Serial.println("RGB_Slave_09d_IntError");
        Serial.println("RGB_Slave_09d_ResponseError");
        Serial.println("RGB_Slave_09d_StoredNAD");
        Serial.println("RGB_Slave_09d_SW_Version");
        Serial.println("RGB_Slave_09d_TempState");
        Serial.println("RGB_Slave_09d_Weisspunkt_u");
        Serial.println("RGB_Slave_09d_Weisspunkt_v");
        Serial.println("RGB_Slave_10d_HelligkeitsFaktor");
        Serial.println("RGB_Slave_10d_HW_Version");
        Serial.println("RGB_Slave_10d_IntError");
        Serial.println("RGB_Slave_10d_ResponseError");
        Serial.println("RGB_Slave_10d_StoredNAD");
        Serial.println("RGB_Slave_10d_SW_Version");
        Serial.println("RGB_Slave_10d_TempState");
        Serial.println("RGB_Slave_10d_Weisspunkt_u");
        Serial.println("RGB_Slave_10d_Weisspunkt_v");
        Serial.println("RGB_Slave_11d_HelligkeitsFaktor");
        Serial.println("RGB_Slave_11d_HW_Version");
        Serial.println("RGB_Slave_11d_IntError");
        Serial.println("RGB_Slave_11d_ResponseError");
        Serial.println("RGB_Slave_11d_StoredNAD");
        Serial.println("RGB_Slave_11d_SW_Version");
        Serial.println("RGB_Slave_11d_TempState");
        Serial.println("RGB_Slave_11d_Weisspunkt_u");
        Serial.println("RGB_Slave_11d_Weisspunkt_v");
        Serial.println("RGB_Slave_12d_HelligkeitsFaktor");
        Serial.println("RGB_Slave_12d_HW_Version");
        Serial.println("RGB_Slave_12d_IntError");
        Serial.println("RGB_Slave_12d_ResponseError");
        Serial.println("RGB_Slave_12d_StoredNAD");
        Serial.println("RGB_Slave_12d_SW_Version");
        Serial.println("RGB_Slave_12d_TempState");
        Serial.println("RGB_Slave_12d_Weisspunkt_u");
        Serial.println("RGB_Slave_12d_Weisspunkt_v");
        Serial.println("RGB_Slave_13d_HelligkeitsFaktor");
        Serial.println("RGB_Slave_13d_HW_Version");
        Serial.println("RGB_Slave_13d_IntError");
        Serial.println("RGB_Slave_13d_ResponseError");
        Serial.println("RGB_Slave_13d_StoredNAD");
        Serial.println("RGB_Slave_13d_SW_Version");
        Serial.println("RGB_Slave_13d_TempState");
        Serial.println("RGB_Slave_13d_Weisspunkt_u");
        Serial.println("RGB_Slave_13d_Weisspunkt_v");
        Serial.println("RGB_Slave_14d_HelligkeitsFaktor");
        Serial.println("RGB_Slave_14d_HW_Version");
        Serial.println("RGB_Slave_14d_IntError");
        Serial.println("RGB_Slave_14d_ResponseError");
        Serial.println("RGB_Slave_14d_StoredNAD");
        Serial.println("RGB_Slave_14d_SW_Version");
        Serial.println("RGB_Slave_14d_TempState");
        Serial.println("RGB_Slave_14d_Weisspunkt_u");
        Serial.println("RGB_Slave_14d_Weisspunkt_v");
        Serial.println("RGB_Slave_16d_ResponseError");
        Serial.println("SWrite_CRC_01");
        Serial.println("SWrite_CRC_02");
        Serial.println("SWrite_CRC_03");
        Serial.println("SWrite_CRC_04");
        Serial.println("SWrite_CRC_05");
        Serial.println("SWrite_CRC_06");
        Serial.println("SWrite_CRC_07");
        Serial.println("SWrite_CRC_08");
        Serial.println("SWrite_CRC_09");
        Serial.println("SWrite_CRC_10");
        Serial.println("SWrite_CRC_11");
        Serial.println("SWrite_CRC_12");
        Serial.println("SWrite_CRC_13");
        Serial.println("SWrite_CRC_14");
        Serial.println("SWrite_Data_B1_01");
        Serial.println("SWrite_Data_B1_02");
        Serial.println("SWrite_Data_B1_03");
        Serial.println("SWrite_Data_B1_04");
        Serial.println("SWrite_Data_B1_05");
        Serial.println("SWrite_Data_B1_06");
        Serial.println("SWrite_Data_B1_07");
        Serial.println("SWrite_Data_B1_08");
        Serial.println("SWrite_Data_B1_09");
        Serial.println("SWrite_Data_B1_10");
        Serial.println("SWrite_Data_B1_11");
        Serial.println("SWrite_Data_B1_12");
        Serial.println("SWrite_Data_B1_13");
        Serial.println("SWrite_Data_B1_14");
        Serial.println("SWrite_Data_B2_01");
        Serial.println("SWrite_Data_B2_02");
        Serial.println("SWrite_Data_B2_03");
        Serial.println("SWrite_Data_B2_04");
        Serial.println("SWrite_Data_B2_05");
        Serial.println("SWrite_Data_B2_06");
        Serial.println("SWrite_Data_B2_07");
        Serial.println("SWrite_Data_B2_08");
        Serial.println("SWrite_Data_B2_09");
        Serial.println("SWrite_Data_B2_10");
        Serial.println("SWrite_Data_B2_11");
        Serial.println("SWrite_Data_B2_12");
        Serial.println("SWrite_Data_B2_13");
        Serial.println("SWrite_Data_B2_14");
        Serial.println("SWrite_Data_B3_01");
        Serial.println("SWrite_Data_B3_02");
        Serial.println("SWrite_Data_B3_03");
        Serial.println("SWrite_Data_B3_04");
        Serial.println("SWrite_Data_B3_05");
        Serial.println("SWrite_Data_B3_06");
        Serial.println("SWrite_Data_B3_07");
        Serial.println("SWrite_Data_B3_08");
        Serial.println("SWrite_Data_B3_09");
        Serial.println("SWrite_Data_B3_10");
        Serial.println("SWrite_Data_B3_11");
        Serial.println("SWrite_Data_B3_12");
        Serial.println("SWrite_Data_B3_13");
        Serial.println("SWrite_Data_B3_14");
        Serial.println("SWrite_Data_B4_01");
        Serial.println("SWrite_Data_B4_02");
        Serial.println("SWrite_Data_B4_03");
        Serial.println("SWrite_Data_B4_04");
        Serial.println("SWrite_Data_B4_05");
        Serial.println("SWrite_Data_B4_06");
        Serial.println("SWrite_Data_B4_07");
        Serial.println("SWrite_Data_B4_08");
        Serial.println("SWrite_Data_B4_09");
        Serial.println("SWrite_Data_B4_10");
        Serial.println("SWrite_Data_B4_11");
        Serial.println("SWrite_Data_B4_12");
        Serial.println("SWrite_Data_B4_13");
        Serial.println("SWrite_Data_B4_14");
        Serial.println("SWrite_Data_B5_01");
        Serial.println("SWrite_Data_B5_02");
        Serial.println("SWrite_Data_B5_03");
        Serial.println("SWrite_Data_B5_04");
        Serial.println("SWrite_Data_B5_05");
        Serial.println("SWrite_Data_B5_06");
        Serial.println("SWrite_Data_B5_07");
        Serial.println("SWrite_Data_B5_08");
        Serial.println("SWrite_Data_B5_09");
        Serial.println("SWrite_Data_B5_10");
        Serial.println("SWrite_Data_B5_11");
        Serial.println("SWrite_Data_B5_12");
        Serial.println("SWrite_Data_B5_13");
        Serial.println("SWrite_Data_B5_14");
        Serial.println("SWrite_Dummy_01");
        Serial.println("SWrite_Dummy_02");
        Serial.println("SWrite_Dummy_03");
        Serial.println("SWrite_Dummy_04");
        Serial.println("SWrite_Dummy_05");
        Serial.println("SWrite_Dummy_06");
        Serial.println("SWrite_Dummy_07");
        Serial.println("SWrite_Dummy_08");
        Serial.println("SWrite_Dummy_09");
        Serial.println("SWrite_Dummy_10");
        Serial.println("SWrite_Dummy_11");
        Serial.println("SWrite_Dummy_12");
        Serial.println("SWrite_Dummy_13");
        Serial.println("SWrite_Dummy_14");
        Serial.println("SWrite_Len_01");
        Serial.println("SWrite_Len_02");
        Serial.println("SWrite_Len_03");
        Serial.println("SWrite_Len_04");
        Serial.println("SWrite_Len_05");
        Serial.println("SWrite_Len_06");
        Serial.println("SWrite_Len_07");
        Serial.println("SWrite_Len_08");
        Serial.println("SWrite_Len_09");
        Serial.println("SWrite_Len_10");
        Serial.println("SWrite_Len_11");
        Serial.println("SWrite_Len_12");
        Serial.println("SWrite_Len_13");
        Serial.println("SWrite_Len_14");
        Serial.println("SWrite_MemAddress_01");
        Serial.println("SWrite_MemAddress_02");
        Serial.println("SWrite_MemAddress_03");
        Serial.println("SWrite_MemAddress_04");
        Serial.println("SWrite_MemAddress_05");
        Serial.println("SWrite_MemAddress_06");
        Serial.println("SWrite_MemAddress_07");
        Serial.println("SWrite_MemAddress_08");
        Serial.println("SWrite_MemAddress_09");
        Serial.println("SWrite_MemAddress_10");
        Serial.println("SWrite_MemAddress_11");
        Serial.println("SWrite_MemAddress_12");
        Serial.println("SWrite_MemAddress_13");
        Serial.println("SWrite_MemAddress_14");
        return;
    }
    if(input.startsWith("set:")) {
        input = input.substring(4);
        if(input.startsWith("BCM_RGB_Color_u_01")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_u_01.data = value;
            Serial.printf("New Value for BCM_RGB_Color_u_01 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_u_02")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_u_02.data = value;
            Serial.printf("New Value for BCM_RGB_Color_u_02 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_u_03")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_u_03.data = value;
            Serial.printf("New Value for BCM_RGB_Color_u_03 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_u_04")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_u_04.data = value;
            Serial.printf("New Value for BCM_RGB_Color_u_04 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_u_05")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_u_05.data = value;
            Serial.printf("New Value for BCM_RGB_Color_u_05 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_u_06")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_u_06.data = value;
            Serial.printf("New Value for BCM_RGB_Color_u_06 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_u_07")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_u_07.data = value;
            Serial.printf("New Value for BCM_RGB_Color_u_07 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_u_08")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_u_08.data = value;
            Serial.printf("New Value for BCM_RGB_Color_u_08 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_u_09")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_u_09.data = value;
            Serial.printf("New Value for BCM_RGB_Color_u_09 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_u_10")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_u_10.data = value;
            Serial.printf("New Value for BCM_RGB_Color_u_10 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_u_11")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_u_11.data = value;
            Serial.printf("New Value for BCM_RGB_Color_u_11 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_u_12")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_u_12.data = value;
            Serial.printf("New Value for BCM_RGB_Color_u_12 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_u_13")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_u_13.data = value;
            Serial.printf("New Value for BCM_RGB_Color_u_13 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_u_14")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_u_14.data = value;
            Serial.printf("New Value for BCM_RGB_Color_u_14 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_v_01")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_v_01.data = value;
            Serial.printf("New Value for BCM_RGB_Color_v_01 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_v_02")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_v_02.data = value;
            Serial.printf("New Value for BCM_RGB_Color_v_02 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_v_03")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_v_03.data = value;
            Serial.printf("New Value for BCM_RGB_Color_v_03 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_v_04")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_v_04.data = value;
            Serial.printf("New Value for BCM_RGB_Color_v_04 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_v_05")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_v_05.data = value;
            Serial.printf("New Value for BCM_RGB_Color_v_05 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_v_06")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_v_06.data = value;
            Serial.printf("New Value for BCM_RGB_Color_v_06 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_v_07")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_v_07.data = value;
            Serial.printf("New Value for BCM_RGB_Color_v_07 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_v_08")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_v_08.data = value;
            Serial.printf("New Value for BCM_RGB_Color_v_08 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_v_09")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_v_09.data = value;
            Serial.printf("New Value for BCM_RGB_Color_v_09 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_v_10")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_v_10.data = value;
            Serial.printf("New Value for BCM_RGB_Color_v_10 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_v_11")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_v_11.data = value;
            Serial.printf("New Value for BCM_RGB_Color_v_11 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_v_12")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_v_12.data = value;
            Serial.printf("New Value for BCM_RGB_Color_v_12 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_v_13")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_v_13.data = value;
            Serial.printf("New Value for BCM_RGB_Color_v_13 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Color_v_14")) {
            int value = strtol(input.substring(18 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Color_v_14.data = value;
            Serial.printf("New Value for BCM_RGB_Color_v_14 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_01")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Dimmrampe_01.data = value;
            Serial.printf("New Value for BCM_RGB_Dimmrampe_01 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_02")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Dimmrampe_02.data = value;
            Serial.printf("New Value for BCM_RGB_Dimmrampe_02 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_03")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Dimmrampe_03.data = value;
            Serial.printf("New Value for BCM_RGB_Dimmrampe_03 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_04")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Dimmrampe_04.data = value;
            Serial.printf("New Value for BCM_RGB_Dimmrampe_04 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_05")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Dimmrampe_05.data = value;
            Serial.printf("New Value for BCM_RGB_Dimmrampe_05 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_06")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Dimmrampe_06.data = value;
            Serial.printf("New Value for BCM_RGB_Dimmrampe_06 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_07")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Dimmrampe_07.data = value;
            Serial.printf("New Value for BCM_RGB_Dimmrampe_07 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_08")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Dimmrampe_08.data = value;
            Serial.printf("New Value for BCM_RGB_Dimmrampe_08 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_09")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Dimmrampe_09.data = value;
            Serial.printf("New Value for BCM_RGB_Dimmrampe_09 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_10")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Dimmrampe_10.data = value;
            Serial.printf("New Value for BCM_RGB_Dimmrampe_10 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_11")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Dimmrampe_11.data = value;
            Serial.printf("New Value for BCM_RGB_Dimmrampe_11 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_12")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Dimmrampe_12.data = value;
            Serial.printf("New Value for BCM_RGB_Dimmrampe_12 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_13")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Dimmrampe_13.data = value;
            Serial.printf("New Value for BCM_RGB_Dimmrampe_13 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_14")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Dimmrampe_14.data = value;
            Serial.printf("New Value for BCM_RGB_Dimmrampe_14 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_GlobalSync_01")) {
            int value = strtol(input.substring(21 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_GlobalSync_01.data = value;
            Serial.printf("New Value for BCM_RGB_GlobalSync_01 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_GlobalSync_03")) {
            int value = strtol(input.substring(21 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_GlobalSync_03.data = value;
            Serial.printf("New Value for BCM_RGB_GlobalSync_03 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_GlobalSync_05")) {
            int value = strtol(input.substring(21 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_GlobalSync_05.data = value;
            Serial.printf("New Value for BCM_RGB_GlobalSync_05 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_GlobalSync_07")) {
            int value = strtol(input.substring(21 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_GlobalSync_07.data = value;
            Serial.printf("New Value for BCM_RGB_GlobalSync_07 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_GlobalSync_09")) {
            int value = strtol(input.substring(21 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_GlobalSync_09.data = value;
            Serial.printf("New Value for BCM_RGB_GlobalSync_09 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_GlobalSync_11")) {
            int value = strtol(input.substring(21 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_GlobalSync_11.data = value;
            Serial.printf("New Value for BCM_RGB_GlobalSync_11 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_GlobalSync_13")) {
            int value = strtol(input.substring(21 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_GlobalSync_13.data = value;
            Serial.printf("New Value for BCM_RGB_GlobalSync_13 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_01")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Intensitaet_01.data = value;
            Serial.printf("New Value for BCM_RGB_Intensitaet_01 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_02")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Intensitaet_02.data = value;
            Serial.printf("New Value for BCM_RGB_Intensitaet_02 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_03")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Intensitaet_03.data = value;
            Serial.printf("New Value for BCM_RGB_Intensitaet_03 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_04")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Intensitaet_04.data = value;
            Serial.printf("New Value for BCM_RGB_Intensitaet_04 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_05")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Intensitaet_05.data = value;
            Serial.printf("New Value for BCM_RGB_Intensitaet_05 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_06")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Intensitaet_06.data = value;
            Serial.printf("New Value for BCM_RGB_Intensitaet_06 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_07")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Intensitaet_07.data = value;
            Serial.printf("New Value for BCM_RGB_Intensitaet_07 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_08")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Intensitaet_08.data = value;
            Serial.printf("New Value for BCM_RGB_Intensitaet_08 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_09")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Intensitaet_09.data = value;
            Serial.printf("New Value for BCM_RGB_Intensitaet_09 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_10")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Intensitaet_10.data = value;
            Serial.printf("New Value for BCM_RGB_Intensitaet_10 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_11")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Intensitaet_11.data = value;
            Serial.printf("New Value for BCM_RGB_Intensitaet_11 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_12")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Intensitaet_12.data = value;
            Serial.printf("New Value for BCM_RGB_Intensitaet_12 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_13")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Intensitaet_13.data = value;
            Serial.printf("New Value for BCM_RGB_Intensitaet_13 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_14")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Intensitaet_14.data = value;
            Serial.printf("New Value for BCM_RGB_Intensitaet_14 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_01")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Sonderfunktion_01.data = value;
            Serial.printf("New Value for BCM_RGB_Sonderfunktion_01 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_02")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Sonderfunktion_02.data = value;
            Serial.printf("New Value for BCM_RGB_Sonderfunktion_02 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_03")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Sonderfunktion_03.data = value;
            Serial.printf("New Value for BCM_RGB_Sonderfunktion_03 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_04")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Sonderfunktion_04.data = value;
            Serial.printf("New Value for BCM_RGB_Sonderfunktion_04 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_05")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Sonderfunktion_05.data = value;
            Serial.printf("New Value for BCM_RGB_Sonderfunktion_05 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_06")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Sonderfunktion_06.data = value;
            Serial.printf("New Value for BCM_RGB_Sonderfunktion_06 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_07")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Sonderfunktion_07.data = value;
            Serial.printf("New Value for BCM_RGB_Sonderfunktion_07 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_08")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Sonderfunktion_08.data = value;
            Serial.printf("New Value for BCM_RGB_Sonderfunktion_08 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_09")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Sonderfunktion_09.data = value;
            Serial.printf("New Value for BCM_RGB_Sonderfunktion_09 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_10")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Sonderfunktion_10.data = value;
            Serial.printf("New Value for BCM_RGB_Sonderfunktion_10 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_11")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Sonderfunktion_11.data = value;
            Serial.printf("New Value for BCM_RGB_Sonderfunktion_11 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_12")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Sonderfunktion_12.data = value;
            Serial.printf("New Value for BCM_RGB_Sonderfunktion_12 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_13")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Sonderfunktion_13.data = value;
            Serial.printf("New Value for BCM_RGB_Sonderfunktion_13 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_14")) {
            int value = strtol(input.substring(25 + 1).c_str(), NULL, 0);
            mySignal->BCM_RGB_Sonderfunktion_14.data = value;
            Serial.printf("New Value for BCM_RGB_Sonderfunktion_14 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_01d_HelligkeitsFaktor")) {
            int value = strtol(input.substring(31 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_01d_HelligkeitsFaktor.data = value;
            Serial.printf("New Value for RGB_Slave_01d_HelligkeitsFaktor = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_01d_HW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_01d_HW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_01d_HW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_01d_IntError")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_01d_IntError.data = value;
            Serial.printf("New Value for RGB_Slave_01d_IntError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_01d_ResponseError")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_01d_ResponseError.data = value;
            Serial.printf("New Value for RGB_Slave_01d_ResponseError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_01d_StoredNAD")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_01d_StoredNAD.data = value;
            Serial.printf("New Value for RGB_Slave_01d_StoredNAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_01d_SW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_01d_SW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_01d_SW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_01d_TempState")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_01d_TempState.data = value;
            Serial.printf("New Value for RGB_Slave_01d_TempState = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_01d_Weisspunkt_u")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_01d_Weisspunkt_u.data = value;
            Serial.printf("New Value for RGB_Slave_01d_Weisspunkt_u = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_01d_Weisspunkt_v")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_01d_Weisspunkt_v.data = value;
            Serial.printf("New Value for RGB_Slave_01d_Weisspunkt_v = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_02d_HelligkeitsFaktor")) {
            int value = strtol(input.substring(31 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_02d_HelligkeitsFaktor.data = value;
            Serial.printf("New Value for RGB_Slave_02d_HelligkeitsFaktor = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_02d_HW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_02d_HW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_02d_HW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_02d_IntError")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_02d_IntError.data = value;
            Serial.printf("New Value for RGB_Slave_02d_IntError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_02d_ResponseError")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_02d_ResponseError.data = value;
            Serial.printf("New Value for RGB_Slave_02d_ResponseError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_02d_StoredNAD")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_02d_StoredNAD.data = value;
            Serial.printf("New Value for RGB_Slave_02d_StoredNAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_02d_SW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_02d_SW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_02d_SW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_02d_TempState")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_02d_TempState.data = value;
            Serial.printf("New Value for RGB_Slave_02d_TempState = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_02d_Weisspunkt_u")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_02d_Weisspunkt_u.data = value;
            Serial.printf("New Value for RGB_Slave_02d_Weisspunkt_u = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_02d_Weisspunkt_v")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_02d_Weisspunkt_v.data = value;
            Serial.printf("New Value for RGB_Slave_02d_Weisspunkt_v = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_03d_HelligkeitsFaktor")) {
            int value = strtol(input.substring(31 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_03d_HelligkeitsFaktor.data = value;
            Serial.printf("New Value for RGB_Slave_03d_HelligkeitsFaktor = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_03d_HW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_03d_HW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_03d_HW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_03d_IntError")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_03d_IntError.data = value;
            Serial.printf("New Value for RGB_Slave_03d_IntError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_03d_ResponseError")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_03d_ResponseError.data = value;
            Serial.printf("New Value for RGB_Slave_03d_ResponseError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_03d_StoredNAD")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_03d_StoredNAD.data = value;
            Serial.printf("New Value for RGB_Slave_03d_StoredNAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_03d_SW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_03d_SW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_03d_SW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_03d_TempState")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_03d_TempState.data = value;
            Serial.printf("New Value for RGB_Slave_03d_TempState = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_03d_Weisspunkt_u")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_03d_Weisspunkt_u.data = value;
            Serial.printf("New Value for RGB_Slave_03d_Weisspunkt_u = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_03d_Weisspunkt_v")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_03d_Weisspunkt_v.data = value;
            Serial.printf("New Value for RGB_Slave_03d_Weisspunkt_v = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_04d_HelligkeitsFaktor")) {
            int value = strtol(input.substring(31 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_04d_HelligkeitsFaktor.data = value;
            Serial.printf("New Value for RGB_Slave_04d_HelligkeitsFaktor = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_04d_HW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_04d_HW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_04d_HW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_04d_IntError")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_04d_IntError.data = value;
            Serial.printf("New Value for RGB_Slave_04d_IntError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_04d_ResponseError")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_04d_ResponseError.data = value;
            Serial.printf("New Value for RGB_Slave_04d_ResponseError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_04d_StoredNAD")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_04d_StoredNAD.data = value;
            Serial.printf("New Value for RGB_Slave_04d_StoredNAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_04d_SW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_04d_SW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_04d_SW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_04d_TempState")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_04d_TempState.data = value;
            Serial.printf("New Value for RGB_Slave_04d_TempState = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_04d_Weisspunkt_u")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_04d_Weisspunkt_u.data = value;
            Serial.printf("New Value for RGB_Slave_04d_Weisspunkt_u = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_04d_Weisspunkt_v")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_04d_Weisspunkt_v.data = value;
            Serial.printf("New Value for RGB_Slave_04d_Weisspunkt_v = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_05d_HelligkeitsFaktor")) {
            int value = strtol(input.substring(31 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_05d_HelligkeitsFaktor.data = value;
            Serial.printf("New Value for RGB_Slave_05d_HelligkeitsFaktor = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_05d_HW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_05d_HW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_05d_HW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_05d_IntError")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_05d_IntError.data = value;
            Serial.printf("New Value for RGB_Slave_05d_IntError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_05d_ResponseError")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_05d_ResponseError.data = value;
            Serial.printf("New Value for RGB_Slave_05d_ResponseError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_05d_StoredNAD")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_05d_StoredNAD.data = value;
            Serial.printf("New Value for RGB_Slave_05d_StoredNAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_05d_SW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_05d_SW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_05d_SW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_05d_TempState")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_05d_TempState.data = value;
            Serial.printf("New Value for RGB_Slave_05d_TempState = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_05d_Weisspunkt_u")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_05d_Weisspunkt_u.data = value;
            Serial.printf("New Value for RGB_Slave_05d_Weisspunkt_u = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_05d_Weisspunkt_v")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_05d_Weisspunkt_v.data = value;
            Serial.printf("New Value for RGB_Slave_05d_Weisspunkt_v = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_06d_HelligkeitsFaktor")) {
            int value = strtol(input.substring(31 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_06d_HelligkeitsFaktor.data = value;
            Serial.printf("New Value for RGB_Slave_06d_HelligkeitsFaktor = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_06d_HW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_06d_HW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_06d_HW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_06d_IntError")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_06d_IntError.data = value;
            Serial.printf("New Value for RGB_Slave_06d_IntError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_06d_ResponseError")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_06d_ResponseError.data = value;
            Serial.printf("New Value for RGB_Slave_06d_ResponseError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_06d_StoredNAD")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_06d_StoredNAD.data = value;
            Serial.printf("New Value for RGB_Slave_06d_StoredNAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_06d_SW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_06d_SW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_06d_SW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_06d_TempState")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_06d_TempState.data = value;
            Serial.printf("New Value for RGB_Slave_06d_TempState = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_06d_Weisspunkt_u")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_06d_Weisspunkt_u.data = value;
            Serial.printf("New Value for RGB_Slave_06d_Weisspunkt_u = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_06d_Weisspunkt_v")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_06d_Weisspunkt_v.data = value;
            Serial.printf("New Value for RGB_Slave_06d_Weisspunkt_v = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_07d_HelligkeitsFaktor")) {
            int value = strtol(input.substring(31 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_07d_HelligkeitsFaktor.data = value;
            Serial.printf("New Value for RGB_Slave_07d_HelligkeitsFaktor = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_07d_HW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_07d_HW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_07d_HW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_07d_IntError")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_07d_IntError.data = value;
            Serial.printf("New Value for RGB_Slave_07d_IntError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_07d_ResponseError")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_07d_ResponseError.data = value;
            Serial.printf("New Value for RGB_Slave_07d_ResponseError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_07d_StoredNAD")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_07d_StoredNAD.data = value;
            Serial.printf("New Value for RGB_Slave_07d_StoredNAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_07d_SW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_07d_SW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_07d_SW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_07d_TempState")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_07d_TempState.data = value;
            Serial.printf("New Value for RGB_Slave_07d_TempState = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_07d_Weisspunkt_u")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_07d_Weisspunkt_u.data = value;
            Serial.printf("New Value for RGB_Slave_07d_Weisspunkt_u = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_07d_Weisspunkt_v")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_07d_Weisspunkt_v.data = value;
            Serial.printf("New Value for RGB_Slave_07d_Weisspunkt_v = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_08d_HelligkeitsFaktor")) {
            int value = strtol(input.substring(31 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_08d_HelligkeitsFaktor.data = value;
            Serial.printf("New Value for RGB_Slave_08d_HelligkeitsFaktor = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_08d_HW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_08d_HW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_08d_HW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_08d_IntError")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_08d_IntError.data = value;
            Serial.printf("New Value for RGB_Slave_08d_IntError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_08d_ResponseError")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_08d_ResponseError.data = value;
            Serial.printf("New Value for RGB_Slave_08d_ResponseError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_08d_StoredNAD")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_08d_StoredNAD.data = value;
            Serial.printf("New Value for RGB_Slave_08d_StoredNAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_08d_SW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_08d_SW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_08d_SW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_08d_TempState")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_08d_TempState.data = value;
            Serial.printf("New Value for RGB_Slave_08d_TempState = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_08d_Weisspunkt_u")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_08d_Weisspunkt_u.data = value;
            Serial.printf("New Value for RGB_Slave_08d_Weisspunkt_u = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_08d_Weisspunkt_v")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_08d_Weisspunkt_v.data = value;
            Serial.printf("New Value for RGB_Slave_08d_Weisspunkt_v = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_09d_HelligkeitsFaktor")) {
            int value = strtol(input.substring(31 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_09d_HelligkeitsFaktor.data = value;
            Serial.printf("New Value for RGB_Slave_09d_HelligkeitsFaktor = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_09d_HW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_09d_HW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_09d_HW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_09d_IntError")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_09d_IntError.data = value;
            Serial.printf("New Value for RGB_Slave_09d_IntError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_09d_ResponseError")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_09d_ResponseError.data = value;
            Serial.printf("New Value for RGB_Slave_09d_ResponseError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_09d_StoredNAD")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_09d_StoredNAD.data = value;
            Serial.printf("New Value for RGB_Slave_09d_StoredNAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_09d_SW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_09d_SW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_09d_SW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_09d_TempState")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_09d_TempState.data = value;
            Serial.printf("New Value for RGB_Slave_09d_TempState = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_09d_Weisspunkt_u")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_09d_Weisspunkt_u.data = value;
            Serial.printf("New Value for RGB_Slave_09d_Weisspunkt_u = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_09d_Weisspunkt_v")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_09d_Weisspunkt_v.data = value;
            Serial.printf("New Value for RGB_Slave_09d_Weisspunkt_v = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_10d_HelligkeitsFaktor")) {
            int value = strtol(input.substring(31 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_10d_HelligkeitsFaktor.data = value;
            Serial.printf("New Value for RGB_Slave_10d_HelligkeitsFaktor = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_10d_HW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_10d_HW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_10d_HW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_10d_IntError")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_10d_IntError.data = value;
            Serial.printf("New Value for RGB_Slave_10d_IntError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_10d_ResponseError")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_10d_ResponseError.data = value;
            Serial.printf("New Value for RGB_Slave_10d_ResponseError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_10d_StoredNAD")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_10d_StoredNAD.data = value;
            Serial.printf("New Value for RGB_Slave_10d_StoredNAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_10d_SW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_10d_SW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_10d_SW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_10d_TempState")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_10d_TempState.data = value;
            Serial.printf("New Value for RGB_Slave_10d_TempState = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_10d_Weisspunkt_u")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_10d_Weisspunkt_u.data = value;
            Serial.printf("New Value for RGB_Slave_10d_Weisspunkt_u = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_10d_Weisspunkt_v")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_10d_Weisspunkt_v.data = value;
            Serial.printf("New Value for RGB_Slave_10d_Weisspunkt_v = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_11d_HelligkeitsFaktor")) {
            int value = strtol(input.substring(31 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_11d_HelligkeitsFaktor.data = value;
            Serial.printf("New Value for RGB_Slave_11d_HelligkeitsFaktor = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_11d_HW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_11d_HW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_11d_HW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_11d_IntError")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_11d_IntError.data = value;
            Serial.printf("New Value for RGB_Slave_11d_IntError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_11d_ResponseError")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_11d_ResponseError.data = value;
            Serial.printf("New Value for RGB_Slave_11d_ResponseError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_11d_StoredNAD")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_11d_StoredNAD.data = value;
            Serial.printf("New Value for RGB_Slave_11d_StoredNAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_11d_SW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_11d_SW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_11d_SW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_11d_TempState")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_11d_TempState.data = value;
            Serial.printf("New Value for RGB_Slave_11d_TempState = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_11d_Weisspunkt_u")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_11d_Weisspunkt_u.data = value;
            Serial.printf("New Value for RGB_Slave_11d_Weisspunkt_u = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_11d_Weisspunkt_v")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_11d_Weisspunkt_v.data = value;
            Serial.printf("New Value for RGB_Slave_11d_Weisspunkt_v = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_12d_HelligkeitsFaktor")) {
            int value = strtol(input.substring(31 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_12d_HelligkeitsFaktor.data = value;
            Serial.printf("New Value for RGB_Slave_12d_HelligkeitsFaktor = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_12d_HW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_12d_HW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_12d_HW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_12d_IntError")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_12d_IntError.data = value;
            Serial.printf("New Value for RGB_Slave_12d_IntError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_12d_ResponseError")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_12d_ResponseError.data = value;
            Serial.printf("New Value for RGB_Slave_12d_ResponseError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_12d_StoredNAD")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_12d_StoredNAD.data = value;
            Serial.printf("New Value for RGB_Slave_12d_StoredNAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_12d_SW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_12d_SW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_12d_SW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_12d_TempState")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_12d_TempState.data = value;
            Serial.printf("New Value for RGB_Slave_12d_TempState = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_12d_Weisspunkt_u")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_12d_Weisspunkt_u.data = value;
            Serial.printf("New Value for RGB_Slave_12d_Weisspunkt_u = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_12d_Weisspunkt_v")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_12d_Weisspunkt_v.data = value;
            Serial.printf("New Value for RGB_Slave_12d_Weisspunkt_v = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_13d_HelligkeitsFaktor")) {
            int value = strtol(input.substring(31 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_13d_HelligkeitsFaktor.data = value;
            Serial.printf("New Value for RGB_Slave_13d_HelligkeitsFaktor = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_13d_HW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_13d_HW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_13d_HW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_13d_IntError")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_13d_IntError.data = value;
            Serial.printf("New Value for RGB_Slave_13d_IntError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_13d_ResponseError")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_13d_ResponseError.data = value;
            Serial.printf("New Value for RGB_Slave_13d_ResponseError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_13d_StoredNAD")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_13d_StoredNAD.data = value;
            Serial.printf("New Value for RGB_Slave_13d_StoredNAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_13d_SW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_13d_SW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_13d_SW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_13d_TempState")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_13d_TempState.data = value;
            Serial.printf("New Value for RGB_Slave_13d_TempState = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_13d_Weisspunkt_u")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_13d_Weisspunkt_u.data = value;
            Serial.printf("New Value for RGB_Slave_13d_Weisspunkt_u = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_13d_Weisspunkt_v")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_13d_Weisspunkt_v.data = value;
            Serial.printf("New Value for RGB_Slave_13d_Weisspunkt_v = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_14d_HelligkeitsFaktor")) {
            int value = strtol(input.substring(31 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_14d_HelligkeitsFaktor.data = value;
            Serial.printf("New Value for RGB_Slave_14d_HelligkeitsFaktor = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_14d_HW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_14d_HW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_14d_HW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_14d_IntError")) {
            int value = strtol(input.substring(22 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_14d_IntError.data = value;
            Serial.printf("New Value for RGB_Slave_14d_IntError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_14d_ResponseError")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_14d_ResponseError.data = value;
            Serial.printf("New Value for RGB_Slave_14d_ResponseError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_14d_StoredNAD")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_14d_StoredNAD.data = value;
            Serial.printf("New Value for RGB_Slave_14d_StoredNAD = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_14d_SW_Version")) {
            int value = strtol(input.substring(24 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_14d_SW_Version.data = value;
            Serial.printf("New Value for RGB_Slave_14d_SW_Version = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_14d_TempState")) {
            int value = strtol(input.substring(23 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_14d_TempState.data = value;
            Serial.printf("New Value for RGB_Slave_14d_TempState = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_14d_Weisspunkt_u")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_14d_Weisspunkt_u.data = value;
            Serial.printf("New Value for RGB_Slave_14d_Weisspunkt_u = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_14d_Weisspunkt_v")) {
            int value = strtol(input.substring(26 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_14d_Weisspunkt_v.data = value;
            Serial.printf("New Value for RGB_Slave_14d_Weisspunkt_v = %d", value);
            Serial.println();
        }
        else if(input.startsWith("RGB_Slave_16d_ResponseError")) {
            int value = strtol(input.substring(27 + 1).c_str(), NULL, 0);
            mySignal->RGB_Slave_16d_ResponseError.data = value;
            Serial.printf("New Value for RGB_Slave_16d_ResponseError = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_CRC_01")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_CRC_01.data = value;
            Serial.printf("New Value for SWrite_CRC_01 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_CRC_02")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_CRC_02.data = value;
            Serial.printf("New Value for SWrite_CRC_02 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_CRC_03")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_CRC_03.data = value;
            Serial.printf("New Value for SWrite_CRC_03 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_CRC_04")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_CRC_04.data = value;
            Serial.printf("New Value for SWrite_CRC_04 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_CRC_05")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_CRC_05.data = value;
            Serial.printf("New Value for SWrite_CRC_05 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_CRC_06")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_CRC_06.data = value;
            Serial.printf("New Value for SWrite_CRC_06 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_CRC_07")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_CRC_07.data = value;
            Serial.printf("New Value for SWrite_CRC_07 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_CRC_08")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_CRC_08.data = value;
            Serial.printf("New Value for SWrite_CRC_08 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_CRC_09")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_CRC_09.data = value;
            Serial.printf("New Value for SWrite_CRC_09 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_CRC_10")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_CRC_10.data = value;
            Serial.printf("New Value for SWrite_CRC_10 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_CRC_11")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_CRC_11.data = value;
            Serial.printf("New Value for SWrite_CRC_11 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_CRC_12")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_CRC_12.data = value;
            Serial.printf("New Value for SWrite_CRC_12 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_CRC_13")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_CRC_13.data = value;
            Serial.printf("New Value for SWrite_CRC_13 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_CRC_14")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_CRC_14.data = value;
            Serial.printf("New Value for SWrite_CRC_14 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B1_01")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B1_01.data = value;
            Serial.printf("New Value for SWrite_Data_B1_01 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B1_02")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B1_02.data = value;
            Serial.printf("New Value for SWrite_Data_B1_02 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B1_03")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B1_03.data = value;
            Serial.printf("New Value for SWrite_Data_B1_03 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B1_04")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B1_04.data = value;
            Serial.printf("New Value for SWrite_Data_B1_04 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B1_05")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B1_05.data = value;
            Serial.printf("New Value for SWrite_Data_B1_05 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B1_06")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B1_06.data = value;
            Serial.printf("New Value for SWrite_Data_B1_06 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B1_07")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B1_07.data = value;
            Serial.printf("New Value for SWrite_Data_B1_07 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B1_08")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B1_08.data = value;
            Serial.printf("New Value for SWrite_Data_B1_08 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B1_09")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B1_09.data = value;
            Serial.printf("New Value for SWrite_Data_B1_09 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B1_10")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B1_10.data = value;
            Serial.printf("New Value for SWrite_Data_B1_10 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B1_11")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B1_11.data = value;
            Serial.printf("New Value for SWrite_Data_B1_11 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B1_12")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B1_12.data = value;
            Serial.printf("New Value for SWrite_Data_B1_12 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B1_13")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B1_13.data = value;
            Serial.printf("New Value for SWrite_Data_B1_13 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B1_14")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B1_14.data = value;
            Serial.printf("New Value for SWrite_Data_B1_14 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B2_01")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B2_01.data = value;
            Serial.printf("New Value for SWrite_Data_B2_01 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B2_02")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B2_02.data = value;
            Serial.printf("New Value for SWrite_Data_B2_02 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B2_03")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B2_03.data = value;
            Serial.printf("New Value for SWrite_Data_B2_03 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B2_04")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B2_04.data = value;
            Serial.printf("New Value for SWrite_Data_B2_04 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B2_05")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B2_05.data = value;
            Serial.printf("New Value for SWrite_Data_B2_05 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B2_06")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B2_06.data = value;
            Serial.printf("New Value for SWrite_Data_B2_06 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B2_07")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B2_07.data = value;
            Serial.printf("New Value for SWrite_Data_B2_07 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B2_08")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B2_08.data = value;
            Serial.printf("New Value for SWrite_Data_B2_08 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B2_09")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B2_09.data = value;
            Serial.printf("New Value for SWrite_Data_B2_09 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B2_10")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B2_10.data = value;
            Serial.printf("New Value for SWrite_Data_B2_10 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B2_11")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B2_11.data = value;
            Serial.printf("New Value for SWrite_Data_B2_11 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B2_12")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B2_12.data = value;
            Serial.printf("New Value for SWrite_Data_B2_12 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B2_13")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B2_13.data = value;
            Serial.printf("New Value for SWrite_Data_B2_13 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B2_14")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B2_14.data = value;
            Serial.printf("New Value for SWrite_Data_B2_14 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B3_01")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B3_01.data = value;
            Serial.printf("New Value for SWrite_Data_B3_01 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B3_02")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B3_02.data = value;
            Serial.printf("New Value for SWrite_Data_B3_02 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B3_03")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B3_03.data = value;
            Serial.printf("New Value for SWrite_Data_B3_03 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B3_04")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B3_04.data = value;
            Serial.printf("New Value for SWrite_Data_B3_04 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B3_05")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B3_05.data = value;
            Serial.printf("New Value for SWrite_Data_B3_05 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B3_06")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B3_06.data = value;
            Serial.printf("New Value for SWrite_Data_B3_06 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B3_07")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B3_07.data = value;
            Serial.printf("New Value for SWrite_Data_B3_07 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B3_08")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B3_08.data = value;
            Serial.printf("New Value for SWrite_Data_B3_08 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B3_09")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B3_09.data = value;
            Serial.printf("New Value for SWrite_Data_B3_09 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B3_10")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B3_10.data = value;
            Serial.printf("New Value for SWrite_Data_B3_10 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B3_11")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B3_11.data = value;
            Serial.printf("New Value for SWrite_Data_B3_11 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B3_12")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B3_12.data = value;
            Serial.printf("New Value for SWrite_Data_B3_12 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B3_13")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B3_13.data = value;
            Serial.printf("New Value for SWrite_Data_B3_13 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B3_14")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B3_14.data = value;
            Serial.printf("New Value for SWrite_Data_B3_14 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B4_01")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B4_01.data = value;
            Serial.printf("New Value for SWrite_Data_B4_01 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B4_02")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B4_02.data = value;
            Serial.printf("New Value for SWrite_Data_B4_02 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B4_03")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B4_03.data = value;
            Serial.printf("New Value for SWrite_Data_B4_03 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B4_04")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B4_04.data = value;
            Serial.printf("New Value for SWrite_Data_B4_04 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B4_05")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B4_05.data = value;
            Serial.printf("New Value for SWrite_Data_B4_05 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B4_06")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B4_06.data = value;
            Serial.printf("New Value for SWrite_Data_B4_06 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B4_07")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B4_07.data = value;
            Serial.printf("New Value for SWrite_Data_B4_07 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B4_08")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B4_08.data = value;
            Serial.printf("New Value for SWrite_Data_B4_08 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B4_09")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B4_09.data = value;
            Serial.printf("New Value for SWrite_Data_B4_09 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B4_10")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B4_10.data = value;
            Serial.printf("New Value for SWrite_Data_B4_10 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B4_11")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B4_11.data = value;
            Serial.printf("New Value for SWrite_Data_B4_11 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B4_12")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B4_12.data = value;
            Serial.printf("New Value for SWrite_Data_B4_12 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B4_13")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B4_13.data = value;
            Serial.printf("New Value for SWrite_Data_B4_13 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B4_14")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B4_14.data = value;
            Serial.printf("New Value for SWrite_Data_B4_14 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B5_01")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B5_01.data = value;
            Serial.printf("New Value for SWrite_Data_B5_01 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B5_02")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B5_02.data = value;
            Serial.printf("New Value for SWrite_Data_B5_02 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B5_03")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B5_03.data = value;
            Serial.printf("New Value for SWrite_Data_B5_03 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B5_04")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B5_04.data = value;
            Serial.printf("New Value for SWrite_Data_B5_04 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B5_05")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B5_05.data = value;
            Serial.printf("New Value for SWrite_Data_B5_05 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B5_06")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B5_06.data = value;
            Serial.printf("New Value for SWrite_Data_B5_06 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B5_07")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B5_07.data = value;
            Serial.printf("New Value for SWrite_Data_B5_07 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B5_08")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B5_08.data = value;
            Serial.printf("New Value for SWrite_Data_B5_08 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B5_09")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B5_09.data = value;
            Serial.printf("New Value for SWrite_Data_B5_09 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B5_10")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B5_10.data = value;
            Serial.printf("New Value for SWrite_Data_B5_10 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B5_11")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B5_11.data = value;
            Serial.printf("New Value for SWrite_Data_B5_11 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B5_12")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B5_12.data = value;
            Serial.printf("New Value for SWrite_Data_B5_12 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B5_13")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B5_13.data = value;
            Serial.printf("New Value for SWrite_Data_B5_13 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Data_B5_14")) {
            int value = strtol(input.substring(17 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Data_B5_14.data = value;
            Serial.printf("New Value for SWrite_Data_B5_14 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Dummy_01")) {
            int value = strtol(input.substring(15 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Dummy_01.data = value;
            Serial.printf("New Value for SWrite_Dummy_01 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Dummy_02")) {
            int value = strtol(input.substring(15 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Dummy_02.data = value;
            Serial.printf("New Value for SWrite_Dummy_02 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Dummy_03")) {
            int value = strtol(input.substring(15 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Dummy_03.data = value;
            Serial.printf("New Value for SWrite_Dummy_03 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Dummy_04")) {
            int value = strtol(input.substring(15 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Dummy_04.data = value;
            Serial.printf("New Value for SWrite_Dummy_04 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Dummy_05")) {
            int value = strtol(input.substring(15 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Dummy_05.data = value;
            Serial.printf("New Value for SWrite_Dummy_05 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Dummy_06")) {
            int value = strtol(input.substring(15 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Dummy_06.data = value;
            Serial.printf("New Value for SWrite_Dummy_06 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Dummy_07")) {
            int value = strtol(input.substring(15 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Dummy_07.data = value;
            Serial.printf("New Value for SWrite_Dummy_07 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Dummy_08")) {
            int value = strtol(input.substring(15 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Dummy_08.data = value;
            Serial.printf("New Value for SWrite_Dummy_08 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Dummy_09")) {
            int value = strtol(input.substring(15 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Dummy_09.data = value;
            Serial.printf("New Value for SWrite_Dummy_09 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Dummy_10")) {
            int value = strtol(input.substring(15 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Dummy_10.data = value;
            Serial.printf("New Value for SWrite_Dummy_10 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Dummy_11")) {
            int value = strtol(input.substring(15 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Dummy_11.data = value;
            Serial.printf("New Value for SWrite_Dummy_11 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Dummy_12")) {
            int value = strtol(input.substring(15 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Dummy_12.data = value;
            Serial.printf("New Value for SWrite_Dummy_12 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Dummy_13")) {
            int value = strtol(input.substring(15 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Dummy_13.data = value;
            Serial.printf("New Value for SWrite_Dummy_13 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Dummy_14")) {
            int value = strtol(input.substring(15 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Dummy_14.data = value;
            Serial.printf("New Value for SWrite_Dummy_14 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Len_01")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Len_01.data = value;
            Serial.printf("New Value for SWrite_Len_01 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Len_02")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Len_02.data = value;
            Serial.printf("New Value for SWrite_Len_02 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Len_03")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Len_03.data = value;
            Serial.printf("New Value for SWrite_Len_03 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Len_04")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Len_04.data = value;
            Serial.printf("New Value for SWrite_Len_04 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Len_05")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Len_05.data = value;
            Serial.printf("New Value for SWrite_Len_05 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Len_06")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Len_06.data = value;
            Serial.printf("New Value for SWrite_Len_06 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Len_07")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Len_07.data = value;
            Serial.printf("New Value for SWrite_Len_07 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Len_08")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Len_08.data = value;
            Serial.printf("New Value for SWrite_Len_08 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Len_09")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Len_09.data = value;
            Serial.printf("New Value for SWrite_Len_09 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Len_10")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Len_10.data = value;
            Serial.printf("New Value for SWrite_Len_10 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Len_11")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Len_11.data = value;
            Serial.printf("New Value for SWrite_Len_11 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Len_12")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Len_12.data = value;
            Serial.printf("New Value for SWrite_Len_12 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Len_13")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Len_13.data = value;
            Serial.printf("New Value for SWrite_Len_13 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_Len_14")) {
            int value = strtol(input.substring(13 + 1).c_str(), NULL, 0);
            mySignal->SWrite_Len_14.data = value;
            Serial.printf("New Value for SWrite_Len_14 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_MemAddress_01")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->SWrite_MemAddress_01.data = value;
            Serial.printf("New Value for SWrite_MemAddress_01 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_MemAddress_02")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->SWrite_MemAddress_02.data = value;
            Serial.printf("New Value for SWrite_MemAddress_02 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_MemAddress_03")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->SWrite_MemAddress_03.data = value;
            Serial.printf("New Value for SWrite_MemAddress_03 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_MemAddress_04")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->SWrite_MemAddress_04.data = value;
            Serial.printf("New Value for SWrite_MemAddress_04 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_MemAddress_05")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->SWrite_MemAddress_05.data = value;
            Serial.printf("New Value for SWrite_MemAddress_05 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_MemAddress_06")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->SWrite_MemAddress_06.data = value;
            Serial.printf("New Value for SWrite_MemAddress_06 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_MemAddress_07")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->SWrite_MemAddress_07.data = value;
            Serial.printf("New Value for SWrite_MemAddress_07 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_MemAddress_08")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->SWrite_MemAddress_08.data = value;
            Serial.printf("New Value for SWrite_MemAddress_08 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_MemAddress_09")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->SWrite_MemAddress_09.data = value;
            Serial.printf("New Value for SWrite_MemAddress_09 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_MemAddress_10")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->SWrite_MemAddress_10.data = value;
            Serial.printf("New Value for SWrite_MemAddress_10 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_MemAddress_11")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->SWrite_MemAddress_11.data = value;
            Serial.printf("New Value for SWrite_MemAddress_11 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_MemAddress_12")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->SWrite_MemAddress_12.data = value;
            Serial.printf("New Value for SWrite_MemAddress_12 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_MemAddress_13")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->SWrite_MemAddress_13.data = value;
            Serial.printf("New Value for SWrite_MemAddress_13 = %d", value);
            Serial.println();
        }
        else if(input.startsWith("SWrite_MemAddress_14")) {
            int value = strtol(input.substring(20 + 1).c_str(), NULL, 0);
            mySignal->SWrite_MemAddress_14.data = value;
            Serial.printf("New Value for SWrite_MemAddress_14 = %d", value);
            Serial.println();
        }
    } else if(input.startsWith("get:")) {
        input = input.substring(4);
        if(input.startsWith("BCM_RGB_Color_u_01")) {
            Serial.print("BCM_RGB_Color_u_01: ");
            Serial.println(mySignal->BCM_RGB_Color_u_01.data);
        }
        else if(input.startsWith("BCM_RGB_Color_u_02")) {
            Serial.print("BCM_RGB_Color_u_02: ");
            Serial.println(mySignal->BCM_RGB_Color_u_02.data);
        }
        else if(input.startsWith("BCM_RGB_Color_u_03")) {
            Serial.print("BCM_RGB_Color_u_03: ");
            Serial.println(mySignal->BCM_RGB_Color_u_03.data);
        }
        else if(input.startsWith("BCM_RGB_Color_u_04")) {
            Serial.print("BCM_RGB_Color_u_04: ");
            Serial.println(mySignal->BCM_RGB_Color_u_04.data);
        }
        else if(input.startsWith("BCM_RGB_Color_u_05")) {
            Serial.print("BCM_RGB_Color_u_05: ");
            Serial.println(mySignal->BCM_RGB_Color_u_05.data);
        }
        else if(input.startsWith("BCM_RGB_Color_u_06")) {
            Serial.print("BCM_RGB_Color_u_06: ");
            Serial.println(mySignal->BCM_RGB_Color_u_06.data);
        }
        else if(input.startsWith("BCM_RGB_Color_u_07")) {
            Serial.print("BCM_RGB_Color_u_07: ");
            Serial.println(mySignal->BCM_RGB_Color_u_07.data);
        }
        else if(input.startsWith("BCM_RGB_Color_u_08")) {
            Serial.print("BCM_RGB_Color_u_08: ");
            Serial.println(mySignal->BCM_RGB_Color_u_08.data);
        }
        else if(input.startsWith("BCM_RGB_Color_u_09")) {
            Serial.print("BCM_RGB_Color_u_09: ");
            Serial.println(mySignal->BCM_RGB_Color_u_09.data);
        }
        else if(input.startsWith("BCM_RGB_Color_u_10")) {
            Serial.print("BCM_RGB_Color_u_10: ");
            Serial.println(mySignal->BCM_RGB_Color_u_10.data);
        }
        else if(input.startsWith("BCM_RGB_Color_u_11")) {
            Serial.print("BCM_RGB_Color_u_11: ");
            Serial.println(mySignal->BCM_RGB_Color_u_11.data);
        }
        else if(input.startsWith("BCM_RGB_Color_u_12")) {
            Serial.print("BCM_RGB_Color_u_12: ");
            Serial.println(mySignal->BCM_RGB_Color_u_12.data);
        }
        else if(input.startsWith("BCM_RGB_Color_u_13")) {
            Serial.print("BCM_RGB_Color_u_13: ");
            Serial.println(mySignal->BCM_RGB_Color_u_13.data);
        }
        else if(input.startsWith("BCM_RGB_Color_u_14")) {
            Serial.print("BCM_RGB_Color_u_14: ");
            Serial.println(mySignal->BCM_RGB_Color_u_14.data);
        }
        else if(input.startsWith("BCM_RGB_Color_v_01")) {
            Serial.print("BCM_RGB_Color_v_01: ");
            Serial.println(mySignal->BCM_RGB_Color_v_01.data);
        }
        else if(input.startsWith("BCM_RGB_Color_v_02")) {
            Serial.print("BCM_RGB_Color_v_02: ");
            Serial.println(mySignal->BCM_RGB_Color_v_02.data);
        }
        else if(input.startsWith("BCM_RGB_Color_v_03")) {
            Serial.print("BCM_RGB_Color_v_03: ");
            Serial.println(mySignal->BCM_RGB_Color_v_03.data);
        }
        else if(input.startsWith("BCM_RGB_Color_v_04")) {
            Serial.print("BCM_RGB_Color_v_04: ");
            Serial.println(mySignal->BCM_RGB_Color_v_04.data);
        }
        else if(input.startsWith("BCM_RGB_Color_v_05")) {
            Serial.print("BCM_RGB_Color_v_05: ");
            Serial.println(mySignal->BCM_RGB_Color_v_05.data);
        }
        else if(input.startsWith("BCM_RGB_Color_v_06")) {
            Serial.print("BCM_RGB_Color_v_06: ");
            Serial.println(mySignal->BCM_RGB_Color_v_06.data);
        }
        else if(input.startsWith("BCM_RGB_Color_v_07")) {
            Serial.print("BCM_RGB_Color_v_07: ");
            Serial.println(mySignal->BCM_RGB_Color_v_07.data);
        }
        else if(input.startsWith("BCM_RGB_Color_v_08")) {
            Serial.print("BCM_RGB_Color_v_08: ");
            Serial.println(mySignal->BCM_RGB_Color_v_08.data);
        }
        else if(input.startsWith("BCM_RGB_Color_v_09")) {
            Serial.print("BCM_RGB_Color_v_09: ");
            Serial.println(mySignal->BCM_RGB_Color_v_09.data);
        }
        else if(input.startsWith("BCM_RGB_Color_v_10")) {
            Serial.print("BCM_RGB_Color_v_10: ");
            Serial.println(mySignal->BCM_RGB_Color_v_10.data);
        }
        else if(input.startsWith("BCM_RGB_Color_v_11")) {
            Serial.print("BCM_RGB_Color_v_11: ");
            Serial.println(mySignal->BCM_RGB_Color_v_11.data);
        }
        else if(input.startsWith("BCM_RGB_Color_v_12")) {
            Serial.print("BCM_RGB_Color_v_12: ");
            Serial.println(mySignal->BCM_RGB_Color_v_12.data);
        }
        else if(input.startsWith("BCM_RGB_Color_v_13")) {
            Serial.print("BCM_RGB_Color_v_13: ");
            Serial.println(mySignal->BCM_RGB_Color_v_13.data);
        }
        else if(input.startsWith("BCM_RGB_Color_v_14")) {
            Serial.print("BCM_RGB_Color_v_14: ");
            Serial.println(mySignal->BCM_RGB_Color_v_14.data);
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_01")) {
            Serial.print("BCM_RGB_Dimmrampe_01: ");
            Serial.println(mySignal->BCM_RGB_Dimmrampe_01.data);
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_02")) {
            Serial.print("BCM_RGB_Dimmrampe_02: ");
            Serial.println(mySignal->BCM_RGB_Dimmrampe_02.data);
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_03")) {
            Serial.print("BCM_RGB_Dimmrampe_03: ");
            Serial.println(mySignal->BCM_RGB_Dimmrampe_03.data);
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_04")) {
            Serial.print("BCM_RGB_Dimmrampe_04: ");
            Serial.println(mySignal->BCM_RGB_Dimmrampe_04.data);
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_05")) {
            Serial.print("BCM_RGB_Dimmrampe_05: ");
            Serial.println(mySignal->BCM_RGB_Dimmrampe_05.data);
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_06")) {
            Serial.print("BCM_RGB_Dimmrampe_06: ");
            Serial.println(mySignal->BCM_RGB_Dimmrampe_06.data);
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_07")) {
            Serial.print("BCM_RGB_Dimmrampe_07: ");
            Serial.println(mySignal->BCM_RGB_Dimmrampe_07.data);
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_08")) {
            Serial.print("BCM_RGB_Dimmrampe_08: ");
            Serial.println(mySignal->BCM_RGB_Dimmrampe_08.data);
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_09")) {
            Serial.print("BCM_RGB_Dimmrampe_09: ");
            Serial.println(mySignal->BCM_RGB_Dimmrampe_09.data);
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_10")) {
            Serial.print("BCM_RGB_Dimmrampe_10: ");
            Serial.println(mySignal->BCM_RGB_Dimmrampe_10.data);
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_11")) {
            Serial.print("BCM_RGB_Dimmrampe_11: ");
            Serial.println(mySignal->BCM_RGB_Dimmrampe_11.data);
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_12")) {
            Serial.print("BCM_RGB_Dimmrampe_12: ");
            Serial.println(mySignal->BCM_RGB_Dimmrampe_12.data);
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_13")) {
            Serial.print("BCM_RGB_Dimmrampe_13: ");
            Serial.println(mySignal->BCM_RGB_Dimmrampe_13.data);
        }
        else if(input.startsWith("BCM_RGB_Dimmrampe_14")) {
            Serial.print("BCM_RGB_Dimmrampe_14: ");
            Serial.println(mySignal->BCM_RGB_Dimmrampe_14.data);
        }
        else if(input.startsWith("BCM_RGB_GlobalSync_01")) {
            Serial.print("BCM_RGB_GlobalSync_01: ");
            Serial.println(mySignal->BCM_RGB_GlobalSync_01.data);
        }
        else if(input.startsWith("BCM_RGB_GlobalSync_03")) {
            Serial.print("BCM_RGB_GlobalSync_03: ");
            Serial.println(mySignal->BCM_RGB_GlobalSync_03.data);
        }
        else if(input.startsWith("BCM_RGB_GlobalSync_05")) {
            Serial.print("BCM_RGB_GlobalSync_05: ");
            Serial.println(mySignal->BCM_RGB_GlobalSync_05.data);
        }
        else if(input.startsWith("BCM_RGB_GlobalSync_07")) {
            Serial.print("BCM_RGB_GlobalSync_07: ");
            Serial.println(mySignal->BCM_RGB_GlobalSync_07.data);
        }
        else if(input.startsWith("BCM_RGB_GlobalSync_09")) {
            Serial.print("BCM_RGB_GlobalSync_09: ");
            Serial.println(mySignal->BCM_RGB_GlobalSync_09.data);
        }
        else if(input.startsWith("BCM_RGB_GlobalSync_11")) {
            Serial.print("BCM_RGB_GlobalSync_11: ");
            Serial.println(mySignal->BCM_RGB_GlobalSync_11.data);
        }
        else if(input.startsWith("BCM_RGB_GlobalSync_13")) {
            Serial.print("BCM_RGB_GlobalSync_13: ");
            Serial.println(mySignal->BCM_RGB_GlobalSync_13.data);
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_01")) {
            Serial.print("BCM_RGB_Intensitaet_01: ");
            Serial.println(mySignal->BCM_RGB_Intensitaet_01.data);
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_02")) {
            Serial.print("BCM_RGB_Intensitaet_02: ");
            Serial.println(mySignal->BCM_RGB_Intensitaet_02.data);
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_03")) {
            Serial.print("BCM_RGB_Intensitaet_03: ");
            Serial.println(mySignal->BCM_RGB_Intensitaet_03.data);
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_04")) {
            Serial.print("BCM_RGB_Intensitaet_04: ");
            Serial.println(mySignal->BCM_RGB_Intensitaet_04.data);
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_05")) {
            Serial.print("BCM_RGB_Intensitaet_05: ");
            Serial.println(mySignal->BCM_RGB_Intensitaet_05.data);
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_06")) {
            Serial.print("BCM_RGB_Intensitaet_06: ");
            Serial.println(mySignal->BCM_RGB_Intensitaet_06.data);
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_07")) {
            Serial.print("BCM_RGB_Intensitaet_07: ");
            Serial.println(mySignal->BCM_RGB_Intensitaet_07.data);
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_08")) {
            Serial.print("BCM_RGB_Intensitaet_08: ");
            Serial.println(mySignal->BCM_RGB_Intensitaet_08.data);
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_09")) {
            Serial.print("BCM_RGB_Intensitaet_09: ");
            Serial.println(mySignal->BCM_RGB_Intensitaet_09.data);
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_10")) {
            Serial.print("BCM_RGB_Intensitaet_10: ");
            Serial.println(mySignal->BCM_RGB_Intensitaet_10.data);
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_11")) {
            Serial.print("BCM_RGB_Intensitaet_11: ");
            Serial.println(mySignal->BCM_RGB_Intensitaet_11.data);
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_12")) {
            Serial.print("BCM_RGB_Intensitaet_12: ");
            Serial.println(mySignal->BCM_RGB_Intensitaet_12.data);
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_13")) {
            Serial.print("BCM_RGB_Intensitaet_13: ");
            Serial.println(mySignal->BCM_RGB_Intensitaet_13.data);
        }
        else if(input.startsWith("BCM_RGB_Intensitaet_14")) {
            Serial.print("BCM_RGB_Intensitaet_14: ");
            Serial.println(mySignal->BCM_RGB_Intensitaet_14.data);
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_01")) {
            Serial.print("BCM_RGB_Sonderfunktion_01: ");
            Serial.println(mySignal->BCM_RGB_Sonderfunktion_01.data);
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_02")) {
            Serial.print("BCM_RGB_Sonderfunktion_02: ");
            Serial.println(mySignal->BCM_RGB_Sonderfunktion_02.data);
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_03")) {
            Serial.print("BCM_RGB_Sonderfunktion_03: ");
            Serial.println(mySignal->BCM_RGB_Sonderfunktion_03.data);
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_04")) {
            Serial.print("BCM_RGB_Sonderfunktion_04: ");
            Serial.println(mySignal->BCM_RGB_Sonderfunktion_04.data);
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_05")) {
            Serial.print("BCM_RGB_Sonderfunktion_05: ");
            Serial.println(mySignal->BCM_RGB_Sonderfunktion_05.data);
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_06")) {
            Serial.print("BCM_RGB_Sonderfunktion_06: ");
            Serial.println(mySignal->BCM_RGB_Sonderfunktion_06.data);
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_07")) {
            Serial.print("BCM_RGB_Sonderfunktion_07: ");
            Serial.println(mySignal->BCM_RGB_Sonderfunktion_07.data);
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_08")) {
            Serial.print("BCM_RGB_Sonderfunktion_08: ");
            Serial.println(mySignal->BCM_RGB_Sonderfunktion_08.data);
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_09")) {
            Serial.print("BCM_RGB_Sonderfunktion_09: ");
            Serial.println(mySignal->BCM_RGB_Sonderfunktion_09.data);
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_10")) {
            Serial.print("BCM_RGB_Sonderfunktion_10: ");
            Serial.println(mySignal->BCM_RGB_Sonderfunktion_10.data);
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_11")) {
            Serial.print("BCM_RGB_Sonderfunktion_11: ");
            Serial.println(mySignal->BCM_RGB_Sonderfunktion_11.data);
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_12")) {
            Serial.print("BCM_RGB_Sonderfunktion_12: ");
            Serial.println(mySignal->BCM_RGB_Sonderfunktion_12.data);
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_13")) {
            Serial.print("BCM_RGB_Sonderfunktion_13: ");
            Serial.println(mySignal->BCM_RGB_Sonderfunktion_13.data);
        }
        else if(input.startsWith("BCM_RGB_Sonderfunktion_14")) {
            Serial.print("BCM_RGB_Sonderfunktion_14: ");
            Serial.println(mySignal->BCM_RGB_Sonderfunktion_14.data);
        }
        else if(input.startsWith("RGB_Slave_01d_HelligkeitsFaktor")) {
            Serial.print("RGB_Slave_01d_HelligkeitsFaktor: ");
            Serial.println(mySignal->RGB_Slave_01d_HelligkeitsFaktor.data);
        }
        else if(input.startsWith("RGB_Slave_01d_HW_Version")) {
            Serial.print("RGB_Slave_01d_HW_Version: ");
            Serial.println(mySignal->RGB_Slave_01d_HW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_01d_IntError")) {
            Serial.print("RGB_Slave_01d_IntError: ");
            Serial.println(mySignal->RGB_Slave_01d_IntError.data);
        }
        else if(input.startsWith("RGB_Slave_01d_ResponseError")) {
            Serial.print("RGB_Slave_01d_ResponseError: ");
            Serial.println(mySignal->RGB_Slave_01d_ResponseError.data);
        }
        else if(input.startsWith("RGB_Slave_01d_StoredNAD")) {
            Serial.print("RGB_Slave_01d_StoredNAD: ");
            Serial.println(mySignal->RGB_Slave_01d_StoredNAD.data);
        }
        else if(input.startsWith("RGB_Slave_01d_SW_Version")) {
            Serial.print("RGB_Slave_01d_SW_Version: ");
            Serial.println(mySignal->RGB_Slave_01d_SW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_01d_TempState")) {
            Serial.print("RGB_Slave_01d_TempState: ");
            Serial.println(mySignal->RGB_Slave_01d_TempState.data);
        }
        else if(input.startsWith("RGB_Slave_01d_Weisspunkt_u")) {
            Serial.print("RGB_Slave_01d_Weisspunkt_u: ");
            Serial.println(mySignal->RGB_Slave_01d_Weisspunkt_u.data);
        }
        else if(input.startsWith("RGB_Slave_01d_Weisspunkt_v")) {
            Serial.print("RGB_Slave_01d_Weisspunkt_v: ");
            Serial.println(mySignal->RGB_Slave_01d_Weisspunkt_v.data);
        }
        else if(input.startsWith("RGB_Slave_02d_HelligkeitsFaktor")) {
            Serial.print("RGB_Slave_02d_HelligkeitsFaktor: ");
            Serial.println(mySignal->RGB_Slave_02d_HelligkeitsFaktor.data);
        }
        else if(input.startsWith("RGB_Slave_02d_HW_Version")) {
            Serial.print("RGB_Slave_02d_HW_Version: ");
            Serial.println(mySignal->RGB_Slave_02d_HW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_02d_IntError")) {
            Serial.print("RGB_Slave_02d_IntError: ");
            Serial.println(mySignal->RGB_Slave_02d_IntError.data);
        }
        else if(input.startsWith("RGB_Slave_02d_ResponseError")) {
            Serial.print("RGB_Slave_02d_ResponseError: ");
            Serial.println(mySignal->RGB_Slave_02d_ResponseError.data);
        }
        else if(input.startsWith("RGB_Slave_02d_StoredNAD")) {
            Serial.print("RGB_Slave_02d_StoredNAD: ");
            Serial.println(mySignal->RGB_Slave_02d_StoredNAD.data);
        }
        else if(input.startsWith("RGB_Slave_02d_SW_Version")) {
            Serial.print("RGB_Slave_02d_SW_Version: ");
            Serial.println(mySignal->RGB_Slave_02d_SW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_02d_TempState")) {
            Serial.print("RGB_Slave_02d_TempState: ");
            Serial.println(mySignal->RGB_Slave_02d_TempState.data);
        }
        else if(input.startsWith("RGB_Slave_02d_Weisspunkt_u")) {
            Serial.print("RGB_Slave_02d_Weisspunkt_u: ");
            Serial.println(mySignal->RGB_Slave_02d_Weisspunkt_u.data);
        }
        else if(input.startsWith("RGB_Slave_02d_Weisspunkt_v")) {
            Serial.print("RGB_Slave_02d_Weisspunkt_v: ");
            Serial.println(mySignal->RGB_Slave_02d_Weisspunkt_v.data);
        }
        else if(input.startsWith("RGB_Slave_03d_HelligkeitsFaktor")) {
            Serial.print("RGB_Slave_03d_HelligkeitsFaktor: ");
            Serial.println(mySignal->RGB_Slave_03d_HelligkeitsFaktor.data);
        }
        else if(input.startsWith("RGB_Slave_03d_HW_Version")) {
            Serial.print("RGB_Slave_03d_HW_Version: ");
            Serial.println(mySignal->RGB_Slave_03d_HW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_03d_IntError")) {
            Serial.print("RGB_Slave_03d_IntError: ");
            Serial.println(mySignal->RGB_Slave_03d_IntError.data);
        }
        else if(input.startsWith("RGB_Slave_03d_ResponseError")) {
            Serial.print("RGB_Slave_03d_ResponseError: ");
            Serial.println(mySignal->RGB_Slave_03d_ResponseError.data);
        }
        else if(input.startsWith("RGB_Slave_03d_StoredNAD")) {
            Serial.print("RGB_Slave_03d_StoredNAD: ");
            Serial.println(mySignal->RGB_Slave_03d_StoredNAD.data);
        }
        else if(input.startsWith("RGB_Slave_03d_SW_Version")) {
            Serial.print("RGB_Slave_03d_SW_Version: ");
            Serial.println(mySignal->RGB_Slave_03d_SW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_03d_TempState")) {
            Serial.print("RGB_Slave_03d_TempState: ");
            Serial.println(mySignal->RGB_Slave_03d_TempState.data);
        }
        else if(input.startsWith("RGB_Slave_03d_Weisspunkt_u")) {
            Serial.print("RGB_Slave_03d_Weisspunkt_u: ");
            Serial.println(mySignal->RGB_Slave_03d_Weisspunkt_u.data);
        }
        else if(input.startsWith("RGB_Slave_03d_Weisspunkt_v")) {
            Serial.print("RGB_Slave_03d_Weisspunkt_v: ");
            Serial.println(mySignal->RGB_Slave_03d_Weisspunkt_v.data);
        }
        else if(input.startsWith("RGB_Slave_04d_HelligkeitsFaktor")) {
            Serial.print("RGB_Slave_04d_HelligkeitsFaktor: ");
            Serial.println(mySignal->RGB_Slave_04d_HelligkeitsFaktor.data);
        }
        else if(input.startsWith("RGB_Slave_04d_HW_Version")) {
            Serial.print("RGB_Slave_04d_HW_Version: ");
            Serial.println(mySignal->RGB_Slave_04d_HW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_04d_IntError")) {
            Serial.print("RGB_Slave_04d_IntError: ");
            Serial.println(mySignal->RGB_Slave_04d_IntError.data);
        }
        else if(input.startsWith("RGB_Slave_04d_ResponseError")) {
            Serial.print("RGB_Slave_04d_ResponseError: ");
            Serial.println(mySignal->RGB_Slave_04d_ResponseError.data);
        }
        else if(input.startsWith("RGB_Slave_04d_StoredNAD")) {
            Serial.print("RGB_Slave_04d_StoredNAD: ");
            Serial.println(mySignal->RGB_Slave_04d_StoredNAD.data);
        }
        else if(input.startsWith("RGB_Slave_04d_SW_Version")) {
            Serial.print("RGB_Slave_04d_SW_Version: ");
            Serial.println(mySignal->RGB_Slave_04d_SW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_04d_TempState")) {
            Serial.print("RGB_Slave_04d_TempState: ");
            Serial.println(mySignal->RGB_Slave_04d_TempState.data);
        }
        else if(input.startsWith("RGB_Slave_04d_Weisspunkt_u")) {
            Serial.print("RGB_Slave_04d_Weisspunkt_u: ");
            Serial.println(mySignal->RGB_Slave_04d_Weisspunkt_u.data);
        }
        else if(input.startsWith("RGB_Slave_04d_Weisspunkt_v")) {
            Serial.print("RGB_Slave_04d_Weisspunkt_v: ");
            Serial.println(mySignal->RGB_Slave_04d_Weisspunkt_v.data);
        }
        else if(input.startsWith("RGB_Slave_05d_HelligkeitsFaktor")) {
            Serial.print("RGB_Slave_05d_HelligkeitsFaktor: ");
            Serial.println(mySignal->RGB_Slave_05d_HelligkeitsFaktor.data);
        }
        else if(input.startsWith("RGB_Slave_05d_HW_Version")) {
            Serial.print("RGB_Slave_05d_HW_Version: ");
            Serial.println(mySignal->RGB_Slave_05d_HW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_05d_IntError")) {
            Serial.print("RGB_Slave_05d_IntError: ");
            Serial.println(mySignal->RGB_Slave_05d_IntError.data);
        }
        else if(input.startsWith("RGB_Slave_05d_ResponseError")) {
            Serial.print("RGB_Slave_05d_ResponseError: ");
            Serial.println(mySignal->RGB_Slave_05d_ResponseError.data);
        }
        else if(input.startsWith("RGB_Slave_05d_StoredNAD")) {
            Serial.print("RGB_Slave_05d_StoredNAD: ");
            Serial.println(mySignal->RGB_Slave_05d_StoredNAD.data);
        }
        else if(input.startsWith("RGB_Slave_05d_SW_Version")) {
            Serial.print("RGB_Slave_05d_SW_Version: ");
            Serial.println(mySignal->RGB_Slave_05d_SW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_05d_TempState")) {
            Serial.print("RGB_Slave_05d_TempState: ");
            Serial.println(mySignal->RGB_Slave_05d_TempState.data);
        }
        else if(input.startsWith("RGB_Slave_05d_Weisspunkt_u")) {
            Serial.print("RGB_Slave_05d_Weisspunkt_u: ");
            Serial.println(mySignal->RGB_Slave_05d_Weisspunkt_u.data);
        }
        else if(input.startsWith("RGB_Slave_05d_Weisspunkt_v")) {
            Serial.print("RGB_Slave_05d_Weisspunkt_v: ");
            Serial.println(mySignal->RGB_Slave_05d_Weisspunkt_v.data);
        }
        else if(input.startsWith("RGB_Slave_06d_HelligkeitsFaktor")) {
            Serial.print("RGB_Slave_06d_HelligkeitsFaktor: ");
            Serial.println(mySignal->RGB_Slave_06d_HelligkeitsFaktor.data);
        }
        else if(input.startsWith("RGB_Slave_06d_HW_Version")) {
            Serial.print("RGB_Slave_06d_HW_Version: ");
            Serial.println(mySignal->RGB_Slave_06d_HW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_06d_IntError")) {
            Serial.print("RGB_Slave_06d_IntError: ");
            Serial.println(mySignal->RGB_Slave_06d_IntError.data);
        }
        else if(input.startsWith("RGB_Slave_06d_ResponseError")) {
            Serial.print("RGB_Slave_06d_ResponseError: ");
            Serial.println(mySignal->RGB_Slave_06d_ResponseError.data);
        }
        else if(input.startsWith("RGB_Slave_06d_StoredNAD")) {
            Serial.print("RGB_Slave_06d_StoredNAD: ");
            Serial.println(mySignal->RGB_Slave_06d_StoredNAD.data);
        }
        else if(input.startsWith("RGB_Slave_06d_SW_Version")) {
            Serial.print("RGB_Slave_06d_SW_Version: ");
            Serial.println(mySignal->RGB_Slave_06d_SW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_06d_TempState")) {
            Serial.print("RGB_Slave_06d_TempState: ");
            Serial.println(mySignal->RGB_Slave_06d_TempState.data);
        }
        else if(input.startsWith("RGB_Slave_06d_Weisspunkt_u")) {
            Serial.print("RGB_Slave_06d_Weisspunkt_u: ");
            Serial.println(mySignal->RGB_Slave_06d_Weisspunkt_u.data);
        }
        else if(input.startsWith("RGB_Slave_06d_Weisspunkt_v")) {
            Serial.print("RGB_Slave_06d_Weisspunkt_v: ");
            Serial.println(mySignal->RGB_Slave_06d_Weisspunkt_v.data);
        }
        else if(input.startsWith("RGB_Slave_07d_HelligkeitsFaktor")) {
            Serial.print("RGB_Slave_07d_HelligkeitsFaktor: ");
            Serial.println(mySignal->RGB_Slave_07d_HelligkeitsFaktor.data);
        }
        else if(input.startsWith("RGB_Slave_07d_HW_Version")) {
            Serial.print("RGB_Slave_07d_HW_Version: ");
            Serial.println(mySignal->RGB_Slave_07d_HW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_07d_IntError")) {
            Serial.print("RGB_Slave_07d_IntError: ");
            Serial.println(mySignal->RGB_Slave_07d_IntError.data);
        }
        else if(input.startsWith("RGB_Slave_07d_ResponseError")) {
            Serial.print("RGB_Slave_07d_ResponseError: ");
            Serial.println(mySignal->RGB_Slave_07d_ResponseError.data);
        }
        else if(input.startsWith("RGB_Slave_07d_StoredNAD")) {
            Serial.print("RGB_Slave_07d_StoredNAD: ");
            Serial.println(mySignal->RGB_Slave_07d_StoredNAD.data);
        }
        else if(input.startsWith("RGB_Slave_07d_SW_Version")) {
            Serial.print("RGB_Slave_07d_SW_Version: ");
            Serial.println(mySignal->RGB_Slave_07d_SW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_07d_TempState")) {
            Serial.print("RGB_Slave_07d_TempState: ");
            Serial.println(mySignal->RGB_Slave_07d_TempState.data);
        }
        else if(input.startsWith("RGB_Slave_07d_Weisspunkt_u")) {
            Serial.print("RGB_Slave_07d_Weisspunkt_u: ");
            Serial.println(mySignal->RGB_Slave_07d_Weisspunkt_u.data);
        }
        else if(input.startsWith("RGB_Slave_07d_Weisspunkt_v")) {
            Serial.print("RGB_Slave_07d_Weisspunkt_v: ");
            Serial.println(mySignal->RGB_Slave_07d_Weisspunkt_v.data);
        }
        else if(input.startsWith("RGB_Slave_08d_HelligkeitsFaktor")) {
            Serial.print("RGB_Slave_08d_HelligkeitsFaktor: ");
            Serial.println(mySignal->RGB_Slave_08d_HelligkeitsFaktor.data);
        }
        else if(input.startsWith("RGB_Slave_08d_HW_Version")) {
            Serial.print("RGB_Slave_08d_HW_Version: ");
            Serial.println(mySignal->RGB_Slave_08d_HW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_08d_IntError")) {
            Serial.print("RGB_Slave_08d_IntError: ");
            Serial.println(mySignal->RGB_Slave_08d_IntError.data);
        }
        else if(input.startsWith("RGB_Slave_08d_ResponseError")) {
            Serial.print("RGB_Slave_08d_ResponseError: ");
            Serial.println(mySignal->RGB_Slave_08d_ResponseError.data);
        }
        else if(input.startsWith("RGB_Slave_08d_StoredNAD")) {
            Serial.print("RGB_Slave_08d_StoredNAD: ");
            Serial.println(mySignal->RGB_Slave_08d_StoredNAD.data);
        }
        else if(input.startsWith("RGB_Slave_08d_SW_Version")) {
            Serial.print("RGB_Slave_08d_SW_Version: ");
            Serial.println(mySignal->RGB_Slave_08d_SW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_08d_TempState")) {
            Serial.print("RGB_Slave_08d_TempState: ");
            Serial.println(mySignal->RGB_Slave_08d_TempState.data);
        }
        else if(input.startsWith("RGB_Slave_08d_Weisspunkt_u")) {
            Serial.print("RGB_Slave_08d_Weisspunkt_u: ");
            Serial.println(mySignal->RGB_Slave_08d_Weisspunkt_u.data);
        }
        else if(input.startsWith("RGB_Slave_08d_Weisspunkt_v")) {
            Serial.print("RGB_Slave_08d_Weisspunkt_v: ");
            Serial.println(mySignal->RGB_Slave_08d_Weisspunkt_v.data);
        }
        else if(input.startsWith("RGB_Slave_09d_HelligkeitsFaktor")) {
            Serial.print("RGB_Slave_09d_HelligkeitsFaktor: ");
            Serial.println(mySignal->RGB_Slave_09d_HelligkeitsFaktor.data);
        }
        else if(input.startsWith("RGB_Slave_09d_HW_Version")) {
            Serial.print("RGB_Slave_09d_HW_Version: ");
            Serial.println(mySignal->RGB_Slave_09d_HW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_09d_IntError")) {
            Serial.print("RGB_Slave_09d_IntError: ");
            Serial.println(mySignal->RGB_Slave_09d_IntError.data);
        }
        else if(input.startsWith("RGB_Slave_09d_ResponseError")) {
            Serial.print("RGB_Slave_09d_ResponseError: ");
            Serial.println(mySignal->RGB_Slave_09d_ResponseError.data);
        }
        else if(input.startsWith("RGB_Slave_09d_StoredNAD")) {
            Serial.print("RGB_Slave_09d_StoredNAD: ");
            Serial.println(mySignal->RGB_Slave_09d_StoredNAD.data);
        }
        else if(input.startsWith("RGB_Slave_09d_SW_Version")) {
            Serial.print("RGB_Slave_09d_SW_Version: ");
            Serial.println(mySignal->RGB_Slave_09d_SW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_09d_TempState")) {
            Serial.print("RGB_Slave_09d_TempState: ");
            Serial.println(mySignal->RGB_Slave_09d_TempState.data);
        }
        else if(input.startsWith("RGB_Slave_09d_Weisspunkt_u")) {
            Serial.print("RGB_Slave_09d_Weisspunkt_u: ");
            Serial.println(mySignal->RGB_Slave_09d_Weisspunkt_u.data);
        }
        else if(input.startsWith("RGB_Slave_09d_Weisspunkt_v")) {
            Serial.print("RGB_Slave_09d_Weisspunkt_v: ");
            Serial.println(mySignal->RGB_Slave_09d_Weisspunkt_v.data);
        }
        else if(input.startsWith("RGB_Slave_10d_HelligkeitsFaktor")) {
            Serial.print("RGB_Slave_10d_HelligkeitsFaktor: ");
            Serial.println(mySignal->RGB_Slave_10d_HelligkeitsFaktor.data);
        }
        else if(input.startsWith("RGB_Slave_10d_HW_Version")) {
            Serial.print("RGB_Slave_10d_HW_Version: ");
            Serial.println(mySignal->RGB_Slave_10d_HW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_10d_IntError")) {
            Serial.print("RGB_Slave_10d_IntError: ");
            Serial.println(mySignal->RGB_Slave_10d_IntError.data);
        }
        else if(input.startsWith("RGB_Slave_10d_ResponseError")) {
            Serial.print("RGB_Slave_10d_ResponseError: ");
            Serial.println(mySignal->RGB_Slave_10d_ResponseError.data);
        }
        else if(input.startsWith("RGB_Slave_10d_StoredNAD")) {
            Serial.print("RGB_Slave_10d_StoredNAD: ");
            Serial.println(mySignal->RGB_Slave_10d_StoredNAD.data);
        }
        else if(input.startsWith("RGB_Slave_10d_SW_Version")) {
            Serial.print("RGB_Slave_10d_SW_Version: ");
            Serial.println(mySignal->RGB_Slave_10d_SW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_10d_TempState")) {
            Serial.print("RGB_Slave_10d_TempState: ");
            Serial.println(mySignal->RGB_Slave_10d_TempState.data);
        }
        else if(input.startsWith("RGB_Slave_10d_Weisspunkt_u")) {
            Serial.print("RGB_Slave_10d_Weisspunkt_u: ");
            Serial.println(mySignal->RGB_Slave_10d_Weisspunkt_u.data);
        }
        else if(input.startsWith("RGB_Slave_10d_Weisspunkt_v")) {
            Serial.print("RGB_Slave_10d_Weisspunkt_v: ");
            Serial.println(mySignal->RGB_Slave_10d_Weisspunkt_v.data);
        }
        else if(input.startsWith("RGB_Slave_11d_HelligkeitsFaktor")) {
            Serial.print("RGB_Slave_11d_HelligkeitsFaktor: ");
            Serial.println(mySignal->RGB_Slave_11d_HelligkeitsFaktor.data);
        }
        else if(input.startsWith("RGB_Slave_11d_HW_Version")) {
            Serial.print("RGB_Slave_11d_HW_Version: ");
            Serial.println(mySignal->RGB_Slave_11d_HW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_11d_IntError")) {
            Serial.print("RGB_Slave_11d_IntError: ");
            Serial.println(mySignal->RGB_Slave_11d_IntError.data);
        }
        else if(input.startsWith("RGB_Slave_11d_ResponseError")) {
            Serial.print("RGB_Slave_11d_ResponseError: ");
            Serial.println(mySignal->RGB_Slave_11d_ResponseError.data);
        }
        else if(input.startsWith("RGB_Slave_11d_StoredNAD")) {
            Serial.print("RGB_Slave_11d_StoredNAD: ");
            Serial.println(mySignal->RGB_Slave_11d_StoredNAD.data);
        }
        else if(input.startsWith("RGB_Slave_11d_SW_Version")) {
            Serial.print("RGB_Slave_11d_SW_Version: ");
            Serial.println(mySignal->RGB_Slave_11d_SW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_11d_TempState")) {
            Serial.print("RGB_Slave_11d_TempState: ");
            Serial.println(mySignal->RGB_Slave_11d_TempState.data);
        }
        else if(input.startsWith("RGB_Slave_11d_Weisspunkt_u")) {
            Serial.print("RGB_Slave_11d_Weisspunkt_u: ");
            Serial.println(mySignal->RGB_Slave_11d_Weisspunkt_u.data);
        }
        else if(input.startsWith("RGB_Slave_11d_Weisspunkt_v")) {
            Serial.print("RGB_Slave_11d_Weisspunkt_v: ");
            Serial.println(mySignal->RGB_Slave_11d_Weisspunkt_v.data);
        }
        else if(input.startsWith("RGB_Slave_12d_HelligkeitsFaktor")) {
            Serial.print("RGB_Slave_12d_HelligkeitsFaktor: ");
            Serial.println(mySignal->RGB_Slave_12d_HelligkeitsFaktor.data);
        }
        else if(input.startsWith("RGB_Slave_12d_HW_Version")) {
            Serial.print("RGB_Slave_12d_HW_Version: ");
            Serial.println(mySignal->RGB_Slave_12d_HW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_12d_IntError")) {
            Serial.print("RGB_Slave_12d_IntError: ");
            Serial.println(mySignal->RGB_Slave_12d_IntError.data);
        }
        else if(input.startsWith("RGB_Slave_12d_ResponseError")) {
            Serial.print("RGB_Slave_12d_ResponseError: ");
            Serial.println(mySignal->RGB_Slave_12d_ResponseError.data);
        }
        else if(input.startsWith("RGB_Slave_12d_StoredNAD")) {
            Serial.print("RGB_Slave_12d_StoredNAD: ");
            Serial.println(mySignal->RGB_Slave_12d_StoredNAD.data);
        }
        else if(input.startsWith("RGB_Slave_12d_SW_Version")) {
            Serial.print("RGB_Slave_12d_SW_Version: ");
            Serial.println(mySignal->RGB_Slave_12d_SW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_12d_TempState")) {
            Serial.print("RGB_Slave_12d_TempState: ");
            Serial.println(mySignal->RGB_Slave_12d_TempState.data);
        }
        else if(input.startsWith("RGB_Slave_12d_Weisspunkt_u")) {
            Serial.print("RGB_Slave_12d_Weisspunkt_u: ");
            Serial.println(mySignal->RGB_Slave_12d_Weisspunkt_u.data);
        }
        else if(input.startsWith("RGB_Slave_12d_Weisspunkt_v")) {
            Serial.print("RGB_Slave_12d_Weisspunkt_v: ");
            Serial.println(mySignal->RGB_Slave_12d_Weisspunkt_v.data);
        }
        else if(input.startsWith("RGB_Slave_13d_HelligkeitsFaktor")) {
            Serial.print("RGB_Slave_13d_HelligkeitsFaktor: ");
            Serial.println(mySignal->RGB_Slave_13d_HelligkeitsFaktor.data);
        }
        else if(input.startsWith("RGB_Slave_13d_HW_Version")) {
            Serial.print("RGB_Slave_13d_HW_Version: ");
            Serial.println(mySignal->RGB_Slave_13d_HW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_13d_IntError")) {
            Serial.print("RGB_Slave_13d_IntError: ");
            Serial.println(mySignal->RGB_Slave_13d_IntError.data);
        }
        else if(input.startsWith("RGB_Slave_13d_ResponseError")) {
            Serial.print("RGB_Slave_13d_ResponseError: ");
            Serial.println(mySignal->RGB_Slave_13d_ResponseError.data);
        }
        else if(input.startsWith("RGB_Slave_13d_StoredNAD")) {
            Serial.print("RGB_Slave_13d_StoredNAD: ");
            Serial.println(mySignal->RGB_Slave_13d_StoredNAD.data);
        }
        else if(input.startsWith("RGB_Slave_13d_SW_Version")) {
            Serial.print("RGB_Slave_13d_SW_Version: ");
            Serial.println(mySignal->RGB_Slave_13d_SW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_13d_TempState")) {
            Serial.print("RGB_Slave_13d_TempState: ");
            Serial.println(mySignal->RGB_Slave_13d_TempState.data);
        }
        else if(input.startsWith("RGB_Slave_13d_Weisspunkt_u")) {
            Serial.print("RGB_Slave_13d_Weisspunkt_u: ");
            Serial.println(mySignal->RGB_Slave_13d_Weisspunkt_u.data);
        }
        else if(input.startsWith("RGB_Slave_13d_Weisspunkt_v")) {
            Serial.print("RGB_Slave_13d_Weisspunkt_v: ");
            Serial.println(mySignal->RGB_Slave_13d_Weisspunkt_v.data);
        }
        else if(input.startsWith("RGB_Slave_14d_HelligkeitsFaktor")) {
            Serial.print("RGB_Slave_14d_HelligkeitsFaktor: ");
            Serial.println(mySignal->RGB_Slave_14d_HelligkeitsFaktor.data);
        }
        else if(input.startsWith("RGB_Slave_14d_HW_Version")) {
            Serial.print("RGB_Slave_14d_HW_Version: ");
            Serial.println(mySignal->RGB_Slave_14d_HW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_14d_IntError")) {
            Serial.print("RGB_Slave_14d_IntError: ");
            Serial.println(mySignal->RGB_Slave_14d_IntError.data);
        }
        else if(input.startsWith("RGB_Slave_14d_ResponseError")) {
            Serial.print("RGB_Slave_14d_ResponseError: ");
            Serial.println(mySignal->RGB_Slave_14d_ResponseError.data);
        }
        else if(input.startsWith("RGB_Slave_14d_StoredNAD")) {
            Serial.print("RGB_Slave_14d_StoredNAD: ");
            Serial.println(mySignal->RGB_Slave_14d_StoredNAD.data);
        }
        else if(input.startsWith("RGB_Slave_14d_SW_Version")) {
            Serial.print("RGB_Slave_14d_SW_Version: ");
            Serial.println(mySignal->RGB_Slave_14d_SW_Version.data);
        }
        else if(input.startsWith("RGB_Slave_14d_TempState")) {
            Serial.print("RGB_Slave_14d_TempState: ");
            Serial.println(mySignal->RGB_Slave_14d_TempState.data);
        }
        else if(input.startsWith("RGB_Slave_14d_Weisspunkt_u")) {
            Serial.print("RGB_Slave_14d_Weisspunkt_u: ");
            Serial.println(mySignal->RGB_Slave_14d_Weisspunkt_u.data);
        }
        else if(input.startsWith("RGB_Slave_14d_Weisspunkt_v")) {
            Serial.print("RGB_Slave_14d_Weisspunkt_v: ");
            Serial.println(mySignal->RGB_Slave_14d_Weisspunkt_v.data);
        }
        else if(input.startsWith("RGB_Slave_16d_ResponseError")) {
            Serial.print("RGB_Slave_16d_ResponseError: ");
            Serial.println(mySignal->RGB_Slave_16d_ResponseError.data);
        }
        else if(input.startsWith("SWrite_CRC_01")) {
            Serial.print("SWrite_CRC_01: ");
            Serial.println(mySignal->SWrite_CRC_01.data);
        }
        else if(input.startsWith("SWrite_CRC_02")) {
            Serial.print("SWrite_CRC_02: ");
            Serial.println(mySignal->SWrite_CRC_02.data);
        }
        else if(input.startsWith("SWrite_CRC_03")) {
            Serial.print("SWrite_CRC_03: ");
            Serial.println(mySignal->SWrite_CRC_03.data);
        }
        else if(input.startsWith("SWrite_CRC_04")) {
            Serial.print("SWrite_CRC_04: ");
            Serial.println(mySignal->SWrite_CRC_04.data);
        }
        else if(input.startsWith("SWrite_CRC_05")) {
            Serial.print("SWrite_CRC_05: ");
            Serial.println(mySignal->SWrite_CRC_05.data);
        }
        else if(input.startsWith("SWrite_CRC_06")) {
            Serial.print("SWrite_CRC_06: ");
            Serial.println(mySignal->SWrite_CRC_06.data);
        }
        else if(input.startsWith("SWrite_CRC_07")) {
            Serial.print("SWrite_CRC_07: ");
            Serial.println(mySignal->SWrite_CRC_07.data);
        }
        else if(input.startsWith("SWrite_CRC_08")) {
            Serial.print("SWrite_CRC_08: ");
            Serial.println(mySignal->SWrite_CRC_08.data);
        }
        else if(input.startsWith("SWrite_CRC_09")) {
            Serial.print("SWrite_CRC_09: ");
            Serial.println(mySignal->SWrite_CRC_09.data);
        }
        else if(input.startsWith("SWrite_CRC_10")) {
            Serial.print("SWrite_CRC_10: ");
            Serial.println(mySignal->SWrite_CRC_10.data);
        }
        else if(input.startsWith("SWrite_CRC_11")) {
            Serial.print("SWrite_CRC_11: ");
            Serial.println(mySignal->SWrite_CRC_11.data);
        }
        else if(input.startsWith("SWrite_CRC_12")) {
            Serial.print("SWrite_CRC_12: ");
            Serial.println(mySignal->SWrite_CRC_12.data);
        }
        else if(input.startsWith("SWrite_CRC_13")) {
            Serial.print("SWrite_CRC_13: ");
            Serial.println(mySignal->SWrite_CRC_13.data);
        }
        else if(input.startsWith("SWrite_CRC_14")) {
            Serial.print("SWrite_CRC_14: ");
            Serial.println(mySignal->SWrite_CRC_14.data);
        }
        else if(input.startsWith("SWrite_Data_B1_01")) {
            Serial.print("SWrite_Data_B1_01: ");
            Serial.println(mySignal->SWrite_Data_B1_01.data);
        }
        else if(input.startsWith("SWrite_Data_B1_02")) {
            Serial.print("SWrite_Data_B1_02: ");
            Serial.println(mySignal->SWrite_Data_B1_02.data);
        }
        else if(input.startsWith("SWrite_Data_B1_03")) {
            Serial.print("SWrite_Data_B1_03: ");
            Serial.println(mySignal->SWrite_Data_B1_03.data);
        }
        else if(input.startsWith("SWrite_Data_B1_04")) {
            Serial.print("SWrite_Data_B1_04: ");
            Serial.println(mySignal->SWrite_Data_B1_04.data);
        }
        else if(input.startsWith("SWrite_Data_B1_05")) {
            Serial.print("SWrite_Data_B1_05: ");
            Serial.println(mySignal->SWrite_Data_B1_05.data);
        }
        else if(input.startsWith("SWrite_Data_B1_06")) {
            Serial.print("SWrite_Data_B1_06: ");
            Serial.println(mySignal->SWrite_Data_B1_06.data);
        }
        else if(input.startsWith("SWrite_Data_B1_07")) {
            Serial.print("SWrite_Data_B1_07: ");
            Serial.println(mySignal->SWrite_Data_B1_07.data);
        }
        else if(input.startsWith("SWrite_Data_B1_08")) {
            Serial.print("SWrite_Data_B1_08: ");
            Serial.println(mySignal->SWrite_Data_B1_08.data);
        }
        else if(input.startsWith("SWrite_Data_B1_09")) {
            Serial.print("SWrite_Data_B1_09: ");
            Serial.println(mySignal->SWrite_Data_B1_09.data);
        }
        else if(input.startsWith("SWrite_Data_B1_10")) {
            Serial.print("SWrite_Data_B1_10: ");
            Serial.println(mySignal->SWrite_Data_B1_10.data);
        }
        else if(input.startsWith("SWrite_Data_B1_11")) {
            Serial.print("SWrite_Data_B1_11: ");
            Serial.println(mySignal->SWrite_Data_B1_11.data);
        }
        else if(input.startsWith("SWrite_Data_B1_12")) {
            Serial.print("SWrite_Data_B1_12: ");
            Serial.println(mySignal->SWrite_Data_B1_12.data);
        }
        else if(input.startsWith("SWrite_Data_B1_13")) {
            Serial.print("SWrite_Data_B1_13: ");
            Serial.println(mySignal->SWrite_Data_B1_13.data);
        }
        else if(input.startsWith("SWrite_Data_B1_14")) {
            Serial.print("SWrite_Data_B1_14: ");
            Serial.println(mySignal->SWrite_Data_B1_14.data);
        }
        else if(input.startsWith("SWrite_Data_B2_01")) {
            Serial.print("SWrite_Data_B2_01: ");
            Serial.println(mySignal->SWrite_Data_B2_01.data);
        }
        else if(input.startsWith("SWrite_Data_B2_02")) {
            Serial.print("SWrite_Data_B2_02: ");
            Serial.println(mySignal->SWrite_Data_B2_02.data);
        }
        else if(input.startsWith("SWrite_Data_B2_03")) {
            Serial.print("SWrite_Data_B2_03: ");
            Serial.println(mySignal->SWrite_Data_B2_03.data);
        }
        else if(input.startsWith("SWrite_Data_B2_04")) {
            Serial.print("SWrite_Data_B2_04: ");
            Serial.println(mySignal->SWrite_Data_B2_04.data);
        }
        else if(input.startsWith("SWrite_Data_B2_05")) {
            Serial.print("SWrite_Data_B2_05: ");
            Serial.println(mySignal->SWrite_Data_B2_05.data);
        }
        else if(input.startsWith("SWrite_Data_B2_06")) {
            Serial.print("SWrite_Data_B2_06: ");
            Serial.println(mySignal->SWrite_Data_B2_06.data);
        }
        else if(input.startsWith("SWrite_Data_B2_07")) {
            Serial.print("SWrite_Data_B2_07: ");
            Serial.println(mySignal->SWrite_Data_B2_07.data);
        }
        else if(input.startsWith("SWrite_Data_B2_08")) {
            Serial.print("SWrite_Data_B2_08: ");
            Serial.println(mySignal->SWrite_Data_B2_08.data);
        }
        else if(input.startsWith("SWrite_Data_B2_09")) {
            Serial.print("SWrite_Data_B2_09: ");
            Serial.println(mySignal->SWrite_Data_B2_09.data);
        }
        else if(input.startsWith("SWrite_Data_B2_10")) {
            Serial.print("SWrite_Data_B2_10: ");
            Serial.println(mySignal->SWrite_Data_B2_10.data);
        }
        else if(input.startsWith("SWrite_Data_B2_11")) {
            Serial.print("SWrite_Data_B2_11: ");
            Serial.println(mySignal->SWrite_Data_B2_11.data);
        }
        else if(input.startsWith("SWrite_Data_B2_12")) {
            Serial.print("SWrite_Data_B2_12: ");
            Serial.println(mySignal->SWrite_Data_B2_12.data);
        }
        else if(input.startsWith("SWrite_Data_B2_13")) {
            Serial.print("SWrite_Data_B2_13: ");
            Serial.println(mySignal->SWrite_Data_B2_13.data);
        }
        else if(input.startsWith("SWrite_Data_B2_14")) {
            Serial.print("SWrite_Data_B2_14: ");
            Serial.println(mySignal->SWrite_Data_B2_14.data);
        }
        else if(input.startsWith("SWrite_Data_B3_01")) {
            Serial.print("SWrite_Data_B3_01: ");
            Serial.println(mySignal->SWrite_Data_B3_01.data);
        }
        else if(input.startsWith("SWrite_Data_B3_02")) {
            Serial.print("SWrite_Data_B3_02: ");
            Serial.println(mySignal->SWrite_Data_B3_02.data);
        }
        else if(input.startsWith("SWrite_Data_B3_03")) {
            Serial.print("SWrite_Data_B3_03: ");
            Serial.println(mySignal->SWrite_Data_B3_03.data);
        }
        else if(input.startsWith("SWrite_Data_B3_04")) {
            Serial.print("SWrite_Data_B3_04: ");
            Serial.println(mySignal->SWrite_Data_B3_04.data);
        }
        else if(input.startsWith("SWrite_Data_B3_05")) {
            Serial.print("SWrite_Data_B3_05: ");
            Serial.println(mySignal->SWrite_Data_B3_05.data);
        }
        else if(input.startsWith("SWrite_Data_B3_06")) {
            Serial.print("SWrite_Data_B3_06: ");
            Serial.println(mySignal->SWrite_Data_B3_06.data);
        }
        else if(input.startsWith("SWrite_Data_B3_07")) {
            Serial.print("SWrite_Data_B3_07: ");
            Serial.println(mySignal->SWrite_Data_B3_07.data);
        }
        else if(input.startsWith("SWrite_Data_B3_08")) {
            Serial.print("SWrite_Data_B3_08: ");
            Serial.println(mySignal->SWrite_Data_B3_08.data);
        }
        else if(input.startsWith("SWrite_Data_B3_09")) {
            Serial.print("SWrite_Data_B3_09: ");
            Serial.println(mySignal->SWrite_Data_B3_09.data);
        }
        else if(input.startsWith("SWrite_Data_B3_10")) {
            Serial.print("SWrite_Data_B3_10: ");
            Serial.println(mySignal->SWrite_Data_B3_10.data);
        }
        else if(input.startsWith("SWrite_Data_B3_11")) {
            Serial.print("SWrite_Data_B3_11: ");
            Serial.println(mySignal->SWrite_Data_B3_11.data);
        }
        else if(input.startsWith("SWrite_Data_B3_12")) {
            Serial.print("SWrite_Data_B3_12: ");
            Serial.println(mySignal->SWrite_Data_B3_12.data);
        }
        else if(input.startsWith("SWrite_Data_B3_13")) {
            Serial.print("SWrite_Data_B3_13: ");
            Serial.println(mySignal->SWrite_Data_B3_13.data);
        }
        else if(input.startsWith("SWrite_Data_B3_14")) {
            Serial.print("SWrite_Data_B3_14: ");
            Serial.println(mySignal->SWrite_Data_B3_14.data);
        }
        else if(input.startsWith("SWrite_Data_B4_01")) {
            Serial.print("SWrite_Data_B4_01: ");
            Serial.println(mySignal->SWrite_Data_B4_01.data);
        }
        else if(input.startsWith("SWrite_Data_B4_02")) {
            Serial.print("SWrite_Data_B4_02: ");
            Serial.println(mySignal->SWrite_Data_B4_02.data);
        }
        else if(input.startsWith("SWrite_Data_B4_03")) {
            Serial.print("SWrite_Data_B4_03: ");
            Serial.println(mySignal->SWrite_Data_B4_03.data);
        }
        else if(input.startsWith("SWrite_Data_B4_04")) {
            Serial.print("SWrite_Data_B4_04: ");
            Serial.println(mySignal->SWrite_Data_B4_04.data);
        }
        else if(input.startsWith("SWrite_Data_B4_05")) {
            Serial.print("SWrite_Data_B4_05: ");
            Serial.println(mySignal->SWrite_Data_B4_05.data);
        }
        else if(input.startsWith("SWrite_Data_B4_06")) {
            Serial.print("SWrite_Data_B4_06: ");
            Serial.println(mySignal->SWrite_Data_B4_06.data);
        }
        else if(input.startsWith("SWrite_Data_B4_07")) {
            Serial.print("SWrite_Data_B4_07: ");
            Serial.println(mySignal->SWrite_Data_B4_07.data);
        }
        else if(input.startsWith("SWrite_Data_B4_08")) {
            Serial.print("SWrite_Data_B4_08: ");
            Serial.println(mySignal->SWrite_Data_B4_08.data);
        }
        else if(input.startsWith("SWrite_Data_B4_09")) {
            Serial.print("SWrite_Data_B4_09: ");
            Serial.println(mySignal->SWrite_Data_B4_09.data);
        }
        else if(input.startsWith("SWrite_Data_B4_10")) {
            Serial.print("SWrite_Data_B4_10: ");
            Serial.println(mySignal->SWrite_Data_B4_10.data);
        }
        else if(input.startsWith("SWrite_Data_B4_11")) {
            Serial.print("SWrite_Data_B4_11: ");
            Serial.println(mySignal->SWrite_Data_B4_11.data);
        }
        else if(input.startsWith("SWrite_Data_B4_12")) {
            Serial.print("SWrite_Data_B4_12: ");
            Serial.println(mySignal->SWrite_Data_B4_12.data);
        }
        else if(input.startsWith("SWrite_Data_B4_13")) {
            Serial.print("SWrite_Data_B4_13: ");
            Serial.println(mySignal->SWrite_Data_B4_13.data);
        }
        else if(input.startsWith("SWrite_Data_B4_14")) {
            Serial.print("SWrite_Data_B4_14: ");
            Serial.println(mySignal->SWrite_Data_B4_14.data);
        }
        else if(input.startsWith("SWrite_Data_B5_01")) {
            Serial.print("SWrite_Data_B5_01: ");
            Serial.println(mySignal->SWrite_Data_B5_01.data);
        }
        else if(input.startsWith("SWrite_Data_B5_02")) {
            Serial.print("SWrite_Data_B5_02: ");
            Serial.println(mySignal->SWrite_Data_B5_02.data);
        }
        else if(input.startsWith("SWrite_Data_B5_03")) {
            Serial.print("SWrite_Data_B5_03: ");
            Serial.println(mySignal->SWrite_Data_B5_03.data);
        }
        else if(input.startsWith("SWrite_Data_B5_04")) {
            Serial.print("SWrite_Data_B5_04: ");
            Serial.println(mySignal->SWrite_Data_B5_04.data);
        }
        else if(input.startsWith("SWrite_Data_B5_05")) {
            Serial.print("SWrite_Data_B5_05: ");
            Serial.println(mySignal->SWrite_Data_B5_05.data);
        }
        else if(input.startsWith("SWrite_Data_B5_06")) {
            Serial.print("SWrite_Data_B5_06: ");
            Serial.println(mySignal->SWrite_Data_B5_06.data);
        }
        else if(input.startsWith("SWrite_Data_B5_07")) {
            Serial.print("SWrite_Data_B5_07: ");
            Serial.println(mySignal->SWrite_Data_B5_07.data);
        }
        else if(input.startsWith("SWrite_Data_B5_08")) {
            Serial.print("SWrite_Data_B5_08: ");
            Serial.println(mySignal->SWrite_Data_B5_08.data);
        }
        else if(input.startsWith("SWrite_Data_B5_09")) {
            Serial.print("SWrite_Data_B5_09: ");
            Serial.println(mySignal->SWrite_Data_B5_09.data);
        }
        else if(input.startsWith("SWrite_Data_B5_10")) {
            Serial.print("SWrite_Data_B5_10: ");
            Serial.println(mySignal->SWrite_Data_B5_10.data);
        }
        else if(input.startsWith("SWrite_Data_B5_11")) {
            Serial.print("SWrite_Data_B5_11: ");
            Serial.println(mySignal->SWrite_Data_B5_11.data);
        }
        else if(input.startsWith("SWrite_Data_B5_12")) {
            Serial.print("SWrite_Data_B5_12: ");
            Serial.println(mySignal->SWrite_Data_B5_12.data);
        }
        else if(input.startsWith("SWrite_Data_B5_13")) {
            Serial.print("SWrite_Data_B5_13: ");
            Serial.println(mySignal->SWrite_Data_B5_13.data);
        }
        else if(input.startsWith("SWrite_Data_B5_14")) {
            Serial.print("SWrite_Data_B5_14: ");
            Serial.println(mySignal->SWrite_Data_B5_14.data);
        }
        else if(input.startsWith("SWrite_Dummy_01")) {
            Serial.print("SWrite_Dummy_01: ");
            Serial.println(mySignal->SWrite_Dummy_01.data);
        }
        else if(input.startsWith("SWrite_Dummy_02")) {
            Serial.print("SWrite_Dummy_02: ");
            Serial.println(mySignal->SWrite_Dummy_02.data);
        }
        else if(input.startsWith("SWrite_Dummy_03")) {
            Serial.print("SWrite_Dummy_03: ");
            Serial.println(mySignal->SWrite_Dummy_03.data);
        }
        else if(input.startsWith("SWrite_Dummy_04")) {
            Serial.print("SWrite_Dummy_04: ");
            Serial.println(mySignal->SWrite_Dummy_04.data);
        }
        else if(input.startsWith("SWrite_Dummy_05")) {
            Serial.print("SWrite_Dummy_05: ");
            Serial.println(mySignal->SWrite_Dummy_05.data);
        }
        else if(input.startsWith("SWrite_Dummy_06")) {
            Serial.print("SWrite_Dummy_06: ");
            Serial.println(mySignal->SWrite_Dummy_06.data);
        }
        else if(input.startsWith("SWrite_Dummy_07")) {
            Serial.print("SWrite_Dummy_07: ");
            Serial.println(mySignal->SWrite_Dummy_07.data);
        }
        else if(input.startsWith("SWrite_Dummy_08")) {
            Serial.print("SWrite_Dummy_08: ");
            Serial.println(mySignal->SWrite_Dummy_08.data);
        }
        else if(input.startsWith("SWrite_Dummy_09")) {
            Serial.print("SWrite_Dummy_09: ");
            Serial.println(mySignal->SWrite_Dummy_09.data);
        }
        else if(input.startsWith("SWrite_Dummy_10")) {
            Serial.print("SWrite_Dummy_10: ");
            Serial.println(mySignal->SWrite_Dummy_10.data);
        }
        else if(input.startsWith("SWrite_Dummy_11")) {
            Serial.print("SWrite_Dummy_11: ");
            Serial.println(mySignal->SWrite_Dummy_11.data);
        }
        else if(input.startsWith("SWrite_Dummy_12")) {
            Serial.print("SWrite_Dummy_12: ");
            Serial.println(mySignal->SWrite_Dummy_12.data);
        }
        else if(input.startsWith("SWrite_Dummy_13")) {
            Serial.print("SWrite_Dummy_13: ");
            Serial.println(mySignal->SWrite_Dummy_13.data);
        }
        else if(input.startsWith("SWrite_Dummy_14")) {
            Serial.print("SWrite_Dummy_14: ");
            Serial.println(mySignal->SWrite_Dummy_14.data);
        }
        else if(input.startsWith("SWrite_Len_01")) {
            Serial.print("SWrite_Len_01: ");
            Serial.println(mySignal->SWrite_Len_01.data);
        }
        else if(input.startsWith("SWrite_Len_02")) {
            Serial.print("SWrite_Len_02: ");
            Serial.println(mySignal->SWrite_Len_02.data);
        }
        else if(input.startsWith("SWrite_Len_03")) {
            Serial.print("SWrite_Len_03: ");
            Serial.println(mySignal->SWrite_Len_03.data);
        }
        else if(input.startsWith("SWrite_Len_04")) {
            Serial.print("SWrite_Len_04: ");
            Serial.println(mySignal->SWrite_Len_04.data);
        }
        else if(input.startsWith("SWrite_Len_05")) {
            Serial.print("SWrite_Len_05: ");
            Serial.println(mySignal->SWrite_Len_05.data);
        }
        else if(input.startsWith("SWrite_Len_06")) {
            Serial.print("SWrite_Len_06: ");
            Serial.println(mySignal->SWrite_Len_06.data);
        }
        else if(input.startsWith("SWrite_Len_07")) {
            Serial.print("SWrite_Len_07: ");
            Serial.println(mySignal->SWrite_Len_07.data);
        }
        else if(input.startsWith("SWrite_Len_08")) {
            Serial.print("SWrite_Len_08: ");
            Serial.println(mySignal->SWrite_Len_08.data);
        }
        else if(input.startsWith("SWrite_Len_09")) {
            Serial.print("SWrite_Len_09: ");
            Serial.println(mySignal->SWrite_Len_09.data);
        }
        else if(input.startsWith("SWrite_Len_10")) {
            Serial.print("SWrite_Len_10: ");
            Serial.println(mySignal->SWrite_Len_10.data);
        }
        else if(input.startsWith("SWrite_Len_11")) {
            Serial.print("SWrite_Len_11: ");
            Serial.println(mySignal->SWrite_Len_11.data);
        }
        else if(input.startsWith("SWrite_Len_12")) {
            Serial.print("SWrite_Len_12: ");
            Serial.println(mySignal->SWrite_Len_12.data);
        }
        else if(input.startsWith("SWrite_Len_13")) {
            Serial.print("SWrite_Len_13: ");
            Serial.println(mySignal->SWrite_Len_13.data);
        }
        else if(input.startsWith("SWrite_Len_14")) {
            Serial.print("SWrite_Len_14: ");
            Serial.println(mySignal->SWrite_Len_14.data);
        }
        else if(input.startsWith("SWrite_MemAddress_01")) {
            Serial.print("SWrite_MemAddress_01: ");
            Serial.println(mySignal->SWrite_MemAddress_01.data);
        }
        else if(input.startsWith("SWrite_MemAddress_02")) {
            Serial.print("SWrite_MemAddress_02: ");
            Serial.println(mySignal->SWrite_MemAddress_02.data);
        }
        else if(input.startsWith("SWrite_MemAddress_03")) {
            Serial.print("SWrite_MemAddress_03: ");
            Serial.println(mySignal->SWrite_MemAddress_03.data);
        }
        else if(input.startsWith("SWrite_MemAddress_04")) {
            Serial.print("SWrite_MemAddress_04: ");
            Serial.println(mySignal->SWrite_MemAddress_04.data);
        }
        else if(input.startsWith("SWrite_MemAddress_05")) {
            Serial.print("SWrite_MemAddress_05: ");
            Serial.println(mySignal->SWrite_MemAddress_05.data);
        }
        else if(input.startsWith("SWrite_MemAddress_06")) {
            Serial.print("SWrite_MemAddress_06: ");
            Serial.println(mySignal->SWrite_MemAddress_06.data);
        }
        else if(input.startsWith("SWrite_MemAddress_07")) {
            Serial.print("SWrite_MemAddress_07: ");
            Serial.println(mySignal->SWrite_MemAddress_07.data);
        }
        else if(input.startsWith("SWrite_MemAddress_08")) {
            Serial.print("SWrite_MemAddress_08: ");
            Serial.println(mySignal->SWrite_MemAddress_08.data);
        }
        else if(input.startsWith("SWrite_MemAddress_09")) {
            Serial.print("SWrite_MemAddress_09: ");
            Serial.println(mySignal->SWrite_MemAddress_09.data);
        }
        else if(input.startsWith("SWrite_MemAddress_10")) {
            Serial.print("SWrite_MemAddress_10: ");
            Serial.println(mySignal->SWrite_MemAddress_10.data);
        }
        else if(input.startsWith("SWrite_MemAddress_11")) {
            Serial.print("SWrite_MemAddress_11: ");
            Serial.println(mySignal->SWrite_MemAddress_11.data);
        }
        else if(input.startsWith("SWrite_MemAddress_12")) {
            Serial.print("SWrite_MemAddress_12: ");
            Serial.println(mySignal->SWrite_MemAddress_12.data);
        }
        else if(input.startsWith("SWrite_MemAddress_13")) {
            Serial.print("SWrite_MemAddress_13: ");
            Serial.println(mySignal->SWrite_MemAddress_13.data);
        }
        else if(input.startsWith("SWrite_MemAddress_14")) {
            Serial.print("SWrite_MemAddress_14: ");
            Serial.println(mySignal->SWrite_MemAddress_14.data);
        }
    }
}

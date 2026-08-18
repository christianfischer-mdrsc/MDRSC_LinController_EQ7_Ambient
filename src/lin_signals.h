/*
 * Auto-generated LIN signal header
 * Created by your tool
 */

#ifndef LIN_SIGNALS_H
#define LIN_SIGNALS_H

#include <stdint.h>
#include "ldf_typedefs.h"

typedef struct LinFrame{
    uint8_t u8_idField;
    uint8_t u8_dataptr[8];
    uint8_t u8_checkSum;
    FrameNames fn_frameIndex;
    void(*callback)(struct LinFrame* self);
}LinFrame_t;

typedef struct LinSignalParameter{
    uint16_t data;
    uint8_t length;
    uint8_t offset;
    Nodes publisher;
}LinSignalParameter_t;

typedef struct LinScheduleTable{
    FrameNames frameOrder;
    LinFrame_t linFrame;
    uint16_t delay_ms;
    bool sent;
}LinScheduleTable_t;

typedef struct LinScheduleTableDiag{
    DiagnosticFrameNames frameOrder;
    uint8_t delay_ms;
}LinScheduleTableDiag_t;

#define LIN_BAUDRATE 19200
#define LIN_PROTOCOL_VERSION 2.0
#define LIN_LANGUAGE_VERSION 2.0

extern LinFrame_t ACT_Master_Control_t;
void ACT_Master_Control_CB(LinFrame_t* frame);
extern LinFrame_t ACT_Slave_Status_t;
void ACT_Slave_Status_CB(LinFrame_t* frame);
extern LinFrame_t ACT_Slave_Status_2_t;
void ACT_Slave_Status_2_CB(LinFrame_t* frame);

typedef struct signals{
    LinSignalParameter_t ACT_Master_NAD;
    LinSignalParameter_t ACT_Master_Save_Prog;
    LinSignalParameter_t ACT_Master_Release_Block;
    LinSignalParameter_t ACT_Master_Clear_Flags;
    LinSignalParameter_t ACT_Master_Coil_Holding;
    LinSignalParameter_t ACT_Master_Select_Position;
    LinSignalParameter_t ACT_Master_Speed;
    LinSignalParameter_t ACT_Master_Desired_Position;
    LinSignalParameter_t ACT_Master_Start_Position;
    LinSignalParameter_t ACT_Master_Emergency_Release;
    LinSignalParameter_t ACT_Master_Emergency_Position;
    LinSignalParameter_t ACT_Master_Direction;
    LinSignalParameter_t ACT_Master_Stop_Mode;
    LinSignalParameter_t ACT_Slave_Response_Error;
    LinSignalParameter_t ACT_Slave_Overtemperature;
    LinSignalParameter_t ACT_Slave_Electronic_Defect;
    LinSignalParameter_t ACT_Slave_Suppy_Voltage;
    LinSignalParameter_t ACT_Slave_Emergency_Run;
    LinSignalParameter_t ACT_Slave_Release_Block;
    LinSignalParameter_t ACT_Slave_Block_Detected;
    LinSignalParameter_t ACT_Slave_Reset;
    LinSignalParameter_t ACT_Slave_Coil_Holding;
    LinSignalParameter_t ACT_Slave_Position_Status;
    LinSignalParameter_t ACT_Slave_Speed_Status;
    LinSignalParameter_t ACT_Slave_Actual_Position;
    LinSignalParameter_t ACT_Slave_Traverse;
    LinSignalParameter_t ACT_Slave_Holding_Torque;
    LinSignalParameter_t ACT_Slave_Special_Function;
    LinSignalParameter_t ACT_Slave_NAD;
    LinSignalParameter_t ACT_Slave_Emergency_Release;
    LinSignalParameter_t ACT_Slave_Emergency_Position;
    LinSignalParameter_t ACT_Slave_Direction;
    LinSignalParameter_t ACT_Slave_Stop_Mode;
    LinSignalParameter_t ACT_Slave_Test_Signal;
} LinSignals_t;

extern LinSignals_t signals;

typedef struct LinDiagnosticSignals{
    uint8_t MasterReqB0;
    uint8_t MasterReqB1;
    uint8_t MasterReqB2;
    uint8_t MasterReqB3;
    uint8_t MasterReqB4;
    uint8_t MasterReqB5;
    uint8_t MasterReqB6;
    uint8_t MasterReqB7;
    uint8_t SlaveRespB0;
    uint8_t SlaveRespB1;
    uint8_t SlaveRespB2;
    uint8_t SlaveRespB3;
    uint8_t SlaveRespB4;
    uint8_t SlaveRespB5;
    uint8_t SlaveRespB6;
    uint8_t SlaveRespB7;
} LinDiagnosticSignals_t;

extern LinDiagnosticSignals_t LinDiagnosticSignal;

extern LinScheduleTable FrameReq_Resp_table[2];
extern LinScheduleTableDiag DiagRequest_table[1];
extern LinScheduleTableDiag DiagResponse_table[1];
extern LinScheduleTableDiag DiagBoth_table[2];
#endif // LIN_SIGNALS_H

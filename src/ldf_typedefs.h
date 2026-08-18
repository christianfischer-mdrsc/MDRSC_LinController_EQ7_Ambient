/*
 * Auto-generated LIN signal header
 * Created by your tool
 */

#ifndef LDF_TYPEDEFS_H
#define LDF_TYPEDEFS_H

#define LDF_VERSION "Actuator.ldf"

/* Definitions for Signal Length */
#define ACT_MASTER_NAD_LENGTH 8
#define ACT_MASTER_SAVE_PROG_LENGTH 2
#define ACT_MASTER_RELEASE_BLOCK_LENGTH 2
#define ACT_MASTER_CLEAR_FLAGS_LENGTH 4
#define ACT_MASTER_COIL_HOLDING_LENGTH 2
#define ACT_MASTER_SELECT_POSITION_LENGTH 2
#define ACT_MASTER_SPEED_LENGTH 4
#define ACT_MASTER_DESIRED_POSITION_LENGTH 16
#define ACT_MASTER_START_POSITION_LENGTH 16
#define ACT_MASTER_EMERGENCY_RELEASE_LENGTH 2
#define ACT_MASTER_EMERGENCY_POSITION_LENGTH 2
#define ACT_MASTER_DIRECTION_LENGTH 2
#define ACT_MASTER_STOP_MODE_LENGTH 2
#define ACT_SLAVE_RESPONSE_ERROR_LENGTH 1
#define ACT_SLAVE_OVERTEMPERATURE_LENGTH 2
#define ACT_SLAVE_ELECTRONIC_DEFECT_LENGTH 2
#define ACT_SLAVE_SUPPY_VOLTAGE_LENGTH 2
#define ACT_SLAVE_EMERGENCY_RUN_LENGTH 2
#define ACT_SLAVE_RELEASE_BLOCK_LENGTH 2
#define ACT_SLAVE_BLOCK_DETECTED_LENGTH 2
#define ACT_SLAVE_RESET_LENGTH 2
#define ACT_SLAVE_COIL_HOLDING_LENGTH 2
#define ACT_SLAVE_POSITION_STATUS_LENGTH 2
#define ACT_SLAVE_SPEED_STATUS_LENGTH 4
#define ACT_SLAVE_ACTUAL_POSITION_LENGTH 16
#define ACT_SLAVE_TRAVERSE_LENGTH 2
#define ACT_SLAVE_HOLDING_TORQUE_LENGTH 2
#define ACT_SLAVE_SPECIAL_FUNCTION_LENGTH 2
#define ACT_SLAVE_NAD_LENGTH 8
#define ACT_SLAVE_EMERGENCY_RELEASE_LENGTH 2
#define ACT_SLAVE_EMERGENCY_POSITION_LENGTH 2
#define ACT_SLAVE_DIRECTION_LENGTH 2
#define ACT_SLAVE_STOP_MODE_LENGTH 2
#define ACT_SLAVE_TEST_SIGNAL_LENGTH 8


/* Definitions for Signal Offset */
#define ACT_MASTER_NAD_OFFSET 0
#define ACT_MASTER_SAVE_PROG_OFFSET 8
#define ACT_MASTER_RELEASE_BLOCK_OFFSET 10
#define ACT_MASTER_CLEAR_FLAGS_OFFSET 12
#define ACT_MASTER_COIL_HOLDING_OFFSET 16
#define ACT_MASTER_SELECT_POSITION_OFFSET 18
#define ACT_MASTER_SPEED_OFFSET 20
#define ACT_MASTER_DESIRED_POSITION_OFFSET 24
#define ACT_MASTER_START_POSITION_OFFSET 40
#define ACT_MASTER_EMERGENCY_RELEASE_OFFSET 56
#define ACT_MASTER_EMERGENCY_POSITION_OFFSET 58
#define ACT_MASTER_DIRECTION_OFFSET 60
#define ACT_MASTER_STOP_MODE_OFFSET 62

#define ACT_SLAVE_RESPONSE_ERROR_OFFSET 0
#define ACT_SLAVE_OVERTEMPERATURE_OFFSET 2
#define ACT_SLAVE_ELECTRONIC_DEFECT_OFFSET 4
#define ACT_SLAVE_SUPPY_VOLTAGE_OFFSET 6
#define ACT_SLAVE_EMERGENCY_RUN_OFFSET 8
#define ACT_SLAVE_RELEASE_BLOCK_OFFSET 10
#define ACT_SLAVE_BLOCK_DETECTED_OFFSET 12
#define ACT_SLAVE_RESET_OFFSET 14
#define ACT_SLAVE_COIL_HOLDING_OFFSET 16
#define ACT_SLAVE_POSITION_STATUS_OFFSET 18
#define ACT_SLAVE_SPEED_STATUS_OFFSET 20
#define ACT_SLAVE_ACTUAL_POSITION_OFFSET 24
#define ACT_SLAVE_TRAVERSE_OFFSET 40
#define ACT_SLAVE_HOLDING_TORQUE_OFFSET 42
#define ACT_SLAVE_SPECIAL_FUNCTION_OFFSET 44
#define ACT_SLAVE_NAD_OFFSET 48
#define ACT_SLAVE_EMERGENCY_RELEASE_OFFSET 56
#define ACT_SLAVE_EMERGENCY_POSITION_OFFSET 58
#define ACT_SLAVE_DIRECTION_OFFSET 60
#define ACT_SLAVE_STOP_MODE_OFFSET 62

#define ACT_SLAVE_TEST_SIGNAL_OFFSET 0

#define FRAMEREQ_RESP_FRAMESIZE 2
#define DIAGREQUEST_FRAMESIZE 1
#define DIAGRESPONSE_FRAMESIZE 1
#define DIAGBOTH_FRAMESIZE 2

// LIN-Bus Nodes
typedef enum {
    ESP32_Master,
    JOHNSON_Slave
} Nodes;

// LIN-Bus Signals
typedef enum {
    ACT_Master_NAD,
    ACT_Master_Save_Prog,
    ACT_Master_Release_Block,
    ACT_Master_Clear_Flags,
    ACT_Master_Coil_Holding,
    ACT_Master_Select_Position,
    ACT_Master_Speed,
    ACT_Master_Desired_Position,
    ACT_Master_Start_Position,
    ACT_Master_Emergency_Release,
    ACT_Master_Emergency_Position,
    ACT_Master_Direction,
    ACT_Master_Stop_Mode,
    ACT_Slave_Response_Error,
    ACT_Slave_Overtemperature,
    ACT_Slave_Electronic_Defect,
    ACT_Slave_Suppy_Voltage,
    ACT_Slave_Emergency_Run,
    ACT_Slave_Release_Block,
    ACT_Slave_Block_Detected,
    ACT_Slave_Reset,
    ACT_Slave_Coil_Holding,
    ACT_Slave_Position_Status,
    ACT_Slave_Speed_Status,
    ACT_Slave_Actual_Position,
    ACT_Slave_Traverse,
    ACT_Slave_Holding_Torque,
    ACT_Slave_Special_Function,
    ACT_Slave_NAD,
    ACT_Slave_Emergency_Release,
    ACT_Slave_Emergency_Position,
    ACT_Slave_Direction,
    ACT_Slave_Stop_Mode,
    ACT_Slave_Test_Signal
} SignalNames;

// LIN-Bus Diagnostic Signals
typedef enum {
    MasterReqB0,
    MasterReqB1,
    MasterReqB2,
    MasterReqB3,
    MasterReqB4,
    MasterReqB5,
    MasterReqB6,
    MasterReqB7,
    SlaveRespB0,
    SlaveRespB1,
    SlaveRespB2,
    SlaveRespB3,
    SlaveRespB4,
    SlaveRespB5,
    SlaveRespB6,
    SlaveRespB7
} DiagnosticSignalNames;

// LIN-Bus Frames
typedef enum {
    ACT_Master_Control,
    ACT_Slave_Status,
    ACT_Slave_Status_2
} FrameNames;

// LIN-Bus Diagnostic Frames
typedef enum {
    MasterReq,
    SlaveResp
} DiagnosticFrameNames;

//LIN-Bus Frametypes
typedef enum {
    NormalFrame,
    DiagnosticFrame,
    EndFrame
} FrameTypes;

// LIN-Bus Schedule Tables
typedef enum {
    FrameReq_Resp,
    DiagRequest,
    DiagResponse,
    DiagBoth
} ScheduleNames;

#endif //LDF_TYPEDEFS_H
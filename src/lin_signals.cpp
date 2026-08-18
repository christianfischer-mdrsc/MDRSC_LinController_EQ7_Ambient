#include "lin_signals.h"

LinSignals_t signals = {
    .ACT_Master_NAD = {
        .data = 10,
        .length = 8,
        .offset = 0,
        .publisher = ESP32_Master
    },
    .ACT_Master_Save_Prog = {
        .data = 0,
        .length = 2,
        .offset = 8,
        .publisher = ESP32_Master
    },
    .ACT_Master_Release_Block = {
        .data = 0,
        .length = 2,
        .offset = 10,
        .publisher = ESP32_Master
    },
    .ACT_Master_Clear_Flags = {
        .data = 0,
        .length = 4,
        .offset = 12,
        .publisher = ESP32_Master
    },
    .ACT_Master_Coil_Holding = {
        .data = 0,
        .length = 2,
        .offset = 16,
        .publisher = ESP32_Master
    },
    .ACT_Master_Select_Position = {
        .data = 0,
        .length = 2,
        .offset = 18,
        .publisher = ESP32_Master
    },
    .ACT_Master_Speed = {
        .data = 3,
        .length = 4,
        .offset = 20,
        .publisher = ESP32_Master
    },
    .ACT_Master_Desired_Position = {
        .data = 0,
        .length = 16,
        .offset = 24,
        .publisher = ESP32_Master
    },
    .ACT_Master_Start_Position = {
        .data = 1023,
        .length = 16,
        .offset = 40,
        .publisher = ESP32_Master
    },
    .ACT_Master_Emergency_Release = {
        .data = 0,
        .length = 2,
        .offset = 56,
        .publisher = ESP32_Master
    },
    .ACT_Master_Emergency_Position = {
        .data = 0,
        .length = 2,
        .offset = 58,
        .publisher = ESP32_Master
    },
    .ACT_Master_Direction = {
        .data = 0,
        .length = 2,
        .offset = 60,
        .publisher = ESP32_Master
    },
    .ACT_Master_Stop_Mode = {
        .data = 0,
        .length = 2,
        .offset = 62,
        .publisher = ESP32_Master
    },
    .ACT_Slave_Response_Error = {
        .data = 0,
        .length = 1,
        .offset = 0,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Overtemperature = {
        .data = 0,
        .length = 2,
        .offset = 2,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Electronic_Defect = {
        .data = 0,
        .length = 2,
        .offset = 4,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Suppy_Voltage = {
        .data = 0,
        .length = 2,
        .offset = 6,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Emergency_Run = {
        .data = 0,
        .length = 2,
        .offset = 8,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Release_Block = {
        .data = 0,
        .length = 2,
        .offset = 10,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Block_Detected = {
        .data = 0,
        .length = 2,
        .offset = 12,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Reset = {
        .data = 0,
        .length = 2,
        .offset = 14,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Coil_Holding = {
        .data = 0,
        .length = 2,
        .offset = 16,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Position_Status = {
        .data = 0,
        .length = 2,
        .offset = 18,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Speed_Status = {
        .data = 0,
        .length = 4,
        .offset = 20,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Actual_Position = {
        .data = 0,
        .length = 16,
        .offset = 24,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Traverse = {
        .data = 0,
        .length = 2,
        .offset = 40,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Holding_Torque = {
        .data = 0,
        .length = 2,
        .offset = 42,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Special_Function = {
        .data = 0,
        .length = 2,
        .offset = 44,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_NAD = {
        .data = 0,
        .length = 8,
        .offset = 48,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Emergency_Release = {
        .data = 0,
        .length = 2,
        .offset = 56,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Emergency_Position = {
        .data = 0,
        .length = 2,
        .offset = 58,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Direction = {
        .data = 0,
        .length = 2,
        .offset = 60,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Stop_Mode = {
        .data = 0,
        .length = 2,
        .offset = 62,
        .publisher = JOHNSON_Slave
    },
    .ACT_Slave_Test_Signal = {
        .data = 12,
        .length = 8,
        .offset = 0,
        .publisher = JOHNSON_Slave
    },
};

void ACT_Master_Control_CB(LinFrame_t* frame) {
    uint64_t buf = 0;
    buf |= ((uint64_t)signals.ACT_Master_NAD.data << ACT_MASTER_NAD_OFFSET);
    buf |= ((uint64_t)signals.ACT_Master_Save_Prog.data << ACT_MASTER_SAVE_PROG_OFFSET);
    buf |= ((uint64_t)signals.ACT_Master_Release_Block.data << ACT_MASTER_RELEASE_BLOCK_OFFSET);
    buf |= ((uint64_t)signals.ACT_Master_Clear_Flags.data << ACT_MASTER_CLEAR_FLAGS_OFFSET);
    buf |= ((uint64_t)signals.ACT_Master_Coil_Holding.data << ACT_MASTER_COIL_HOLDING_OFFSET);
    buf |= ((uint64_t)signals.ACT_Master_Select_Position.data << ACT_MASTER_SELECT_POSITION_OFFSET);
    buf |= ((uint64_t)signals.ACT_Master_Speed.data << ACT_MASTER_SPEED_OFFSET);
    buf |= ((uint64_t)signals.ACT_Master_Desired_Position.data << ACT_MASTER_DESIRED_POSITION_OFFSET);
    buf |= ((uint64_t)signals.ACT_Master_Start_Position.data << ACT_MASTER_START_POSITION_OFFSET);
    buf |= ((uint64_t)signals.ACT_Master_Emergency_Release.data << ACT_MASTER_EMERGENCY_RELEASE_OFFSET);
    buf |= ((uint64_t)signals.ACT_Master_Emergency_Position.data << ACT_MASTER_EMERGENCY_POSITION_OFFSET);
    buf |= ((uint64_t)signals.ACT_Master_Direction.data << ACT_MASTER_DIRECTION_OFFSET);
    buf |= ((uint64_t)signals.ACT_Master_Stop_Mode.data << ACT_MASTER_STOP_MODE_OFFSET);
    for(int i = 0; i < 8; i++) {
        frame->u8_dataptr[i] = (buf >> (i * 8)) & 0xFF;
    }
}

void ACT_Slave_Status_CB(LinFrame_t* frame) {
    uint64_t buf = 0;
    for(int i = 0; i < 8; i++) {
        buf |= ((uint64_t)frame->u8_dataptr[i]) << (i * 8);
    }
    signals.ACT_Slave_Response_Error.data = (buf >> ACT_SLAVE_RESPONSE_ERROR_OFFSET) & ((1ULL << ACT_SLAVE_RESPONSE_ERROR_LENGTH) - 1);
    signals.ACT_Slave_Overtemperature.data = (buf >> ACT_SLAVE_OVERTEMPERATURE_OFFSET) & ((1ULL << ACT_SLAVE_OVERTEMPERATURE_LENGTH) - 1);
    signals.ACT_Slave_Electronic_Defect.data = (buf >> ACT_SLAVE_ELECTRONIC_DEFECT_OFFSET) & ((1ULL << ACT_SLAVE_ELECTRONIC_DEFECT_LENGTH) - 1);
    signals.ACT_Slave_Suppy_Voltage.data = (buf >> ACT_SLAVE_SUPPY_VOLTAGE_OFFSET) & ((1ULL << ACT_SLAVE_SUPPY_VOLTAGE_LENGTH) - 1);
    signals.ACT_Slave_Emergency_Run.data = (buf >> ACT_SLAVE_EMERGENCY_RUN_OFFSET) & ((1ULL << ACT_SLAVE_EMERGENCY_RUN_LENGTH) - 1);
    signals.ACT_Slave_Release_Block.data = (buf >> ACT_SLAVE_RELEASE_BLOCK_OFFSET) & ((1ULL << ACT_SLAVE_RELEASE_BLOCK_LENGTH) - 1);
    signals.ACT_Slave_Block_Detected.data = (buf >> ACT_SLAVE_BLOCK_DETECTED_OFFSET) & ((1ULL << ACT_SLAVE_BLOCK_DETECTED_LENGTH) - 1);
    signals.ACT_Slave_Reset.data = (buf >> ACT_SLAVE_RESET_OFFSET) & ((1ULL << ACT_SLAVE_RESET_LENGTH) - 1);
    signals.ACT_Slave_Coil_Holding.data = (buf >> ACT_SLAVE_COIL_HOLDING_OFFSET) & ((1ULL << ACT_SLAVE_COIL_HOLDING_LENGTH) - 1);
    signals.ACT_Slave_Position_Status.data = (buf >> ACT_SLAVE_POSITION_STATUS_OFFSET) & ((1ULL << ACT_SLAVE_POSITION_STATUS_LENGTH) - 1);
    signals.ACT_Slave_Speed_Status.data = (buf >> ACT_SLAVE_SPEED_STATUS_OFFSET) & ((1ULL << ACT_SLAVE_SPEED_STATUS_LENGTH) - 1);
    signals.ACT_Slave_Actual_Position.data = (buf >> ACT_SLAVE_ACTUAL_POSITION_OFFSET) & ((1ULL << ACT_SLAVE_ACTUAL_POSITION_LENGTH) - 1);
    signals.ACT_Slave_Traverse.data = (buf >> ACT_SLAVE_TRAVERSE_OFFSET) & ((1ULL << ACT_SLAVE_TRAVERSE_LENGTH) - 1);
    signals.ACT_Slave_Holding_Torque.data = (buf >> ACT_SLAVE_HOLDING_TORQUE_OFFSET) & ((1ULL << ACT_SLAVE_HOLDING_TORQUE_LENGTH) - 1);
    signals.ACT_Slave_Special_Function.data = (buf >> ACT_SLAVE_SPECIAL_FUNCTION_OFFSET) & ((1ULL << ACT_SLAVE_SPECIAL_FUNCTION_LENGTH) - 1);
    signals.ACT_Slave_NAD.data = (buf >> ACT_SLAVE_NAD_OFFSET) & ((1ULL << ACT_SLAVE_NAD_LENGTH) - 1);
    signals.ACT_Slave_Emergency_Release.data = (buf >> ACT_SLAVE_EMERGENCY_RELEASE_OFFSET) & ((1ULL << ACT_SLAVE_EMERGENCY_RELEASE_LENGTH) - 1);
    signals.ACT_Slave_Emergency_Position.data = (buf >> ACT_SLAVE_EMERGENCY_POSITION_OFFSET) & ((1ULL << ACT_SLAVE_EMERGENCY_POSITION_LENGTH) - 1);
    signals.ACT_Slave_Direction.data = (buf >> ACT_SLAVE_DIRECTION_OFFSET) & ((1ULL << ACT_SLAVE_DIRECTION_LENGTH) - 1);
    signals.ACT_Slave_Stop_Mode.data = (buf >> ACT_SLAVE_STOP_MODE_OFFSET) & ((1ULL << ACT_SLAVE_STOP_MODE_LENGTH) - 1);
}

void ACT_Slave_Status_2_CB(LinFrame_t* frame) {
    uint64_t buf = 0;
    for(int i = 0; i < 8; i++) {
        buf |= ((uint64_t)frame->u8_dataptr[i]) << (i * 8);
    }
    signals.ACT_Slave_Test_Signal.data = (buf >> ACT_SLAVE_TEST_SIGNAL_OFFSET) & ((1ULL << ACT_SLAVE_TEST_SIGNAL_LENGTH) - 1);
}

LinFrame_t ACT_Master_Control_t = {
    .u8_idField = 18,
    .u8_dataptr = {0},
    .u8_checkSum = 0,
    .fn_frameIndex = ACT_Master_Control,
    .callback = ACT_Master_Control_CB
};

LinFrame_t ACT_Slave_Status_t = {
    .u8_idField = 32,
    .u8_dataptr = {0},
    .u8_checkSum = 0,
    .fn_frameIndex = ACT_Slave_Status,
    .callback = ACT_Slave_Status_CB
};

LinFrame_t ACT_Slave_Status_2_t = {
    .u8_idField = 33,
    .u8_dataptr = {0},
    .u8_checkSum = 0,
    .fn_frameIndex = ACT_Slave_Status_2,
    .callback = ACT_Slave_Status_2_CB
};

LinScheduleTable FrameReq_Resp_table[2] = {
    {ACT_Master_Control, ACT_Master_Control_t, 50},
    {ACT_Slave_Status, ACT_Slave_Status_t, 100},
};

LinScheduleTableDiag DiagRequest_table[1] = {
    {MasterReq, 10},
};

LinScheduleTableDiag DiagResponse_table[1] = {
    {SlaveResp, 10},
};

LinScheduleTableDiag DiagBoth_table[2] = {
    {MasterReq, 20},
    {SlaveResp, 20},
};


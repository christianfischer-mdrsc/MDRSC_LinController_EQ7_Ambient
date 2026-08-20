#ifndef LIN_DEFINE_H
#define LIN_DEFINE_H

#define TIMEOUT_MILLISECONDS 500
#define TX_PIN 17	

//#define AUTOBREAK   //Generates Break with changed baudrate and flush();

enum LinResponseType {
    PositiveResponse,
    NegativeResponse,
    TimeoutResponse,
    ErrorResponse,
    PendingResponse
};

typedef struct {
    LinResponseType type;
    uint8_t data[256];
    uint16_t length;
    uint8_t frameCount;
} LinResponseResult;


#endif
#ifndef LIN_H
#define LIN_H

#include <Arduino.h>
#include "Lin_defines.h"


/* DEFINES */
#define TX_PIN 17
#define TIMEOUT_MILLISECONDS 500

//#define AA_DAISYCHAIN
#define AA_BUSSHUNT


class Lin {
    public:
        struct Config {
            HardwareSerial &serial;
            uint32_t baud;
            int enablePin;
            bool enablePinState;
            int linPullUpPin;

            Config(HardwareSerial &s, uint32_t b, int enPin, bool enState, int pullUpPin)
                : serial(s), baud(b), enablePin(enPin), enablePinState(enState), linPullUpPin(pullUpPin) {}
        };

        Lin(const Config &config);

        void begin();
        void sendBreak();
        void sendHeader(uint8_t id);
        void sendFrame(uint8_t id, uint8_t *data, uint8_t length);
        bool receiveResponse(uint8_t id, uint8_t *data, uint64_t timeoutMs = 100);
        uint8_t calculateChecksum(uint8_t id, uint8_t *data, uint8_t length);
        uint8_t calculatePID(uint8_t id);

        /* DIAGNOSE*/
        void AutoAdress(uint8_t *nad, uint8_t count);
        LinResponseType AssignFrameIDRange(uint8_t nad, uint8_t fid1, uint8_t fid2);
        LinResponseType AssignFrameID(uint8_t nad, uint8_t fid, uint16_t messageID);
        LinResponseType AssignNad(uint8_t currentNad, uint8_t newNad);
        LinResponseResult CheckResponse(uint8_t sid);
        LinResponseType ReadByIdentifier(uint8_t nad, uint8_t id);
        LinResponseType SaveConfiguration(uint8_t NAD);
        LinResponseType ConditionalNadChange(uint8_t oldNad, uint8_t newNad);
        LinResponseType DataDump();

        uint8_t databuffer[9];

    private:
        Config _config;
        unsigned long long _lastDataOnBus;
};

#endif


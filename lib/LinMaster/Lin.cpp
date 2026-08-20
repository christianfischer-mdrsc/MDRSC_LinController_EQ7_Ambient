/*------------------------------------------------------------------------------
**               F I L E       I N F O R M A T I O N
**------------------------------------------------------------------------------
** Project Name:			    LIN Controller Universal
** Target system:			    TaT (ESP32) -> Lin Controller
** Compiler:				    Platform IO (VScode)
** Module Description:		    LIN Master Driver
** Date:                        18.08.2025
** Filename:                    Lin.cpp
**
**------------------------------------------------------------------------------
**               A U T H O R   I D E N T I T Y
**------------------------------------------------------------------------------
** Initials    Name                     Company
** --------    ---------------------    ----------------------------------------
** fischch5	   Christian Fischer        Motherson DRSC
**
**
**------------------------------------------------------------------------------*/

#include "Lin.h"


/*!
    @brief Lin Master constructor with parameter

    @param config Configuration parameters

    @return Lin object. Call begin() function before use.
*/
Lin::Lin(const Config &config) : _config(config) {}

unsigned long long _lastDataOnBus = 0;

/*!
    @brief Configure Lin pin for output and start bus.

    @return void
*/
void Lin::begin() {
    // Debugging-Ausgabe für die Initialisierung
    Serial.println("Initializing LIN bus...");
    
    // Setup Enable Pin
    if (22 >= 0) {
        pinMode(22, OUTPUT);
        digitalWrite(22, HIGH);
        Serial.printf("Enable Pin %i, set to %i\n", 22, HIGH);
    }

    // Optional: Pull-Up für LIN TX aktivieren
    if (17 >= 0) {
        pinMode(17, OUTPUT);
        digitalWrite(17, HIGH);  // Aktiviere internen Pull-Up
        Serial.printf("PullUp Pin %i, set to HIGH\n", 17);
    }

    // Initialisiere den seriellen Bus
    Serial2.begin(19200, SERIAL_8N1);
    if (!Serial2) {
        Serial.println("Failed to initialize serial port!");
        return;
    }

    Serial.println("Lin-Bus started");
}


/*!
    @brief Send lin specified break 
*/
void Lin::sendBreak() {
    
    #ifdef AUTOBREAK
    _config.serial.flush();
    _config.serial.updateBaudRate(9600); // Langsamer für Break
    _config.serial.write(0x00);          // Erzeugt Low-Pegel länger als 13 Bitzeiten
    _config.serial.flush();
    _config.serial.updateBaudRate(_config.baud); // Zurück zur LIN-Baudrate
    #endif

    #ifndef AUTOBREAK
    unsigned int bitTime = 1000000 / 19200; // Zeit pro Bit in Mikrosekunden
    unsigned int breakTime = bitTime * 13; // Break-Zeit (13 Bitzeiten)

    Serial2.end();

    pinMode(TX_PIN, OUTPUT); // Setze TX-Pin als Ausgang
    digitalWrite(TX_PIN, LOW); // Sende Break (Low-Pegel)
    delayMicroseconds(breakTime); // Halte den Low-Pegel für die Dauer des Breaks

    digitalWrite(TX_PIN, HIGH); // Setze TX-Pin wieder auf High
    Serial2.begin(19200); // Starte die serielle Kommunikation wieder
    #endif
}

/*!
    @brief Send lin specified header

    @param id Frame-ID for lin request / response

    @return void
*/
void Lin::sendHeader(uint8_t id) {

    sendBreak();

    _config.serial.write(0x55); // Sync Byte

    _config.serial.write(calculatePID(id));   // Identifier


    /* Clean Buffer because of RX - TX connected both to the lin bus */
    unsigned char recBuffer = 0;
    unsigned int timeout = 0;

    while(recBuffer != calculatePID(id)){
        timeout = 0;
        while(!_config.serial.available()){
            delayMicroseconds(10);
            timeout++;
            if(timeout > TIMEOUT_MILLISECONDS){
                return;
            }
        }
        recBuffer = _config.serial.read();
    }

}

/*!
    @brief Send lin frame to bus

    @param id Frame ID 
    @param data pointer to data, that will be sent or received
    @param length length of bytes

    @return void
*/
void Lin::sendFrame(uint8_t id, uint8_t *data, uint8_t length) {
    while(millis() - _lastDataOnBus < 5)delay(1);
    if (length > 8) return;

    sendHeader(id);

    for (int i = 0; i < length; i++) {
        _config.serial.write(data[i]);
        delayMicroseconds(200);
    }
    uint8_t checksum = calculateChecksum(id, data, length);
    _config.serial.write(checksum);
    _lastDataOnBus = millis();
}

// Empfängt genau einen 8-Byte LIN-Response-Frame (+ Checksumme).
// true wenn 8 Datenbytes + gültige Checksumme empfangen wurden.
bool Lin::receiveResponse(uint8_t id, uint8_t *frame, uint64_t timeoutMs) {
    while (millis() - _lastDataOnBus < 5) delay(1);
    sendHeader(id);

    uint64_t start = millis();
    int idx = 0;

    while (idx < 9) {                       // 8 Datenbytes + 1 Checksumme
        if (_config.serial.available()) {
            uint8_t b = _config.serial.read();
            if (idx < 8) {
                frame[idx] = b;
            } else {                         // Checksumme
                _lastDataOnBus = millis();
                return (calculateChecksum(id, frame, 8) == b);
            }
            idx++;
            start = millis();                // Inter-Byte-Timeout zurücksetzen
        } else {
            if (millis() - start > timeoutMs) {
                _lastDataOnBus = millis();
                return false;                // Timeout
            }
            delay(1);
        }
    }
    _lastDataOnBus = millis();
    return false;
}


uint8_t Lin::calculateChecksum(uint8_t id, uint8_t *data, uint8_t length) {

    uint16_t sum = 0;

    if(id == 0x3C || id == 0x3D){
        sum = 0;
    }else{
        sum = calculatePID(id);
    }

    for (int i = 0; i < length; i++) {
        sum += data[i];
        if (sum > 255) sum -= 255;
    }
    return ~((uint8_t)sum);
}

uint8_t Lin::calculatePID(uint8_t id){
    //The PID field consists of 6 data bits and 2 parity bits
    //x  x  D5 D4 D3 D2 D1 D0

    if(id == 0xFF)return 0xFF;

    unsigned char p0 = ((id) & 1) ^ ((id >> 1) & 1) ^ ((id >> 2) & 1) ^ ((id >> 4) & 1);
    unsigned char p1 = (~(((id >> 1) & 0x1) ^ ((id >> 3) & 0x1) ^ ((id >> 4) & 0x1) ^ ((id >> 5) & 0x1))) & 0x1;

    //P1 P0 D5 D4 D3 D2 D1 D0
    id = ((id | (p0 << 6)) | (p1 << 7));

    return id;
}


/* LIN DIAGNOSE */
// 0xB0
LinResponseType Lin::AssignNad(uint8_t currentNad, uint8_t newNad){
    //Send Break
    uint8_t lin_an_stop[8] = {0x7F, 0x06, 0xB5, 0xFF, 0x7F, 0xFF,0xFF, 0xFE};
    sendFrame(0x3C, lin_an_stop, 8);
    delay(50);

    //Assign Nad
    uint8_t lin_an_set[8] = {currentNad, 0x06, 0xB0, 0xFF, 0x7F, 0xFF, 0xFE, newNad};
    sendFrame(0x3C, lin_an_set, 8);
    delay(50);

    LinResponseResult response = CheckResponse(0xB0);

    return response.type;
}
//0xB1
LinResponseType Lin::AssignFrameID(uint8_t nad, uint8_t fid, uint16_t messageID){
    // Befehl: 0xB5 = "Assign frame ID range (stop)"
    uint8_t lin_fi_stop[8] = {
        0x7F, 0x06, 0xB5, 0xFF, 0x7F, 0xFF, 0xFF, 0xFE
    };

    sendFrame(0x3C, lin_fi_stop, sizeof(lin_fi_stop));
    delay(50);

    // --- Schritt 2: Frame-ID-Set-Befehl senden ---
    // Befehl: 0xB1 = "Assign frame ID"
    // messageID: 16 Bit (LSB first)
    uint8_t lin_fi_set[8] = {
        nad,                 // NAD (Node Address)
        0x06,                // PCI (6 data bytes)
        0xB1,                // SID (Service ID)
        0xFF,                // Supplier ID LSB (hier Dummy)
        0x7F,                // Supplier ID MSB (hier Dummy)
        static_cast<uint8_t>(messageID & 0xFF),   // LSB of message ID
        static_cast<uint8_t>((messageID >> 8) & 0xFF), // MSB of message ID
        calculatePID(fid)    // Protected ID (PID)
    };

    sendFrame(0x3C, lin_fi_set, sizeof(lin_fi_set));
    delay(50);

    LinResponseResult response = CheckResponse(0xB1);

    return response.type;
}
//0xB2
LinResponseType Lin::ReadByIdentifier(uint8_t nad, uint8_t id){
    /*
    //Send Break
    uint8_t lin_rbid_stop[8] = {0x7F, 0x06, 0xB5, 0xFF, 0x7F, 0xFF,0xFF, 0xFE};
    sendFrame(0x3C, lin_rbid_stop, 8);
    delay(50);
    */
    //Assign Nad
    uint8_t lin_rbid_set[8] = {nad, 0x06, 0xB2, id, 0xFF, 0x7F, 0xFF, 0xFF};
    sendFrame(0x3C, lin_rbid_set, 8);
    delay(50);

    LinResponseResult response = CheckResponse(0xB2);

    return response.type;
}
//0xB3
LinResponseType Lin::ConditionalNadChange(uint8_t oldNad, uint8_t newNad){

}
//0xB4
LinResponseType Lin::DataDump(){

}
//0xB5
void Lin::AutoAdress(uint8_t *nad, uint8_t count){

    //Send Break and Init
    uint8_t lin_aa_stop[8] = {0x7F, 0x06, 0xB5, 0xFF, 0x7F, 0xFF,0xFF, 0xFE};
    sendFrame(0x3C, lin_aa_stop, 8);
    delay(500);

    // Bestimmen der AA-Methode
    uint8_t aa_methode = 0x00;
    #ifdef AA_DAISYCHAIN
        aa_methode = 0x02;
    #elif defined (AA_BUSSHUNT)
        aa_methode = 0xF1;
    #endif

    // Step 1: Initialisierungsframe senden
    uint8_t lin_aa_init[8] = {0x7F, 0x06, 0xB5, 0xFF, 0x7F, 0x01, aa_methode, 0xFF};
    sendFrame(0x3C, lin_aa_init, 8);
    delay(50);
    // Step 2: Senden der neuen NADs
    // Annahme: nad ist ein Array mit den neuen NADs und count ist die
    for(int i = 0; i < count; i++){
        uint8_t lin_aa_nad[8] = {0x7F, 0x06, 0xB5, 0xFF, 0x7F, 0x02, aa_methode, nad[i]};
        sendFrame(0x3C, lin_aa_nad, 8);
        delay(50);
    }
    // Step 3: New NADs speichern
    uint8_t lin_aa_store[8] = {0x7F, 0x06, 0xB5, 0xFF, 0x7F, 0x03, aa_methode, 0xFF};
    sendFrame(0x3C, lin_aa_store, 8);
    delay(50);

    // Step 4: Abschlussframe senden
    uint8_t lin_aa_finish[8] = {0x7F, 0x06, 0xB5, 0xFF, 0x7F, 0x04, aa_methode, 0xFF};
    sendFrame(0x3C, lin_aa_finish, 8);
    delay(50);
}
//0xB6
LinResponseType Lin::SaveConfiguration(uint8_t NAD){
    //Send Break
    uint8_t lin_save_stop[8] = {0x7F, 0x06, 0xB5, 0xFF, 0x7F, 0xFF,0xFF, 0xFE};
    sendFrame(0x3C, lin_save_stop, 8);
    delay(50);

    //Save Configuration
    uint8_t lin_save_set[8] = {NAD, 0x01, 0xB6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
    sendFrame(0x3C, lin_save_set, 8);
    delay(50);

    LinResponseResult response = CheckResponse(0xB6);

    return response.type;
}
//0xB7
LinResponseType Lin::AssignFrameIDRange(uint8_t nad, uint8_t fid1, uint8_t fid2){
    uint8_t data[9];
    //Send Break
    uint8_t lin_fir_stop[8] = {0x7F, 0x06, 0xB5, 0xFF, 0x7F, 0xFF,0xFF, 0xFE};
    sendFrame(0x3C, lin_fir_stop, 8);
    delay(50);

    //Assign Frame ID's
    uint8_t lin_fir_set[8] = {nad, 0x06, 0xB7, 0x00, calculatePID(fid1), calculatePID(fid2), 0xFF, 0xFF};
    sendFrame(0x3C, lin_fir_set, 8);
    delay(50);

    LinResponseResult response = CheckResponse(0xB7);

    return response.type;
}

#define LIN_DIAG_RESPONSE_ID  0x3D
#define MAX_PENDING           10

LinResponseResult Lin::CheckResponse(uint8_t sid) {
    LinResponseResult result = { TimeoutResponse, {0}, 0, 0 };

    uint8_t  frame[8];
    uint16_t totalLen   = 0;   // Nutzdatenlänge laut First Frame
    uint16_t collected  = 0;   // bereits eingesammelte Nutzbytes
    uint8_t  expectedSN = 1;
    int      pendingCnt = 0;
    bool     multiFrame = false;

    while (true) {
        if (!receiveResponse(LIN_DIAG_RESPONSE_ID, frame, 200)) {
            result.type = TimeoutResponse;
            return result;
        }

        // kompletten Frame roh ablegen (NAD + PCI + Daten)
        if (result.length + 8 <= sizeof(result.data)) {
            memcpy(&result.data[result.length], frame, 8);
            result.length += 8;
            result.frameCount++;
        }

        uint8_t pciType = frame[1] & 0xF0;

        // ---------- Single Frame ----------
        if (pciType == 0x00) {
            uint8_t respSid = frame[2];
            if (respSid == 0x7F) {                       // Negative Response
                uint8_t nrc = frame[4];
                if (nrc == 0x78) {                       // responsePending
                    if (++pendingCnt <= MAX_PENDING) { delay(10); continue; }
                    result.type = PendingResponse;
                } else {
                    result.type = NegativeResponse;
                }
            } else if (respSid == (sid + 0x40) || respSid == 0xF2) {
                result.type = PositiveResponse;
            } else {
                result.type = TimeoutResponse;           // unerwartet
            }
            return result;
        }

        // ---------- First Frame ----------
        else if (pciType == 0x10) {
            multiFrame = true;
            totalLen   = ((uint16_t)(frame[1] & 0x0F) << 8) | frame[2];
            collected  = 5;                              // FF trägt 5 Nutzbytes (frame[3..7])
            expectedSN = 1;

            uint8_t respSid = frame[3];                  // SID steht hier ein Byte später!
            if (respSid == (sid + 0x40) || respSid == 0xF2) result.type = PositiveResponse;
            else if (respSid == 0x7F)                        result.type = NegativeResponse;

            if (collected >= totalLen) return result;
            continue;                                    // CFs abholen
        }

        // ---------- Consecutive Frame ----------
        else if (pciType == 0x20) {
            uint8_t sn = frame[1] & 0x0F;
            // optional: Reihenfolge prüfen
            // if (sn != expectedSN) { result.type = TimeoutResponse; return result; }
            expectedSN = (expectedSN + 1) & 0x0F;
            collected += 6;                              // CF trägt 6 Nutzbytes

            if (multiFrame && collected >= totalLen) return result;  // vollständig
            continue;
        }

        else {
            result.type = TimeoutResponse;
            return result;
        }
    }
}


// Extrahiert die reinen Nutzdaten (ohne NAD/PCI). Rückgabe = Anzahl Bytes.
uint16_t Lin::extractPayload(const LinResponseResult &res, uint8_t *out) {
    if (res.frameCount == 0) return 0;
    const uint8_t *f0 = &res.data[0];
    uint8_t pciType = f0[1] & 0xF0;

    if (pciType == 0x00) {                    // Single Frame
        uint8_t len = f0[1] & 0x0F;
        memcpy(out, &f0[2], len);
        return len;
    }
    else if (pciType == 0x10) {               // First + Consecutive
        uint16_t total = ((uint16_t)(f0[1] & 0x0F) << 8) | f0[2];
        memcpy(out, &f0[3], 5);
        uint16_t outLen = 5;
        for (uint8_t i = 1; i < res.frameCount && outLen < total; i++) {
            const uint8_t *f = &res.data[i * 8];
            uint16_t take = min((uint16_t)6, (uint16_t)(total - outLen));
            memcpy(&out[outLen], &f[2], take);
            outLen += take;
        }
        return total;
    }
    return 0;
}
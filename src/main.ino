/*  LIN Controller Template
 *  Motherson DRSC Deutschland GmbH
 *  
 *  Version: 2.0
 *  Autor: Christian Fischer
 *  Email: Christian.Fischer@motherson.com
 *  
 */

 /* ---------------------------------------------
 * Includes
 * --------------------------------------------- */
#include <Arduino.h>
#include "Scheduler.h"
#include <Wire.h>
#include "main.h"
#include "ButtonHandler.h"
#include "system.h"
#include "SerialReader.h"
#include "globals.h"


/* ---------------------------------------------
 * Local Defines
 * --------------------------------------------- */
/* ---------------------------------------------
 * Local Enumerations
 * --------------------------------------------- */

/* ---------------------------------------------
 * Local Variables
 * --------------------------------------------- */

/* ---------------------------------------------
 * Configuration Check
 * --------------------------------------------- */

/* ---------------------------------------------
 * Local Function Declarations
 * --------------------------------------------- */
Scheduler scheduler(FrameReq_Resp_table, FRAMEREQ_RESP_FRAMESIZE);
ButtonHandler buttons;
/* ---------------------------------------------
 * Class Konstruktors
 * --------------------------------------------- */
TaskHandle_t externalTask;

/*************************/
/* SETUP                 */
/*************************/
void setup() {
  Serial.begin(115200);
  Serial.println("Start Software Setup");

  xTaskCreatePinnedToCore(ExternalTask, "ExternalTask", 10000, NULL, 1, &externalTask, 0);

  SYSTEM_getIDValue();
  buttons.begin(myID);
  buttons.setCallback(onButtonEvent);
  buttons.setButtonFeatures(0, FEATURE_SINGLE);
  buttons.setButtonFeatures(1, FEATURE_SINGLE);
  buttons.setButtonFeatures(2, FEATURE_SINGLE);
  buttons.setButtonFeatures(3, FEATURE_SINGLE);
  buttons.setButtonFeatures(4, FEATURE_SINGLE | FEATURE_LONG);
  buttons.setButtonFeatures(5, FEATURE_SINGLE);
  scheduler.initializeLin();
}

/*************************/
/* LOOPS                 */
/*************************/

void loop() {
  ReadSerialInput();
  OperateButtons();
  delay(10);
}

void ExternalTask(void* parameters){ 
  while(true){
    scheduler.ScheduleHandler();  
    vTaskDelay(10 / portTICK_PERIOD_MS);
  }
}


void OperateButtons()
{
  buttons.update();
}

void onButtonEvent(uint8_t index, ButtonEvent event)
{
  switch(event)
    {
        case ButtonEvent::Click:
            if(index == 0) {
              //F1
              Serial.println("Button 1 clicked");
            }else if(index == 1){
              //F2
              Serial.println("Button 2 clicked");

            }else if(index == 2){
              //F3
              Serial.println("Button 3 clicked");

            }else if(index == 3){
              //F4
              Serial.println("Button 4 clicked");

            }else if(index == 4){
              //F5
              Serial.println("Button 5 clicked");

            }else if(index == 5){
              //F6
              Serial.println("Button 6 clicked");
            }
            break;

        case ButtonEvent::DoubleClick:
            
            break;

        case ButtonEvent::LongPress:
            Serial.println("Long click detected");
            break;

        default:
            break;
    }
}

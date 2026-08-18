#include "globals.h"

Lin::Config linConfig(
  Serial2,    //Port
  19200,      //BaudRate
  22,         //Enable Pin
  HIGH,       //Enable State
  17          //Uart TX PIN
);

Lin lin(linConfig);

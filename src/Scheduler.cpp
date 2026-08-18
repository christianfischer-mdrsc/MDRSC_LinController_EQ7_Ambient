#include "Scheduler.h"
#include <Lin.h>

Scheduler::Scheduler(LinScheduleTable *scheduleTable, int scheduleSize){
    _scheduleTable = scheduleTable;
    _scheduleSize = scheduleSize;
}

void Scheduler::initializeLin() {
    lin.begin();  // Lin wird nach der vollständigen Initialisierung gestartet
}

void Scheduler::ScheduleHandler(){
    static int _nextTastIndex = 0;
    unsigned long _currentMillis = millis();

    if((_currentMillis - _lastExecutionTime) >= _scheduleTable[_nextTastIndex].delay_ms){
                
        if(_scheduleTable[_nextTastIndex].frameOrder == ACT_Master_Control){
            _scheduleTable[_nextTastIndex].linFrame.callback(&_scheduleTable[_nextTastIndex].linFrame);
            lin.sendFrame(_scheduleTable[_nextTastIndex].linFrame.u8_idField, _scheduleTable[_nextTastIndex].linFrame.u8_dataptr, 8);
            _scheduleTable[_nextTastIndex].sent = true;
        }

        
        if(_scheduleTable[_nextTastIndex].frameOrder == ACT_Slave_Status){
            lin.receiveResponse(_scheduleTable[_nextTastIndex].linFrame.u8_idField, _scheduleTable[_nextTastIndex].linFrame.u8_dataptr, 500);
            _scheduleTable[_nextTastIndex].linFrame.callback(&_scheduleTable[_nextTastIndex].linFrame);
        }
        
        _lastExecutionTime = _currentMillis;
        _nextTastIndex= (_nextTastIndex + 1) % _scheduleSize;

    }
}

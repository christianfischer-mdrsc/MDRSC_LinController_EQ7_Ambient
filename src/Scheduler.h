#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "../lib/LinMaster/Lin.h"
#include "globals.h"
#include "lin_signals.h"

class Scheduler{
    public:
        Scheduler(LinScheduleTable *scheduleTable, int scheduleSize);
        void initializeLin();
        void ScheduleHandler();


    private:
        LinScheduleTable* _scheduleTable;
        size_t _currentTaskIndex = 0;
        unsigned long _lastExecutionTime = 0;
        int _scheduleSize;

};

#endif
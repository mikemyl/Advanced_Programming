#ifndef ALARM_H
#define ALARM_H

#include <vector>
#include <list>
#include <string>
#include "AlarmObserver.h"
#include "AlarmState.h"

class AlarmObserver;

class Alarm
{
    public:
        Alarm();
        void attach(AlarmObserver*);
        void detach(AlarmObserver*);
        void notify(); 
        AlarmState getState();
        void setState(AlarmState);

    private:
        std::vector<AlarmObserver*> observer_list;
        AlarmState state;

};

#endif

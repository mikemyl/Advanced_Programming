#ifndef ALARM_H
#define ALARM_H

#include <vector>
#include <list>
#include <string>
#include "AlarmObserver.h"

enum State {
    Disarmed, Armed, Triggered
};

class AlarmObserver;

class Alarm
{
    public:
        Alarm();
        void attach(AlarmObserver*);
        void detach(AlarmObserver*);
        void notify(); 
        State getState();
        void setState(State);

    private:
        std::vector<AlarmObserver*> observer_list;
        State state;

};

#endif

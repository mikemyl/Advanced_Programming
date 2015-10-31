#ifndef ALARM_H
#define ALARM_H

#include <vector>
#include <list>
#include <string>
#include "AlarmObserver.h"

class AlarmObserver;

class Alarm
{
    std::vector<AlarmObserver*> observer_list;
    std::string state;

public:
    Alarm();
    void attach(AlarmObserver*);
    void detach(AlarmObserver*);
    void notify(); 
    const std::string& getState();
    void setState(const std::string&);
};

#endif

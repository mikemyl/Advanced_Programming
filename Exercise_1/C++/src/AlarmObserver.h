#ifndef ALARMOBSERVER_H
#define ALARMOBSERVER_H

#include <string>
#include <iostream>
#include "Alarm.h"
#include "AlarmState.h"

class Alarm;

class AlarmObserver
{
    std::string name;
    Alarm *alarm;
    AlarmState alarmState;

public:
    void update(Alarm*);
    const std::string& getName();
    const char *StateType[]; 
    AlarmObserver(const std::string&);
    ~AlarmObserver();
};

#endif

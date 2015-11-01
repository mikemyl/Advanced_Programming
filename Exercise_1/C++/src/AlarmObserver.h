#ifndef ALARMOBSERVER_H
#define ALARMOBSERVER_H

#include <string>
#include <iostream>
#include "Alarm.h"

class Alarm;

class AlarmObserver
{
    std::string name;
    Alarm *alarm;
    std::string alarmState;

public:
    void update(Alarm*);
    const std::string& getName();
    AlarmObserver(const std::string&);
    ~AlarmObserver();
};

#endif

#ifndef ALARMOBSERVER_HPP
#define ALARMOBSERVER_HPP

#include <string>
#include <iostream>
#include "Alarm.hpp"
#include "AlarmHelper.hpp"

class Alarm;

class AlarmObserver
{
    std::string name;
    Alarm *alarm;
    alarm::StateType alarmState;

public:
    void update(Alarm*);
    const std::string& getName();
    AlarmObserver(const std::string&);
    ~AlarmObserver();
};

#endif

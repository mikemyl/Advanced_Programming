#ifndef ABSTRACTSUBSCRIBER_HPP
#define ABSTRACTSUBSCRIBER_HPP

#include "AlarmHelper.hpp"

class AbstractSubscriber
{
    //std::string name;
    //Alarm *alarm;
    //alarm::StateType alarmState;
public:
    virtual void update(alarm::StateType) = 0;
    //const std::string& getName();
    //AlarmObserver(const std::string&);
    //~AlarmObserver();
};

#endif

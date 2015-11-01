#include "AlarmObserver.h"

AlarmObserver::AlarmObserver(const std::string& name)
{
    this->name = name;
}

AlarmObserver::~AlarmObserver()
{
    
}

void AlarmObserver::update(Alarm *alarm)
{
    State newState = alarm->getState();
    std::cout << "Alarm State Changed: " << newState << ".\n";
    this->alarmState = newState;
}

const std::string& AlarmObserver::getName()
{
    return this->name;
}

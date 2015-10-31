#include "AlarmObserver.h"

AlarmObserver::AlarmObserver(Alarm *alarm, const std::string& name)
{
    this->name = name;
    this->alarm = alarm;
    this->alarmState = alarm->getState();
}

void AlarmObserver::update()
{
    const std::string& newState = alarm->getState();
    std::cout << "Alarm State Changed: " << alarmState << " -> " << newState;
    this->alarmState = newState;
}

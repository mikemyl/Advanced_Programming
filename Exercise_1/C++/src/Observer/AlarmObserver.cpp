#include "AlarmObserver.hpp"

AlarmObserver::AlarmObserver(const std::string& name)
{
    this->name = name;
}

AlarmObserver::~AlarmObserver()
{
    
}

void AlarmObserver::update(Alarm *alarm)
{
    alarm::StateType newState = alarm->getState();
    std::cout << this->name << ": Alarm State Changed: " << alarm::printState(newState) << ".\n";
    this->alarmState = newState;
}

const std::string& AlarmObserver::getName()
{
    return this->name;
}

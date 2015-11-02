#include "Siren.hpp"
#include "Publisher.hpp"
#include <iostream>
#include <iomanip>

Siren::Siren(Alarm *alarm)
{
    this->alarmControlPanel = alarm;
    alarm->subscribe(this);
}

Siren::~Siren() 
{
    alarmControlPanel->unsubscribe(this);
}

void Siren::update(Publisher *publisher)
{
    if (publisher == alarmControlPanel)
        beep();
}

void Siren::beep()
{
    alarm::StateType newState = alarmControlPanel->getState();
    std::cout <<  std::setw(25) <<  "-Siren:" << std::left  << "** Beep Beep ** : Alarm State Changed: " << alarm::printState(newState) << std::endl;
    this->alarmState = newState;
}

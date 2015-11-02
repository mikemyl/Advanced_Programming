#include "Keypad.hpp"
#include "Publisher.hpp"
#include <iostream>
#include <iomanip>

Keypad::Keypad(Alarm *alarm)
{
    this->alarmControlPanel = alarm;
    alarm->subscribe(this);
}

Keypad::~Keypad() {}

void Keypad::update(Publisher *publisher)
{
    if (alarmControlPanel == publisher)
        indicate();        
}

void Keypad::indicate()
{
    alarm::StateType newState = alarmControlPanel->getState();
    std::cout << std::setw(25) << "-Keypad Indicator:"  << std::left << "** State change Indication! ** : Alarm State Changed: " << alarm::printState(newState) << std::endl;
    this->alarmState = newState;
}

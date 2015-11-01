#include "Keypad.hpp"
#include "Publisher.hpp"
#include <iostream>

Keypad::Keypad(const std::string& name)
{
    this->name = name;
}

Keypad::~Keypad()
{
    
}

void Keypad::update(alarm::StateType newState)
{
    std::cout << "-Keypad Indicator (" << this->name << ")  ** State change Indication! ** : Alarm State Changed: " << alarm::printState(newState) << ".\n";
    this->alarmState = newState;
}

const std::string& Keypad::getName()
{
    return this->name;
}

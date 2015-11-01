#include "Siren.hpp"
#include "Publisher.hpp"
#include <iostream>

Siren::Siren(const std::string& name)
{
    this->name = name;
}

Siren::~Siren()
{
    
}

void Siren::update(alarm::StateType newState)

{
    std::cout << "-Siren (" <<  this->name << ") ** Beep Beep ** : Alarm State Changed: " << alarm::printState(newState) << ".\n";
    this->alarmState = newState;
}

const std::string& Siren::getName()
{
    return this->name;
}

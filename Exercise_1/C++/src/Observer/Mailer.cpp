#include "Mailer.hpp"
#include "Publisher.hpp"
#include <iostream>

Mailer::Mailer(const std::string& name)
{
    this->name = name;
}

Mailer::~Mailer()
{
    
}

void Mailer::update(alarm::StateType newState)
{
    std::cout << "-Mailer (" << this->name << ") ** New Mail!**  : Alarm State Changed: " << alarm::printState(newState) << ".\n";
    this->alarmState = newState;
}

const std::string& Mailer::getName()
{
    return this->name;
}

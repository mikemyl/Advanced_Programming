#include "Alarm.hpp"
#include "Publisher.hpp"
#include <string>
#include <iostream>


Alarm::Alarm()
{
    state = alarm::DISARMED;
}

void Alarm::setState(alarm::StateType newState)
{
    std::cout << "\n\nAlarm Control Panel: State changed from " << alarm::printState(state) << " to " << alarm::printState(newState) << std::endl << std::endl << std::left;
    state = newState;
    publish();
}

alarm::StateType Alarm::getState()
{
    return this->state;
}

#include "Alarm.h"
#include <string>
#include <iostream>

void Alarm::attach(AlarmObserver *observer)
{
    observer_list.push_back(observer);      
    std::cout << "Observer " << observer->getName() << " attached.\n";
}

void Alarm::detach(AlarmObserver *observer)
{
    for (unsigned i = 0; i < observer_list.size(); i++)
    {
        if (observer_list[i]== observer)
        {
            observer_list.erase(observer_list.begin() + i);
            return;
        }
    }
}

void Alarm::notify()
{
    for (unsigned i = 0; i < observer_list.size(); i++)
    {
        observer_list[i]->update(this); 
    }
}

State Alarm::getState()
{
    return state;
}

void Alarm::setState(State newState)
{
    std::cout << "State changed from " << state << " to " << newState << ".\n";
    state = newState;
    notify();
}

Alarm::Alarm()
{
    state = Disarmed;
}

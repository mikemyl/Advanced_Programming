#include "Alarm.hpp"
#include <string>
#include <iostream>


Alarm::Alarm()
{
    state = alarm::DISARMED;
}

void Alarm::subscribe(AlarmObserver *observer)
{
    observer_list.push_back(observer);      
    std::cout << "Observer " << observer->getName() << " attached.\n";
}

void Alarm::unsubscribe(AlarmObserver *observer)
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

void Alarm::publish()
{
    for (unsigned i = 0; i < observer_list.size(); i++)
    {
        observer_list[i]->update(this); 
    }
}

alarm::StateType Alarm::getState()
{
    return state;
}

void Alarm::setState(alarm::StateType newState)
{
    std::cout << "\n\nAlarm Control Panel: State changed from " << alarm::printState(state) << " to " << alarm::printState(newState) << ".\n\n";
    state = newState;
    publish();
}

#include "Alarm.h"
#include <string>

void Alarm::attach(AlarmObserver *observer)
{
    observer_list.push_back(observer);      
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
        observer_list[i]->update(); 
    }
}

const std::string& Alarm::getState()
{
    return state;
}

void Alarm::setState(const std::string& newState)
{
    state = newState;
}

Alarm::Alarm()
{
    state = "Waiting";
}

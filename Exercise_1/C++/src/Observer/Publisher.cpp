#include "Publisher.hpp"
#include "AlarmHelper.hpp"
#include "AbstractSubscriber.hpp"
#include <iostream>

Publisher::Publisher() {}

Publisher::~Publisher() {}

void Publisher::subscribe(AbstractSubscriber *subscriber)
{
    subscriber_list.push_back(subscriber);      
}

void Publisher::unsubscribe(AbstractSubscriber *subscriber)
{
    for (unsigned i = 0; i < subscriber_list.size(); i++)
    {
        if (subscriber_list[i]== subscriber)
        {
            subscriber_list.erase(subscriber_list.begin() + i);
            return;
        }
    }
}

void Publisher::publish()
{
    for (unsigned i = 0; i < subscriber_list.size(); i++)
    {
        subscriber_list[i]->update(this); 
    }
}


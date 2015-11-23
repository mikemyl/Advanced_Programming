#ifndef ABSTRACTSUBSCRIBER_HPP
#define ABSTRACTSUBSCRIBER_HPP

#include "AlarmHelper.hpp"

class Publisher;

class AbstractSubscriber
{
public:
    virtual void update(Publisher* publisher) = 0;
};

#endif

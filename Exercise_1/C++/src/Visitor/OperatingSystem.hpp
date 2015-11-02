#ifndef OPERATINGSYSTEM_HPP
#define OPERATINGSYSTEM_HPP

#include "AbstractVisitor.hpp"
#include "Scheduler.hpp"
#include "RandomScheduler.hpp"
#include "ThreadedScheduler.hpp"

class OperatingSystem
{
    public:
        virtual void powerOn() = 0;
        virtual void powerOff() = 0;
        virtual void schedule(Scheduler*) = 0;
        virtual void accept(AbstractVisitor*) = 0;
};

#endif

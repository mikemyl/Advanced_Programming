#ifndef THREADEDSCHEDULER_HPP
#define THREADEDSCHEDULER_HPP

#include "Scheduler.hpp"

class ThreadedScheduler : public Scheduler
{
    public:
        ThreadedScheduler();
        ~ThreadedScheduler();
};

#endif

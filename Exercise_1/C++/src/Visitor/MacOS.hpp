#ifndef MACOS_HPP
#define MACOS_HPP

#include "OperatingSystem.hpp"
#include "AbstractVisitor.hpp"
#include "Scheduler.hpp"

class Scheduler;

class MacOS : public OperatingSystem
{
    public:
        MacOS();
        ~MacOS();
        void powerOn();
        void powerOff();
        void schedule(Scheduler*);
        void schedule(ThreadedScheduler*);
        void schedule(RandomScheduler*);
        void accept(AbstractVisitor*);
};

#endif

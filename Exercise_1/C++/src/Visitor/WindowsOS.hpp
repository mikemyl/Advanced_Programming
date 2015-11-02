#ifndef WINDOWSOS_HPP
#define WINDOWSOS_HPP

#include "OperatingSystem.hpp"
#include "AbstractVisitor.hpp"
#include "Scheduler.hpp"

class WindowsOS : public OperatingSystem
{
    public:
        WindowsOS();
        ~WindowsOS();
        void powerOn();
        void powerOff();
        void accept(AbstractVisitor*);
        void schedule(Scheduler*);
        void schedule(ThreadedScheduler*);
        void schedule(RandomScheduler*);
};

#endif

#ifndef XUBUNTU_HPP
#define XUBUNTU_HPP

#include "OperatingSystem.hpp"
#include "AbstractVisitor.hpp"
#include "Scheduler.hpp"
#include "ThreadedScheduler.hpp"
#include "RandomScheduler.hpp"

class XubuntuOS : public OperatingSystem
{
    public:
        XubuntuOS();
        ~XubuntuOS();
        void powerOn();
        void powerOff();
        void schedule(Scheduler*);
        void schedule(ThreadedScheduler*);
        void schedule(RandomScheduler*);
        void accept(AbstractVisitor*);
};

#endif

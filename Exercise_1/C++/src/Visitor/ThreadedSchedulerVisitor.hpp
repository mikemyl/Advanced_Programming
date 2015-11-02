#ifndef THREADEDSCHEDULERVISITOR_HPP
#define THREADEDSCHEDULERVISITOR_HPP

#include "SchedulerVisitor.hpp"
#include "XubuntuOS.hpp"
#include "MacOS.hpp"
#include "WindowsOS.hpp"

class ThreadedSchedulerVisitor : public SchedulerVisitor
{
    public:
        ThreadedSchedulerVisitor();
        ~ThreadedSchedulerVisitor();
        void visit(XubuntuOS*);
        void visit(MacOS*);
        void visit(WindowsOS*);
};

#endif


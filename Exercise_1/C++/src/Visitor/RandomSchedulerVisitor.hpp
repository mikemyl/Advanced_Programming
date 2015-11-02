#ifndef RANDOMSCHEDULERVISITOR_HPP
#define RANDOMSCHEDULERVISITOR_HPP

#include "SchedulerVisitor.hpp"
#include "XubuntuOS.hpp"
#include "MacOS.hpp"
#include "WindowsOS.hpp"

class RandomSchedulerVisitor : public SchedulerVisitor
{
    public:
        RandomSchedulerVisitor();
        ~RandomSchedulerVisitor();
        void visit(XubuntuOS*);
        void visit(MacOS*);
        void visit(WindowsOS*);
};

#endif


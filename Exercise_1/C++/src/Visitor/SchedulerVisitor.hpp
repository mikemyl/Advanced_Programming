#ifndef SCHEDULERVISITOR_HPP
#define SCHEDULERVISITOR_HPP

#include "AbstractVisitor.hpp"
#include "XubuntuOS.hpp"
#include "MacOS.hpp"
#include "WindowsOS.hpp"

class SchedulerVisitor : public AbstractVisitor
{
    public:
        SchedulerVisitor();
        ~SchedulerVisitor();
        virtual void visit(XubuntuOS*);
        virtual void visit(MacOS*);
        virtual void visit(WindowsOS*);
};

#endif


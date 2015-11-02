#include "SchedulerVisitor.hpp"
#include <iostream>

SchedulerVisitor::SchedulerVisitor() {}

SchedulerVisitor::~SchedulerVisitor() {}

void SchedulerVisitor::visit(WindowsOS* windows)
{
    std::cout << "Windows: SimpleSchedulerVisitor: getting new task.." << std::endl;
}

void SchedulerVisitor::visit(XubuntuOS* xubuntu)
{
    std::cout << "Xubuntu: SimpleSchedulerVisitor: getting new task.." << std::endl;
}

void SchedulerVisitor::visit(MacOS* windows)
{
    std::cout << "Mac: SimpleSchedulerVisitor: getting new task.." << std::endl;
}

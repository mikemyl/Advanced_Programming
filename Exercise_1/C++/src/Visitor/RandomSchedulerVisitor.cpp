#include "RandomSchedulerVisitor.hpp"
#include <iostream>

RandomSchedulerVisitor::RandomSchedulerVisitor() {}

RandomSchedulerVisitor::~RandomSchedulerVisitor() {}

void RandomSchedulerVisitor::visit(WindowsOS* windows)
{
    std::cout << "Windows: RandomSchedulerVisitor: getting new task.." << std::endl;
}

void RandomSchedulerVisitor::visit(XubuntuOS* xubuntu)
{
    std::cout << "Xubuntu: RandomSchedulerVisitor: getting new task.." << std::endl;
}

void RandomSchedulerVisitor::visit(MacOS* windows)
{
    std::cout << "Mac: RandomSchedulerVisitor: getting new task.." << std::endl;
}

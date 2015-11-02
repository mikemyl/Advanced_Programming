#include "ThreadedSchedulerVisitor.hpp"
#include <iostream>

ThreadedSchedulerVisitor::ThreadedSchedulerVisitor() {}

ThreadedSchedulerVisitor::~ThreadedSchedulerVisitor() {}

void ThreadedSchedulerVisitor::visit(WindowsOS* windows)
{
    std::cout << "Windows: ThreadedSchedulerVisitor: Thread1: getting new task.." << std::endl;
    std::cout << "Windows: ThreadedSchedulerVisitor: Thread2: getting new task.." << std::endl;
}

void ThreadedSchedulerVisitor::visit(XubuntuOS* xubuntu)
{
    std::cout << "Xubuntu: ThreadedSchedulerVisitor: Thread1: getting new task.." << std::endl;
    std::cout << "Xubuntu: ThreadedSchedulerVisitor: Thread2: getting new task.." << std::endl;
}

void ThreadedSchedulerVisitor::visit(MacOS* windows)
{
    std::cout << "Mac: ThreadedSchedulerVisitor: Thread1: getting new task.." << std::endl;
    std::cout << "Mac: ThreadedSchedulerVisitor: Thread2: getting new task.." << std::endl;
}

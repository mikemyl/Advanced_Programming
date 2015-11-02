#include "WindowsOS.hpp"
#include "AbstractVisitor.hpp"
#include <iostream>


WindowsOS::WindowsOS() {}

WindowsOS::~WindowsOS() {}

void WindowsOS::powerOn()
{
    std::cout << "WindowsOS:  Has sucessfully powered on" << std::endl;
}

void WindowsOS::powerOff()
{
    std::cout << "WindowsOS: Downloading Updates... Installing Updates.... Shuting down (finally)..." << std::endl;
}

void WindowsOS::accept(AbstractVisitor* visitor)
{
    visitor->visit(this);
}

void WindowsOS::schedule(Scheduler* scheduler)
{
    std::cout << "Windows: Getting a new task.." << std::endl;
}

void WindowsOS::schedule(ThreadedScheduler* threadedScheduler)
{
    std::cout << "Windows: Thread1: Getting a new task.." << std::endl;
    std::cout << "Windows: Thread2 Getting a new task.." << std::endl;
}

void WindowsOS::schedule(RandomScheduler* randomScheduler)
{
    std::cout << "Windows: Getting a new random task.." << std::endl;
}

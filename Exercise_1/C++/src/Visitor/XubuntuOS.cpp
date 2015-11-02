#include "XubuntuOS.hpp"
#include <iostream>


XubuntuOS::XubuntuOS() {}

XubuntuOS::~XubuntuOS() {}

void XubuntuOS::powerOn()
{
    std::cout << "XubuntuOS:  Has sucessfully powered on" << std::endl;
}

void XubuntuOS::powerOff()
{
    std::cout << "XubuntuOS:  Shuting down..." << std::endl;
}

void XubuntuOS::accept(AbstractVisitor* visitor)
{
    visitor->visit(this);
}

void XubuntuOS::schedule(Scheduler* scheduler)
{
    std::cout << "Xubuntu: Getting a new task.." << std::endl;
}

void XubuntuOS::schedule(ThreadedScheduler* threadedScheduler)
{
    std::cout << "Xubuntu: Thread1: Getting a new task.." << std::endl;
    std::cout << "Xubuntu: Thread2 Getting a new task.." << std::endl;
}

void XubuntuOS::schedule(RandomScheduler* randomScheduler)
{
    std::cout << "Xubuntu: Getting a new random task.." << std::endl;
}

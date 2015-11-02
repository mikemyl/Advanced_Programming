#include "MacOS.hpp"
#include <iostream>


MacOS::MacOS() {}

MacOS::~MacOS() {}

void MacOS::powerOn()
{
    std::cout << "MacOS:  Has sucessfully powered on" << std::endl;
}

void MacOS::powerOff()
{
    std::cout << "MacOS:  Shuting down..." << std::endl;
}

void MacOS::accept(AbstractVisitor* visitor)
{
    visitor->visit(this);
}

void MacOS::schedule(Scheduler* scheduler)
{
    std::cout << "Mac: Getting a new task.." << std::endl;
}

void MacOS::schedule(ThreadedScheduler* threadedScheduler)
{
    std::cout << "Mac: Thread1: Getting a new task.." << std::endl;
    std::cout << "Mac: Thread2 Getting a new task.." << std::endl;
}

void MacOS::schedule(RandomScheduler* randomScheduler)
{
    std::cout << "Mac: Getting a new random task.." << std::endl;
}

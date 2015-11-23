#include <vector>
#include <iterator>
#include <iostream>
#include "OperatingSystem.hpp"
#include "WindowsOS.hpp"
#include "XubuntuOS.hpp"
#include "MacOS.hpp"
#include "SchedulerVisitor.hpp"
#include "ThreadedSchedulerVisitor.hpp"
#include "RandomSchedulerVisitor.hpp"
#include "ThreadedScheduler.hpp"
#include "RandomScheduler.hpp"
#include "Scheduler.hpp"


int main()
{
    std::vector<OperatingSystem*> operatingSystems;
    std::vector<Scheduler*> schedulers;
    std::vector<SchedulerVisitor*> schedulerVisitors;

    WindowsOS windows;
    MacOS mac;
    XubuntuOS xubuntu;

    operatingSystems.push_back(&windows);
    operatingSystems.push_back(&xubuntu);
    operatingSystems.push_back(&mac);

    Scheduler simpleScheduler;
    ThreadedScheduler threadedScheduler;
    RandomScheduler randomScheduler;

    schedulers.push_back(&simpleScheduler);
    schedulers.push_back(&threadedScheduler);
    schedulers.push_back(&randomScheduler);

    SchedulerVisitor schedulerVisitor;
    ThreadedSchedulerVisitor threadedSchedulerVisitor;
    RandomSchedulerVisitor randomSchedulerVisitor;

    schedulerVisitors.push_back(&schedulerVisitor);
    schedulerVisitors.push_back(&threadedSchedulerVisitor);
    schedulerVisitors.push_back(&randomSchedulerVisitor);


    for(unsigned i = 0; i < operatingSystems.size(); i++) {
        operatingSystems[i]->powerOn();
    }

    std::cout << std::endl << std::endl;

    std::cout << "Single Dispatch: Although we call schedule() on each OS using different schedulers," << std::endl;
    std::cout << "their dynamic Type is not used in order to determine which schedule() will be called," << std::endl;
    std::cout << "so the  simple schedule(Scheduler*) will be called" << std::endl;

    std::cout << std::endl;

    for(unsigned i = 0; i < operatingSystems.size(); i++) {
        for(unsigned j = 0; j < schedulers.size(); j++)
            operatingSystems[i]->schedule(schedulers[j]);
    }

    std::cout << std::endl << std::endl;

    std::cout << "Using Visitor Design Pattern, we can easily add new functionality easilly" << std::endl;
    std::cout << "We can also 'emulate' double dispatch!" << std::endl;
    std::cout << "We now see that The dynamic type of scheduler is actually used:" << std::endl;
    std::cout << std::endl;

    for(unsigned i = 0; i < operatingSystems.size(); i++) {
        for(unsigned j = 0; j < schedulerVisitors.size(); j++)
            operatingSystems[i]->accept(schedulerVisitors[j]);
    }

    std::cout << std::endl << std::endl;

    for(unsigned i = 0; i < operatingSystems.size(); i++) {
        operatingSystems[i]->powerOff();
    }

    return 0;
}


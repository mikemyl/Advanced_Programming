#include "Mailer.hpp"
#include "Publisher.hpp"
#include <iostream>
#include <iomanip>

Mailer::Mailer(Alarm *alarm)
{
    this->alarmControlPanel = alarm;
    alarm->subscribe(this);
}

Mailer::~Mailer() {}

void Mailer::update(Publisher *publisher)
{
    if (alarmControlPanel == publisher)
        sendMail();
}

void Mailer::sendMail()
{
    alarm::StateType newState = alarmControlPanel->getState();
    std::cout <<  std::setw(25) << "-Mailer:" <<  std::left << "** New Mail!**  : Alarm State Changed: " << alarm::printState(newState) << std::endl;
    this->alarmState = newState;
}

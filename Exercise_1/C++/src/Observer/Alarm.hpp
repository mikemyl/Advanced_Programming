#ifndef ALARM_HPP
#define ALARM_HPP

#include <vector>
#include <list>
#include <string>
#include "AlarmHelper.hpp"
#include "Publisher.hpp"


/**********************************************************************
 * class Alarm represents a Burglar Alarm Systems' control unit
 *
 * This is supposed to be the "Publisher"
 * Subscribers can be for example the alarm Siren, Mailer, keypad-monitor
 * etc.
 *
 *********************************************************************/


class Alarm : public Publisher
{
    public:
        Alarm();
        virtual void setState(alarm::StateType);
        virtual alarm::StateType getState();
};

#endif

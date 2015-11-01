#ifndef ALARM_HPP
#define ALARM_HPP

#include <vector>
#include <list>
#include <string>
#include "AlarmObserver.hpp"
#include "AlarmHelper.hpp"

class AlarmObserver;

/**********************************************************************
 * class Alarm represents a Burglar Alarm Systems' control unit
 *
 * This is supposed to be the "subject"
 * Observers can be for example the alarm Siren, Mailer, keypad-monitor
 * etc.
 *
 *********************************************************************/

class Alarm
{
    public:
        Alarm();
        void subscribe(AlarmObserver*);
        void unsubscribe(AlarmObserver*);
        void publish(); 
        alarm::StateType getState();
        void setState(alarm::StateType);

    private:
        std::vector<AlarmObserver*> observer_list;
        alarm::StateType state;

};

#endif

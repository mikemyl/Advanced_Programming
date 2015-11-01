#include "Alarm.hpp"
#include "AlarmObserver.hpp"
#include <iostream>

/************************************************************************
 *
 * Subject: Alarm Control Unit
 * Observers: Keypad, Mailer, Siren
 *
 * *********************************************************************/

int main() {
    Alarm alarm;

    AlarmObserver keypad("Keypad");
    AlarmObserver siren("Siren");
    AlarmObserver mailer("Mailer");
    
    alarm.subscribe(&keypad);
    alarm.subscribe(&siren);
    alarm.subscribe(&mailer);
    
    alarm.setState(alarm::ARMED);
    alarm.setState(alarm::TRIGGERED);

    alarm.unsubscribe(&mailer);

    alarm.setState(alarm::DISARMED);

    return 0;
}

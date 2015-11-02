#include "Alarm.hpp"
#include "Siren.hpp"
#include "Mailer.hpp"
#include "Keypad.hpp"
#include <iostream>

/************************************************************************
 *
 * Subject: Alarm Control Unit
 * Observers: Keypad, Mailer, Siren
 *
 * *********************************************************************/

int main() {
    Alarm alarm;

    Keypad keypad(&alarm);
    Siren siren(&alarm);
    Mailer mailer(&alarm);
    
    
    alarm.setState(alarm::ARMED);
    alarm.setState(alarm::TRIGGERED);

    alarm.unsubscribe(&mailer);

    alarm.setState(alarm::DISARMED);

    return 0;
}

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

    Keypad keypad("Keypad_1");
    Siren siren("Siren_42");
    Mailer mailer("Foo_Mailer");
    
    alarm.subscribe(&keypad);
    alarm.subscribe(&siren);
    alarm.subscribe(&mailer);
    
    alarm.setState(alarm::ARMED);
    alarm.setState(alarm::TRIGGERED);

    alarm.unsubscribe(&mailer);

    alarm.setState(alarm::DISARMED);

    return 0;
}

#ifndef KEYPAD_HPP
#define KEYPAD_HPP

#include "AlarmHelper.hpp"
#include "Alarm.hpp"
#include "Publisher.hpp"

class Publisher;

class Keypad : public AbstractSubscriber
{

    public:
        Keypad(Alarm*);
        virtual ~Keypad();
        virtual void update(Publisher*);
        virtual void indicate();

    private:
        alarm::StateType alarmState;
        Alarm* alarmControlPanel;
};

#endif /* KEYPAD_HPP */

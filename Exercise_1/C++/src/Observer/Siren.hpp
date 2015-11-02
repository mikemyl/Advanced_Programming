#ifndef SIREN_HPP
#define SIREN_HPP

#include "AlarmHelper.hpp"
#include "Alarm.hpp"
#include "Publisher.hpp"

class Publisher;

class Siren : public AbstractSubscriber
{

    public:
        Siren(Alarm*);
        virtual ~Siren();
        virtual void update(Publisher*);
        virtual void beep();

    private:
        Alarm* alarmControlPanel;
        alarm::StateType alarmState;
};

#endif /* SIREN_HPP */

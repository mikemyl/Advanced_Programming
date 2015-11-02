#ifndef MAILER_HPP
#define MAILER_HPP

#include "AlarmHelper.hpp"
#include "Publisher.hpp"
#include "Alarm.hpp"
#include <string>

class Publisher;

class Mailer : public AbstractSubscriber
{
    public:
        Mailer(Alarm*);
        virtual ~Mailer();
        virtual void update(Publisher*);
        virtual void sendMail();

    private:
        alarm::StateType alarmState;
        Alarm *alarmControlPanel;

};

#endif /* MAILER_HPP */

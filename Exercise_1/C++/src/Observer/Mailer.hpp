#ifndef MAILER_HPP
#define MAILER_HPP

#include "AlarmHelper.hpp"
#include "Publisher.hpp"
#include <string>

class Publisher;

class Mailer : public AbstractSubscriber
{
    std::string name;
    alarm::StateType alarmState;

    public:
        Mailer(const std::string&);
        ~Mailer();
        void update(alarm::StateType);
        const std::string& getName();
};

#endif /* MAILER_HPP */

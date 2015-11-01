#ifndef SIREN_HPP
#define SIREN_HPP

#include "AlarmHelper.hpp"
#include "Publisher.hpp"
#include <string>

class Publisher;

class Siren : public AbstractSubscriber
{
    std::string name;
    alarm::StateType alarmState;

    public:
        Siren(const std::string&);
        ~Siren();
        void update(alarm::StateType);
        const std::string& getName();
};

#endif /* SIREN_HPP */

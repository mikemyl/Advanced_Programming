#ifndef KEYPAD_HPP
#define KEYPAD_HPP

#include "AlarmHelper.hpp"
#include "Publisher.hpp"
#include <string>

class Publisher;

class Keypad : public AbstractSubscriber
{
    std::string name;
    alarm::StateType alarmState;

    public:
        Keypad(const std::string&);
        ~Keypad();
        void update(alarm::StateType);
        const std::string& getName();
};

#endif /* KEYPAD_HPP */

#ifndef ALARMHELPER_HPP
#define ALARMHELPER_HPP

namespace alarm {
    enum StateType { DISARMED = 0, ARMED, TRIGGERED};
    static const char* stateDescription[] = {"Disarmed", "Armed", "Triggered"};

    inline const char *printState(int enumVal)
    {
        return stateDescription[enumVal];
    }
}

#endif /* ALARMHELPER_HPP */

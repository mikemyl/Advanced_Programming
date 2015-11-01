#ifndef PUBLISHER_HPP
#define PUBLISHER_HPP

#include "AbstractSubscriber.hpp"
#include "AlarmHelper.hpp"
#include <vector>

class Publisher {
    public:
        void subscribe(AbstractSubscriber*);
        void unsubscribe(AbstractSubscriber*);
        void publish(); 
        alarm::StateType state;

    private:
        std::vector<AbstractSubscriber*> subscriber_list;
};


#endif

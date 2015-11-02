#ifndef PUBLISHER_HPP
#define PUBLISHER_HPP

#include "AbstractSubscriber.hpp"
#include "AlarmHelper.hpp"
#include <vector>

class Publisher {
    public:
        virtual void subscribe(AbstractSubscriber*);
        virtual void unsubscribe(AbstractSubscriber*);
        virtual void publish(); 
        virtual ~Publisher();

    protected:
        alarm::StateType state;
        Publisher();

    private:
        std::vector<AbstractSubscriber*> subscriber_list;
};


#endif

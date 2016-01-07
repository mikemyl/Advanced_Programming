#ifndef C1_HPP
#define C1_HPP

#include "I1.hpp"

class C1 : public I1 {
    public:
        C1(long int);
        virtual void foo();
        virtual void bar();
        virtual void baz();
        long int a;
};

#endif

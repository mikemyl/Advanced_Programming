#ifndef C2_HPP
#define C2_HPP

#include "I1.hpp"

class C2 : public I1 {
    public:
        C2(long int);
        virtual void foo();
        virtual void bar();
        virtual void qux();
        long int b;
};

#endif

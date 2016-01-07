#ifndef C3_HPP
#define C3_HPP

#include "I1.hpp"

class C3 : public I1 {
    public:
        C3(long int);
        virtual void foo();
        virtual void bar();
        virtual void norf();
        long int c;
};

#endif

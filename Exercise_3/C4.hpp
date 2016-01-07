#ifndef C4_HPP
#define C4_HPP

#include "C1.hpp"
#include "C2.hpp"

class C4 : public C1, public C2
{
    public:
        C4(long int);
        virtual void bar();
        virtual void foobar();
        virtual void foobaz();
        long int d;
};

#endif

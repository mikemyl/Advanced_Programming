#ifndef C5_HPP
#define C5_HPP

#include "C2.hpp"
#include "C3.hpp"

class C5 : public C2, public C3
{
    public:
        C5(long int);
        virtual void norf();
        virtual void fooqux();
        virtual void foonorf();
        long int e;
};

#endif

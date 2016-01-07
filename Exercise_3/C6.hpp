#ifndef C6_HPP
#define C6_HPP

#include "C4.hpp"
#include "C5.hpp"

class C6 : public C4, public C5 {
    public:
        C6(long int);
        void foobarbaz();
        void foobar();
        void foonorf();
        long int f;
};

#endif

#include "C4.hpp"
#include <iostream>


C4::C4(long int d) : C1(d-1), C2(d-1)
{
    this->d = d;
}

void C4::bar() {
    std::cout << "\nC4::bar()\n" << std::endl;
}


void C4::foobar() {
    std::cout << "\nC4::foobar()\n" << std::endl;
}

void C4::foobaz() {
    std::cout << "\nC4::foobaz()\n" << std::endl;
}


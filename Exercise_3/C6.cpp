#include "C6.hpp"
#include <iostream>


C6::C6(long int f) : C4(f-1), C5(f-1)
{
    this->f = f;
}

void C6::foobar() {
    std::cout << "\nC6::foobar()\n" << std::endl;
}

void C6::foonorf() {
    std::cout << "\nC6::foonorf()\n" << std::endl;
}

void C6::foobarbaz() {
    std::cout << "\nC6::foobarbaz()\n" << std::endl;
}


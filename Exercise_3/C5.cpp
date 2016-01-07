#include "C5.hpp"
#include <iostream>


C5::C5(long int e) : C2(e-1), C3(e-1)
{
    this->e = e;
}

void C5::norf() {
    std::cout << "\nC5::norf()\n" << std::endl;
}

void C5::fooqux() {
    std::cout << "\nC5::fooqux()\n" << std::endl;
}

void C5::foonorf() {
    std::cout << "\nC5::foonorf()\n" << std::endl;
}


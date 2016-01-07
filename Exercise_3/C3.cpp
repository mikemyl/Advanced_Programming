#include "C3.hpp"
#include <iostream>



C3::C3(long int c) {
    this->c = c;
}

void C3::foo() {
    std::cout << "\nC3::foo()\n" << std::endl;
}


void C3::bar() {
    std::cout << "\nC3::bar()\n" << std::endl;
}


void C3::norf() {
    std::cout << "\nC3::norf()\n" << std::endl;
}


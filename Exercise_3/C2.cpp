#include "C2.hpp"
#include <iostream>



C2::C2(long int b) {
    this->b = b;
}

void C2::foo() {
    std::cout << "\nC2::foo()\n" << std::endl;
}


void C2::bar() {
    std::cout << "\nC2::bar()\n" << std::endl;
}


void C2::qux() {
    std::cout << "\nC2::qux()\n" << std::endl;
}


#include "C1.hpp"
#include <iostream>


C1::C1(long int a) {
    this->a = a;
}

void C1::foo() {
    std::cout << "\nC1::foo()\n" << std::endl;
}


void C1::bar() {
    std::cout << "\nC1::bar()\n" << std::endl;
}


void C1::baz() {
    std::cout << "\nC1::baz()\n" << std::endl;
}


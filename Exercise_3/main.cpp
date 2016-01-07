#include "C6.hpp"
#include "C5.hpp"
#include <iostream>


int main() {
    C6 obj6 = C6(15);
    C5 obj5 = C5(9);
    C4 obj4 = C4(3);
    C1 obj1 = C4(8);

    obj6.norf();
    obj6.foobaz();
    obj6.fooqux();
    C3 *obj3 = &obj6;
    obj3->norf();
    obj6.baz();

    return 0;
}

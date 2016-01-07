#ifndef A_HPP
#define A_HPP
#include "LinkedList.hpp"
#include "Node.hpp"

class A {
    public:
        A();
        ~A();
        void init(int);
        bool doConnect();
        void benchmark(int);
    
    private:
        LinkedList *node_list;
};

#endif

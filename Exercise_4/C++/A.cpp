#include "A.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

A::A() {
    node_list = new LinkedList();
    srand(time(NULL));
}

A::~A() {
    while (node_list->getSize()) {
        node_list->deleteFirst();
    }
    delete node_list;
}

bool A::doConnect() {
    int  r;
    r = rand();

    return ((r % 2) == 1);
}

void A::benchmark(int operations) {
    int i=0;
    for (i = 0; i < operations; i++) {
        node_list->get((node_list->getSize() - 1));
    }
}

void A::init(int size) {
    int i=0;
    LinkedList *dead_nodes = new LinkedList();

    //Allocating Memory, random-connect nodes
    for (i=0; i < size; i++) {
        Node *new_node = new Node();
        if (doConnect()) {
            node_list->add(new_node);
        }
        else {
            dead_nodes->add(new_node);
        }
    }

    while (dead_nodes->getSize()) { 
        dead_nodes->deleteFirst();
    }
    
    delete dead_nodes;
}

int main() {
    A *asd = new A();
    int operations = 1500;
    std::cout << "Initializing..." << std::endl;  
    asd->init(120000000);
    std::cout << "Benchmarking " << operations << " Operations. " << std::endl;  
    clock_t begin = clock();
    asd->benchmark(operations);
    clock_t end = clock();  
    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
    delete(asd);
    std::cout << "Time Elapsed  (secs) : " << elapsed_secs << std::endl;  
    return 0;
}



#include "LinkedList.hpp"
#include "B.hpp"
#include <ctime>
#include <iostream>

B::B() {
    node_list = new LinkedList();
}

B::~B() {
    while(node_list->getSize())
        node_list->deleteFirst();
    delete node_list;
}


void B::benchmark(int operations) {
    int i=0;
    for (i = 0; i < operations; i++) {
        Node *new_node = new Node();
        new_node->next = NULL;
        node_list->add(new_node);
        node_list->get(42);
    }
}

void B::init(int size) {
    int i=0;
    for (i=0; i < size; i++) {
        Node *new_node = new Node();
        new_node->next = NULL;
        node_list->add(new_node);
    }
}

int main() {
    B *b = new B();
    int operations = 50500000;
    std::cout << "Initializing..." << std::endl;  
    b->init(70000000);
    std::cout << "Benchmarking " << operations << " Operations. " << std::endl;  
    clock_t begin = clock();
    b->benchmark(operations);
    clock_t end = clock();  
    delete(b);
    double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
    std::cout << "Time Elapsed  (secs) : " << elapsed_secs << std::endl;  
    return 0;
}


#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include "Node.hpp"

class LinkedList {
    
    public:
        LinkedList();
        int getSize();
        void add(Node*);
        Node* get(int);
        void deleteFirst();
    private:
        int size;
        Node *first;
        Node *last;
};

#endif

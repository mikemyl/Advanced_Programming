#include "LinkedList.hpp"
#include <iostream>
#include <string>


LinkedList::LinkedList() {
    this->first = NULL;
    this->last = NULL;
    this->size = 0;
}


int LinkedList::getSize() {
    return this->size;
}

void LinkedList::add(Node *node) {
    if (!last) {
        first = node;
        last = first;
        size++;
        return;
    }
    last->next = node;
    last = last->next;
    size++;
}

Node* LinkedList::get(int index) {
    if (first == NULL || index >= size)
        return NULL;
    Node *node = first;
    int current = 0;
    while (current < index) {
        node = node->next;
        current++;
    }
    return node;
}

void LinkedList::deleteFirst() {
    if (first == NULL || size <= 0) {
        std::cout << "Cannot Delete from empty list" << std::endl;
        return;
    }
    Node* oldfirst = first;
    first = first->next;
    delete oldfirst;
    size--;
}

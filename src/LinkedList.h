//
// Created by ozgur on 6.03.2023.
//

#ifndef DATASTRUCTURES_CPP_LINKEDLIST_H
#define DATASTRUCTURES_CPP_LINKEDLIST_H


#include "Node.h"

class LinkedList {
private:
    Node* head;
    Node* tail;
public:
    LinkedList();
    ~LinkedList();
    void insertFirst(Node* newNode);
    void insertLast(Node* newNode);
    void insertMiddle(Node* newNode, Node* previousNode);
    Node* search(int value);
    Node* getValueAtIndex(int index);
    int numberOfElements();
};


#endif //DATASTRUCTURES_CPP_LINKEDLIST_H

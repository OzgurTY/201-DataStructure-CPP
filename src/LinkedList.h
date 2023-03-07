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
    void insertFirst(Node* newNode);
    void insertLast(Node* newNode);
    void insertMiddle(Node* newNode, Node* previousNode);
};


#endif //DATASTRUCTURES_CPP_LINKEDLIST_H

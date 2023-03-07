//
// Created by ozgur on 6.03.2023.
//

#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

void LinkedList::insertFirst(Node *newNode) {
    if(tail == nullptr){
        tail = newNode;
    }
    newNode->setNext(head);
    head = newNode;
}

void LinkedList::insertLast(Node *newNode) {
    if(head == nullptr){
        head = newNode;
    }
    tail->setNext(newNode);
    tail = newNode;
}

void LinkedList::insertMiddle(Node* newNode, Node* previousNode) {
    newNode->setNext(previousNode->getNext());
    previousNode->setNext(newNode);
}

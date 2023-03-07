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

Node *LinkedList::search(int value) {
    Node *tmp = head;
    while(tmp != nullptr){
        if ( value == tmp->getData()){
            return tmp;
        }
        tmp = tmp->getNext();
    }
    return nullptr;
}

Node *LinkedList::getValueAtIndex(int index) {
    Node* tmp = head;
    int count = 0;
    while (tmp != nullptr) {
        if (count == index){
            return tmp;
        }
        count++;
        tmp = tmp->getNext();
    }
    return nullptr;
}

int LinkedList::numberOfElements() {
    Node* tmp = head;
    int count = 0;
    while(tmp != nullptr){
        count++;
        tmp = tmp->getNext();
    }
    return count;
}

LinkedList::~LinkedList() {
}





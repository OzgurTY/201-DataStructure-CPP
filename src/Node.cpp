//
// Created by ozgur on 6.03.2023.
//

#include "Node.h"

Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}

void Node::setNext(Node* next) {
    this->next = next;
}

void Node::getNext(Node* next) {
    return next;
}



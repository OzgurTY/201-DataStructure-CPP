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

Node *Node::getNext() {
    return next;
}

int Node::getData() {
    return data;
}

string Node::to_string() {
    return ::to_string(data);
}



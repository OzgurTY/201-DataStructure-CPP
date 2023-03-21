//
// Created by ozgur on 20.03.2023.
//

#include "Stack.h"

namespace list{

Stack::Stack() {
    top = nullptr;
}

bool Stack::isEmpty() {
    return top == nullptr;
}

Node* Stack::peek() {
    return top;
}

void Stack::push(Node *node) {
    node->setNext(top);
    top = node;
}

Node* Stack::pop() {
    Node* topNode = top;
    top = top->getNext();
    return topNode;
}

}

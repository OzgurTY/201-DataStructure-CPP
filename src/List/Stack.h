//
// Created by ozgur on 20.03.2023.
//


#include "Node.h"

namespace list{

class Stack {
private:
    Node* top;
public:
    Stack();
    bool isEmpty();
    Node* peek();
    void push(Node* node);
    Node* pop();
};

}



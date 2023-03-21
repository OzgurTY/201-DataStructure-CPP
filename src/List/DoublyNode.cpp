//
// Created by ozgur on 13.03.2023.
//

#include "DoublyNode.h"

DoublyNode::DoublyNode(int data) : Node(data) {
    previous = nullptr;
}

void DoublyNode::setPrevious(DoublyNode *_previous) {
    previous = _previous;
}

DoublyNode *DoublyNode::getPrevious() {
    return previous;
}

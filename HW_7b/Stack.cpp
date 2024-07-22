#include "Stack.h"
#include <iostream>

Stack::Stack() : top(nullptr) {}

Stack::~Stack() {
    clear();
}

void Stack::clear() {
    Node* current = top;
    Node* nextNode;
    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
    top = nullptr;
}

bool Stack::isFull() const {
    return false; // A linked list stack is never full
}

bool Stack::isEmpty() const {
    return (top == nullptr);
}

void Stack::push(char id) {
    Node* newNode = new Node;
    newNode->id = id;
    newNode->next = top;
    top = newNode;
}

void Stack::pop(char &id) {
    if (!isEmpty()) {
        Node* temp = top;
        id = top->id;
        top = top->next;
        delete temp;
    } else {
        id = '\0'; // Return null if stack is empty
    }
}

void Stack::copyFrom(const Stack &other) {
    clear(); // Clear the current stack

    if (other.top == nullptr) {
        top = nullptr;
        return;
    }

    // Copy the first node
    top = new Node;
    top->id = other.top->id;
    top->next = nullptr;

    Node* currentOther = other.top->next;
    Node* currentThis = top;

    while (currentOther != nullptr) {
        currentThis->next = new Node;
        currentThis = currentThis->next;
        currentThis->id = currentOther->id;
        currentThis->next = nullptr;
        currentOther = currentOther->next;
    }
}

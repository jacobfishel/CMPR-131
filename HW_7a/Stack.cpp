#include "Stack.h"

// Constructor
Stack::Stack() {
    top = nullptr;
}

// Destructor
Stack::~Stack() {
    Node* current = top;
    Node* nextNode;

    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

// Check if stack is full (wont be)
bool Stack::isFull() {
    return false;
}

// Check if stack is empty
bool Stack::isEmpty() {
    return (top == nullptr);
}

// Push a new element onto the stack
void Stack::push(int id) {
    Node* newNode = new Node;
    newNode->id = id;
    newNode->next = top;
    top = newNode;
}

// Pop the top element from the stack
void Stack::pop(int &id) {
    if (!isEmpty()) {
        Node* temp = top;
        id = top->id;
        top = top->next;
        delete temp;
    } else {
        cout << "Stack is empty." << endl;
    }
}

// Return the top element of the stack
int Stack::returnTop() {
    if (!isEmpty()) {
        return top->id;
    } else {
        cout << "Stack is empty. Cannot return top element." << endl;
        return -1;
    }
}

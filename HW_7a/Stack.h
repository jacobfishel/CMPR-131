#ifndef STACK_H
#define STACK_H


#include <iostream>

using namespace std;

struct Node;

class Stack {
    private:
        Node *top;

    public:
        Stack();
        ~Stack();
        
        bool isFull();
        bool isEmpty();
        void push(int id);
        void pop(int &id);
        int returnTop();
};

struct Node {
    int id;
    Node *next;
};

#endif // STACK_H
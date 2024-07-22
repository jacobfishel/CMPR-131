#ifndef STACK_H
#define STACK_H

struct Node;

class Stack {
private:
    Node *top;

public:
    Stack();
    ~Stack();
    
    bool isFull() const;
    bool isEmpty() const;
    void push(char id);
    void pop(char &id);
    void clear();
    void copyFrom(const Stack &other);
};

struct Node {
    char id;
    Node *next;
};

#endif // STACK_H

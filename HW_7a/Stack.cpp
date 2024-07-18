#include "Stack.h"

Stack::Stack();
Stack::~Stack();

bool Stack::isFull() {
    top = nullptr;
};

bool Stack::isEmpty() {
    
};
void Stack::push(int id);
void Stack::pop(int &id);
int Stack::returnTop();
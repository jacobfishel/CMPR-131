#ifndef STACK_H
#define STACK_H

#include <iostream>

using namespace std;


template <class T, int MAX_ITEMS>
class Stack {
    private:
        T stackItems[MAX_ITEMS];
        int top;

    public:
        Stack() { top = -1; };
        ~Stack() {};

        void makeItEmpty() { top = -1; }
        bool isEmpty() { return top == -1; }
        bool isFull() { return top == MAX_ITEMS - 1; }

        void push(T item) {
            top ++;
            stackItems[top] = item;
        }

        void pop(T &item) {
            item = stackItems[top];
            top --;
        }
};


#endif // STACK_H
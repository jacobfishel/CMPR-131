#ifndef ANIMAL_H
#define ANIMAL_H

const int SIZE = 5;

class Stack {
    private: 
        char items[SIZE];
        int top;

    public: 
        Stack() { top = -1; };
        ~Stack() {};

        void makeEmpty() { top = -1; }
        bool isFull() { return top == SIZE - 1; }
        bool isEmpty() { return top == -1; }

        void pop(char &item) {
            item = items[top];
            top--;
        }
        void push(char item) {
            top++;
            items[top] = item;
        }

};

#endif // ANIMAL_H
#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

template<class T, int MAX_ITEMS>
class Queue {
    private:
        T *ptr;
        int front;
        int rear;
        int size;
        int numItems;

    public:
        Queue() {
            ptr = new T[MAX_ITEMS];
            size = MAX_ITEMS;
            front = -1;
            rear = -1;
            numItems = 0;
        }
        ~Queue() {
            delete []ptr;
        }


        bool isEmpty() {
            if (numItems)
                return false;
            return true;
        };

        bool isFull() {
            return numItems >= size;
        };


        void enQue(T num) {
            if(isFull()) 
                cout << "Queue is full\n";
            else {
            rear = (rear + 1) % size;
            ptr[rear] = num;
            numItems++;
            }
        };

        void deQue(T &num) {
            if (isEmpty())
                cout << "The queue is empty\n";
            else {
                front = (front + 1) % size;
                num = ptr[front];
                numItems--;
            }
        };

        void makeItEmpty() {
            front = -1;
            rear = -1;
            numItems = 0;
        }
};

#endif // ANIMAL_H
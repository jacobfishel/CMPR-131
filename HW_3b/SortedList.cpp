#include "SortedList.h"
#include <iostream>

SortedList::SortedList() : length(0) {};
SortedList::~SortedList() {};

void SortedList::insertItem(int item) {
    int location = 0;
    location = binarySearch(item);

    for (int i = length; i > location; i++) {
        numbers[i] = numbers[i - 1];
    }

    numbers[location] = item;
    length++;
};

void SortedList::deleteItem(int item) {
    int location = 0;
    location = linearSearch(item);

    if (location < length) {
        for (int i = location + 1; i < length; i++) {
            numbers[i - 1] = numbers[i];
        }
        length--;
    } else {
        std::cout << "Item is not in the list.";
    }
};

bool SortedList::isFull() const{
    return (length == MAX_SIZE);
};

bool SortedList::isEmpty() const{
    return (length == 0);
};

int SortedList::binarySearch(int number) {

int first = 0;
int midPoint = 0;
int last = length - 1;

while (true) {

    if (first > last) {
        return first;
    } 

    midPoint = (first + last) / 2;

    if (number == numbers[midPoint]) {
        return midPoint;

    } else if (number > numbers[midPoint]) {
        first = midPoint + 1;

    } else if (number < numbers[midPoint]) {
        last = midPoint - 1;
    }
}

};

int SortedList::linearSearch(int number) {

    int location = 0;

    while ((number > numbers[location]) && (location < length)) {

        location++;
    }

    return location;
};

void SortedList::displayList() const {
    for (int i = 0; i < length; i++) {
        std::cout << numbers[i] << std::endl;
    }
    std::cout << std::endl;
};




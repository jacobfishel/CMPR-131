#include "UnsortedList.h"
#include <iostream>

UnsortedList::UnsortedList() : length(0) {};
UnsortedList::~UnsortedList() {};

void UnsortedList::insertItem(int item) {
    numbers[length] = item;
    length++;
};

void UnsortedList::deleteItem(int item) {
    int location = 0;

    while (numbers[location] != item && location < length) {
        location++;
    }

    if (location < length) {
    numbers[location] = numbers[length - 1];
    std::cout << "Item has been deleted.\n";
    length--;
    }

    else {
        std::cout << "Item is not in the list.";
    }
};

bool UnsortedList::isFull() {
    return (length == MAX_SIZE);
};

bool UnsortedList::isEmpty() {
    return (length == 0);
};


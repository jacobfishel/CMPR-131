// Attached: HW_6c
// ===================================================
// Program: HW_6c
// ===================================================
// Programmer: Jacob Fishel
// Class: CS CMPR 131
// ===================================================

//SOURCE CODE

// ===================================================

#include "Queue.h"
#include <string>


int main() {

    int intItem;
    Queue <int, 5> intQueue;

    string stringItem;
    Queue <string, 5> stringQueue;

    //making both queues empty initially
    intQueue.makeItEmpty();
    stringQueue.makeItEmpty();

    cout << "Please enter 5 values to enter in the int queue\n";

    //pushing 5 values into the int queue
    while (true) {
        cout << "Enter item: ";
        cin >> intItem;
        intQueue.enQue(intItem);
        if (intQueue.isFull()) 
            break;
    }

    //popping and outputting values
    cout << "\nHere are the items on the int queue: \n";
    while(!intQueue.isEmpty()) {
        intQueue.deQue(intItem);
        std::cout << intItem << endl;
    }
    std::cout << endl;

    //repeating for strings
    cout << "\n\nEnter strings to be added to the string queue\n";

    while (true) {
        cout << "Enter a value: ";
        cin >> stringItem;
        stringQueue.enQue(stringItem);

        if (stringQueue.isFull())
        break;
    }

    cout << "\nHere are the items on the string queue: \n";
    while(!stringQueue.isEmpty()) {
        stringQueue.deQue(stringItem);
        std::cout << stringItem << endl;
    }
    cout << endl;

    

    return 0;
}


/* OUTPUT:
Please enter 5 values to enter in the int queue
Enter item: 1
Enter item: 2
Enter item: 3
Enter item: 4
Enter item: 5

Here are the items on the int queue: 
1
2
3
4
5



Enter strings to be added to the string queue
Enter a value: one
Enter a value: two
Enter a value: three
Enter a value: four
Enter a value: five

Here are the items on the string queue: 
one
two
three
four
five

// ===================================================
*/
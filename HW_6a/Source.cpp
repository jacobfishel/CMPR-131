// Attached: HW_6a
// ===================================================
// Program: HW_6a
// ===================================================
// Programmer: Jacob Fishel
// Class: CS CMPR 131
// ===================================================

//SOURCE CODE

// ===================================================

#include "Stack.h"

#include <string>


int main() {

    //creating int and string stack instances
    int intItem;
    Stack <int, 5> intStack;

    string stringItem;
    Stack <string, 5> stringStack;

    //making both stacks empty initially
    intStack.makeItEmpty();
    stringStack.makeItEmpty();

    cout << "Please enter 5 values to enter in the int stack\n";

    //pushing 5 values into the int stack
    while (true) {
        cout << "Enter item: ";
        cin >> intItem;
        intStack.push(intItem);
        if (intStack.isFull()) 
            break;
    }

    //popping and outputting values
    cout << "\nHere are the items on the int stack: \n";
    while(!intStack.isEmpty()) {
        intStack.pop(intItem);
        std::cout << intItem << " --> ";
    }
    cout << "NULL\n";

    //repeating for strings
    cout << "\n\nEnter strings to be added to the string stack\n";

    while (true) {
        cout << "Enter a value: ";
        cin >> stringItem;
        stringStack.push(stringItem);

        if (stringStack.isFull())
        break;
    }

    cout << "\nHere are the items on the string stack: \n";
    while(!stringStack.isEmpty()) {
        stringStack.pop(stringItem);
        std::cout << stringItem << " --> ";
    }
    cout << "NULL\n";

    

    return 0;
}

/* OUTPUT:

Please enter 5 values to enter in the int stack
Enter item: 1
Enter item: 2
Enter item: 3
Enter item: 4
Enter item: 5

Here are the items on the int stack: 
5 --> 4 --> 3 --> 2 --> 1 --> NULL
Enter strings to be added to the string stack
Enter a value: hi
Enter a value: hello
Enter a value: bye
Enter a value: bello
Enter a value: papaya

Here are the items on the string stack: 
papaya --> bello --> bye --> hello --> hi --> NULL

// ===================================================
*/
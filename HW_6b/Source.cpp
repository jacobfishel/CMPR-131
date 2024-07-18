// Attached: HW_6b
// ===================================================
// Program: HW_6b
// ===================================================
// Programmer: Jacob Fishel
// Class: CS CMPR 131
// ===================================================

//SOURCE CODE

// ===================================================

#include "Stack.h"
#include <iostream>

using namespace std;

int main() {

    char item;
    Stack stack;       //declare a new stack and make it empty
    stack.makeEmpty();

    cout << "Enter 5 characters to add to the stack:\n";        //enter 5 characters into the stack

    while (true) {
        cout << "Enter a value: ";
        cin >> item;
        stack.push(item);

        if (stack.isFull())
        break;
    }

    cout << endl << endl;

    cout << "Here are the values from the stack:\n";        //display the stack

    while (!stack.isEmpty()) {
        stack.pop(item);
        cout << item << " --> ";
    }
    cout << "NULL\n";


    return 0;
}

/* OUTPUT:

Enter 5 characters to add to the stack:
Enter a value: j
Enter a value: a
Enter a value: c
Enter a value: o
Enter a value: b


Here are the values from the stack:
b --> o --> c --> a --> j --> NULL

// ===================================================
*/

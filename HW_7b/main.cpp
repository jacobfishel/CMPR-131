// Attached: HW_7b
// ===================================================
// Program: HW_7b
// ===================================================
// Programmer: Jacob Fishel
// Class: CS CMPR 131
// ===================================================

//SOURCE CODE

#include <iostream>
#include <cstring>
#include "Stack.h"

using namespace std;

const int MAX_SIZE = 100; // Maximum length of the input 

void getString(Stack& stack, char letters[]);
bool isPalindrome(Stack& stack, const char letters[], int length);

int main() {
    Stack stack;
    char letters[MAX_SIZE];
    
    getString(stack, letters);

    // Display the reversed string
    cout << "Here it is in reverse: ";
    Stack tempStack;
    tempStack.copyFrom(stack); // Copy stack to display reversed characters
    while (!tempStack.isEmpty()) {
        char character;
        tempStack.pop(character);
        cout << character;
    }
    cout << endl;

    // Check if the string is a palindrome
    int length = strlen(letters);
    if (isPalindrome(stack, letters, length)) {
        cout << "It is a palindrome!" << endl;
    } else {
        cout << "It is not a palindrome." << endl;
    }

    return 0;
}

void getString(Stack& stack, char letters[]) {
    char character;
    int length = 0;

    cout << "Enter a string of characters: ";
    while (cin.get(character) && character != '\n' && length < MAX_SIZE - 1) {
        stack.push(character);
        letters[length++] = character;
    }
    letters[length] = '\0';
}

bool isPalindrome(Stack& stack, const char letters[], int length) {
    Stack tempStack;
    tempStack.copyFrom(stack); // Use a copy for comparison

    for (int i = 0; i < length; ++i) {
        char ch;
        tempStack.pop(ch);
        if (ch != letters[i]) {
            return false;
        }
    }
    return true;
}


// ===================================================

/* OUTPUT:
Enter a string of characters: racecar
Here it is in reverse: racecar
It is a palindrome!
// ===================================================
*/

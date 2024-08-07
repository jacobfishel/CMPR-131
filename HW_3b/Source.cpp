// Attached: HW_3a
// ===================================================
// Program: HW_3a
// ===================================================
// Programmer: Jacob Fishel
// Class: CS CMPR 131
// ===================================================

//SOURCE CODE

#include <iostream>

#include "SortedList.h"

void showMenu() {
    std::cout << "a. Insert a number into the list.\n"
              << "b. Delete a number from the list.\n";
}

char getChoice() {
    std::cout << "Enter your choice: ";
    char query;
    std::cin >> query;
    return std::tolower(query);
}

int main() {

    SortedList list;


    while(true) {
        showMenu();
        char choice = getChoice();

        if (choice == 'a') {
            int number;
            std::cout << "Enter a number: ";
            std::cin >> number;

            if (!list.isFull()) {
                list.insertItem(number);
            } else {
                std::cout << "List is full.\n\n";
            }
        } else if (choice == 'b') {
            int number;
            std::cout << "Enter the number to be deleted: ";
            std::cin >> number;

            if (!list.isEmpty()) {
                list.deleteItem(number);
            } else {
                std::cout << "The list is empty.\n\n";
            }
        }

        std::cout << "\nDisplaying list: \n";
        list.displayList();

        std::cout << "Continue? (y/n): ";
        char loop;
        std::cin >> loop;

        if (std::tolower(loop) == 'n') {
            break;
        }
        std::cout << "\n";
    }    

    return 0;
}

// ===================================================

/* OUTPUT:

a. Insert a number into the list.
b. Delete a number from the list.
Enter your choice: a
Enter a number: 1
Displaying list: 
1

Continue? (y/n): y

a. Insert a number into the list.
b. Delete a number from the list.
Enter your choice: b
Enter the number to be deleted: 1
Displaying list: 

Continue? (y/n): y

a. Insert a number into the list.
b. Delete a number from the list.
Enter your choice: b
Enter the number to be deleted: 1
The list is empty.

Displaying list: 

Continue? (y/n): y

a. Insert a number into the list.
b. Delete a number from the list.
Enter your choice: a
Enter a number: 1
Displaying list: 
1

Continue? (y/n): y

a. Insert a number into the list.
b. Delete a number from the list.
Enter your choice: a
Enter a number: 2
Displaying list: 
1
2

Continue? (y/n): ^C


// ===================================================
*/
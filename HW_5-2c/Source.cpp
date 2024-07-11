// Attached: HW_5-2c
// ===================================================
// Program: HW_5-2c
// ===================================================
// Programmer: Jacob Fishel
// Class: CS CMPR 131
// ===================================================

//SOURCE CODE

// ===================================================

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    vector<int> numbers;

    cout << "Starting with 2, pushing these into the back of the vector: 2, 4, 6, 8, 10" << endl << endl;

    numbers.push_back(2);
    numbers.push_back(4);
    numbers.push_back(6);
    numbers.push_back(8);
    numbers.push_back(10);

    cout <<"The size of the list is now " << numbers.size() << endl
         << "The vector capacity (array size) is " << numbers.capacity() << endl << endl;

    cout << "The back element is: " << numbers.back() << endl
         << "The front element is: " << numbers.front() << endl << endl;

    cout << "Now deleting the value at the end of the list . . .\n";

    numbers.pop_back();

    cout << "The size of the list is now " << numbers.size() << endl
         << "After deleting, here is the list: ";

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << ", ";
    }
    cout << endl << endl;

    cout << "Now swapping the first number with the last number.\n";

    swap(numbers.front(), numbers.back());

    cout << "After swapping, here is the list: ";

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << ", ";
    }
    cout << endl << endl;

    cout << "Now inserting 0 at the beginning of the list.\n";

    numbers.insert(numbers.begin(), 0);

    cout << "After inserting, here is the list: ";

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << ", ";
    }
    cout << endl << endl;

    cout << "The size of the list is now " << numbers.size() << endl
         << "The value of the third element (index 2) is: " << numbers[2] << endl << endl;

    cout << "Now removing all list items . . .\n";
    numbers.clear();
    cout << "The size of the list is now " << numbers.size()
         << "The vector capacity (array size) is " << numbers.capacity() << endl;

    return 0;
}

/* OUTPUT:
// ===================================================

Starting with 2, pushing these into the back of the vector: 2, 4, 6, 8, 10

The size of the list is now 5
The vector capacity (array size) is 8

The back element is: 10
The front element is: 2

Now deleting the value at the end of the list . . .
The size of the list is now 4
After deleting, here is the list: 2, 4, 6, 8, 

Now swapping the first number with the last number.
After swapping, here is the list: 8, 4, 6, 2, 

Now inserting 0 at the beginning of the list.
After inserting, here is the list: 0, 8, 4, 6, 2, 

The size of the list is now 5
The value of the third element (index 2) is: 4

Now removing all list items . . .
The size of the list is now 0The vector capacity (array size) is 8

*/
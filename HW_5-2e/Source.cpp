// Attached: HW_5-2e
// ===================================================
// Program: HW_5-2e
// ===================================================
// Programmer: Jacob Fishel
// Class: CS CMPR 131
// ===================================================

//SOURCE CODE

// ===================================================

#include <iostream>
#include <string>
#include <map>

using namespace std;


void displayList(map<int, string>& myMap);

int main() {

    //empty map that accociates ints to strings
    map<int, string> myMap;

    //inserting pairs into the map
    myMap[100] = "Tom Lee";
    myMap[101] = "Joe Jones";
    myMap[102] = "Kim Adams";
    myMap[103] = "Bob Thomas";
    myMap[104] = "Linda Lee";

    //display the list
    cout << "Here is the list of students: " << endl << endl;
    displayList(myMap);

    //locate and display the students name from an ID
    cout << "\n\nEnter a student ID to get a students name:\nID: ";
    int id;
    cin >> id;
    cout << "Students [" << id << "] - " << myMap[id] << endl << endl;

    cout << "# of students: " << myMap.size() << endl;

    //delete a student
    cout << "\nDelete a student (Y or N)?";
    char choice;
    cin >> choice;
    if (toupper(choice) == 'Y') {
        cout << "Enter ID of student to be deleted: ";
        int id;
        cin >> id;
        myMap.erase(id);
    }

    //map after the deletion
    cout << "\nHere is the list of students after the delete: " << endl << endl;
    displayList(myMap);

}

//function to display all keys and values in a map
void displayList(map<int, string>& myMap) {
        for (const auto& pair : myMap) {
            cout << pair.first << ": " << pair.second << endl;
        }
};


/* OUTPUT:

Here is the list of students: 

100: Tom Lee
101: Joe Jones
102: Kim Adams
103: Bob Thomas
104: Linda Lee


Enter a student ID to get a students name:
ID: 103
Students [103] - Bob Thomas

# of students: 5

Delete a student (Y or N)?y 
Enter ID of student to be deleted: 103

Here is the list of students after the delete: 

100: Tom Lee
101: Joe Jones
102: Kim Adams
104: Linda Lee

// ===================================================
*/
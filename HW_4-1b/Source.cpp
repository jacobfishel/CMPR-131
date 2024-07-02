// Attached: HW_4a
// ===================================================
// Program: HW_4a
// ===================================================
// Programmer: Jacob Fishel
// Class: CS CMPR 131
// ===================================================

//SOURCE CODE

// ===================================================

#include "Dog.h"

#include <iostream>
#include <cstdlib> // For system("cls") and system("pause")
#include <cctype>

void insertDog(Dog *&head);
void displayList(Dog *&head);
void deleteDog(Dog *&head);

void clearScreen() {
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #else
        system("clear");
    #endif
}

void pauseScreen() {
    #if defined(_WIN32) || defined(_WIN64)
        system("pause");
    #else
        std::cout << "Press enter to continue...";
        std::cin.ignore();
        std::cin.get();
    #endif
}

int main() {

  char choice;
  //Creating the head of the link
  Dog *head = nullptr;

  std::cout << "Enter dogs into the list: \n";
  //add 3 dogs, then just 1 at a time
  for (int i = 0; i < 3; i++) {
        insertDog(head);
    }

    // Prompt for additional dogs
    do {
        std::cout << "Enter another dog (Y or N)? ";
        std::cin >> choice;
        choice = toupper(choice);

        if (choice == 'Y') {
            insertDog(head); // Insert one more dog
        }

    } while (choice == 'Y');

    std::system("clear");

  std::cout << "Display the list? (Y/N)?";
  std::cin >> choice;
  choice = toupper(choice);

  if (choice == 'Y'){
  std::cout << "Here is the list: \n\n";
  displayList(head);
  }

  std::cout << "Now delete a dog:\n";
  deleteDog(head);

  std::cout << "Here is the list after the delete: \n";
  displayList(head);

  std::cout << "Press enter to continue...";
  std::cin.ignore();
  std::cin.get();
  return 0;

};

//function to insert a dog in the link
void insertDog(Dog *&head) {

  Dog *temp = new Dog;

  std::cout << "ID: ";
  std::cin >> temp->id;

  std::cout << "Name: ";
  std::cin.ignore();
  std::cin >> temp->name;
  std::cout << std::endl;

  temp->next = head;
  head = temp;

};

//function display link of dogs
void displayList(Dog *&head) {

  Dog *temp = head;

  while (temp != nullptr) {
    std::cout << "ID: " << temp->id << std::endl;
    std::cout << "Name: " << temp->name << std::endl << std::endl;
    temp = temp->next; 
  }

};

//function to delete a dog from the link
void deleteDog(Dog *&head) {

  Dog *lead = head;
  Dog *follow = head;

  int id;
  std::cout << "Enter an ID of a dog to be deleted: ";
  std::cin >> id;

  while ((lead->id != id) && (lead->next != nullptr)) {

    follow = lead;
    lead = lead->next;
    std::cout << "The dog has been deleted.\n";

  }
  //check if its first
  //if its first: assign head to lead->next and delete lead
  if (lead == head) {
    if (lead->id == id) {
      head = lead->next;
      delete lead;
      std::cout << "The dog has been deleted.\n";

    } else {
      std::cout << "#" << id << " Is not in the list.";
    }
  }
  //check if it is last
  else if (lead->next == nullptr) {
    if (lead->id == id) {
      follow->next = lead->next;
      delete lead;
      std::cout << "The dog has been deleted.\n";

    } else {
      std::cout << "#" << id << " Is not in the list.";
    }
  }
  //else it is in the list
  else {
    follow->next = lead->next;
    delete lead;
    std::cout << "The dog has been deleted.\n";
  }

};

// ===================================================

/* OUTPUT:

Enter dogs into the list: 
ID: 10
Name: pismo

ID: 20
Name: pete

ID: 30
Name: milo

Enter another dog (Y or N)? y
ID: 40
Name: bart

Enter another dog (Y or N)? n
Display the list? (Y/N)?y
Here is the list: 

ID: 40
Name: bart

ID: 30
Name: milo

ID: 20
Name: pete

ID: 10
Name: pismo

Now delete a dog:
Enter an ID of a dog to be deleted: 40
The dog has been deleted.
Here is the list after the delete: 
ID: 30
Name: milo

ID: 20
Name: pete

ID: 10
Name: pismo

// ===================================================
*/

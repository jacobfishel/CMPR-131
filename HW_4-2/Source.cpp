// Attached: HW_4-2
// ===================================================
// Program: HW_4-2
// ===================================================
// Programmer: Jacob Fishel
// Class: CS CMPR 131
// ===================================================

//SOURCE CODE

// ===================================================


#include "Vehicle.h"

void insertItem(Vehicle *&head);
void displayList(Vehicle *&head);
void searchList(Vehicle *&head);


int main() {

  // creating the head of the link
  Vehicle *head = nullptr;
  char choice;

  std::cout << "Enter vehicles into the list: \n";

  //loop to insert at least 5 vehicles
  for (int i = 0; i < 5; i++) {
    insertItem(head);
  }

//loop to enter more vehicles
  do {
    std::cout << "Enter another vehicle (Y or N)? ";
    std::cin >> choice;
    choice = toupper(choice);

    if (choice == 'Y') {
      insertItem(head);
    }
  } while (choice == 'Y');

  //clear the screen
  system("clear");

//display the list
  std::cout << "Display the list (Y or N)? ";
  std::cin >> choice;
  choice = toupper(choice);

  if (choice == 'Y') {
    displayList(head);
  }

  //searchList call.
  searchList(head);

  

  return 0;
}

//inserts vehicles to the link
//param head of the link
void insertItem(Vehicle *&head) {
    Vehicle *temp = new Vehicle;
    temp->next = nullptr;

    // Getting the ID
    std::cout << "ID: ";
    std::cin >> temp->id;

    // Getting the model
    std::cout << "Model: ";
    std::cin.ignore(); // To clear the newline left in the buffer
    std::getline(std::cin, temp->model);

    // Adding temp to the link
    temp->next = head;

    // Making temp the head
    head = temp;
};

void displayList(Vehicle *&head) {

  //create a temp, then loop through and print all id in list
  Vehicle *temp = head;
  while (temp != nullptr) {
    std::cout << "ID: " << temp->id << std::endl;
    std::cout << "Model: " << temp->model << std::endl;

    temp = temp->next;
  }
};

void searchList(Vehicle *&head) {

  int id;
  std::cout << "Enter the ID of a vehicle to be found: ";
  std::cin >> id;

  Vehicle *lead = head;
  Vehicle *follow = head;
  //3 cases, the id is the first, the last, or in the middle, 
  //when looping through, 

  while ((lead->id != id) && (lead->next != nullptr)) {

    follow = lead;
    lead = lead->next;
  }
  //check if its first
  //if its first: assign head to lead->next and delete lead
  if (lead == head) {
    if (lead->id == id) {
    std::cout << "We found the vehicle!\nID: " << lead->id << "\nModel: " << lead->model << "\n\n";

    } else {
      std::cout << "#" << id << " Is not in the list.";
    }
  }
  //check if it is last
  else if (lead->next == nullptr) {
    if (lead->id == id) {
    std::cout << "We found the vehicle!\nID: " << lead->id << "\nModel: " << lead->model << "\n\n";

    } else {
      std::cout << "#" << id << " Is not in the list.";
    }
  }
  //else it is in the list
  else {
    std::cout << "We found the vehicle!\nID: " << lead->id << "\nModel: " << lead->model << "\n\n";
  }

};



/* OUTPUT:

// ===================================================
// Enter vehicles into the list: 
// ID: 1
// Model: 1
// ID: 2
// Model: 2
// ID: 3
// Model: 3
// ID: 4
// Model: 4
// ID: 5
// Model: 5
// Enter another vehicle (Y or N)? y
// ID: 6
// Model: 6
// Enter another vehicle (Y or N)? 

// Display the list (Y or N)? y
// ID: 6
// Model: 6
// ID: 5
// Model: 5
// ID: 4
// Model: 4
// ID: 3
// Model: 3
// ID: 2
// Model: 2
// ID: 1
// Model: 1
// Enter the ID of a vehicle to be found: 
// Enter the ID of a vehicle to be found: 2
// We found the vehicle!
// ID: 2
// Model: 2
// Attached: HW_5-1a
// ===================================================
// Program: HW_5-1a
// ===================================================
// Programmer: Jacob Fishel
// Class: CS CMPR 131
// ===================================================

//SOURCE CODE

// ===================================================

#include <list>
#include <iostream>


void getNumbers(std::list<int>& aList);
int addNumbers(std::list<int>& aList);
void displaySum(std::list<int>& aList);

int main() {

  //initialize an empty list of ints
  std::list<int> aList;

  //getNumbers to fill the list with 5 ints
  getNumbers(aList);
  //display the list and add it up
  displaySum(aList);

  return 0;
}

//fils list with  ints
void getNumbers(std::list<int>& aList) {
  std::cout << "Enter 5 integer values:\n";
  
  //loop to get input from user
  for(int i = 0; i < 5; i++) {
    int numb;
    std::cout << "Enter a value: ";
    std::cin >> numb;

    //push input into the list
    aList.push_back(numb);
  }
};

//adds up numbers in a list
int addNumbers(std::list<int>& aList) {

  int sum = 0;
  //iterator to loop through the list.
  for (std::list<int>::iterator it = aList.begin(); it !=aList.end(); it++) {
    sum += *it;
  }
  
  return sum;
};

//displays list then displays sum
void displaySum(std::list<int>& aList) {

  std::cout << "\n\n\nHere is the list: ";
  //Iterator to display the list
  for (std::list<int>::iterator it = aList.begin(); it !=aList.end(); it++) {
    std::cout << *it << " ";
  }
  
  //display sum
  std::cout << "\n\nThe sum equals: " << addNumbers(aList) << std::endl;
};


/* OUTPUT:
// ===================================================
Enter 5 integer values:
Enter a value: 1
Enter a value: 2
Enter a value: 3
Enter a value: 4
Enter a value: 5



Here is the list: 1 2 3 4 5 

The sum equals: 15
*/
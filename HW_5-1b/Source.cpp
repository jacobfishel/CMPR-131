// Attached: HW_5-1b
// ===================================================
// Program: HW_5-1b
// ===================================================
// Programmer: Jacob Fishel
// Class: CS CMPR 131
// ===================================================

//SOURCE CODE

// ===================================================

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {

  std::vector<std::string> cities;

  cities.push_back("Venice");
  cities.push_back("Paris");
  cities.push_back("Dublin");


  std::vector<std::string>::iterator it;
  std::vector<std::string>::reverse_iterator rit;

  //first forloop with subscript operator
  std::cout << "Output the list using a for loop and the subscript operator:\n";
  for (int i = 0; i < cities.size(); i++) {
    std::cout << cities[i] << std::endl;
  }
  std::cout << std::endl;

  //second for loop using the iterator
  std::cout << "Output the list using a for loop and iterator:\n";
  for (it = cities.begin(); it != cities.end(); it++) {
    std::cout << *it << std::endl;
  }
  std::cout << std::endl;

  //third for loop to display reverse using reverse iterator
  std::cout << "Output the list in reverse order using a for loop and reverse_iterator:\n";
  for (rit = cities.rbegin(); rit != cities.rend(); rit++) {
    std::cout << *rit << std::endl;
  }

  //display the size of cities
  std::cout << "\n# of cities: " << cities.size() << "\n\n";

  //display second city in cities
  std::cout << "The second city in the list is: " <<cities[1] << "\n\n";

  //swap first and second values of city
  std::cout << "Now swapping the first city with the secon city:\n\n";
  std::swap(cities[0], cities[1]);

  //display second city after swap
  std::cout << "Now the second city is " << cities[1] << ".\n";

  return 0;
}

/* OUTPUT:
// ===================================================
Output the list using a for loop and the subscript operator:
Venice
Paris
Dublin

Output the list using a for loop and iterator:
Venice
Paris
Dublin

Output the list in reverse order using a for loop and reverse_iterator:
Dublin
Paris
Venice

# of cities: 3

The second city in the list is: Paris

Now swapping the first city with the secon city:

Now the second city is Venice.
*/

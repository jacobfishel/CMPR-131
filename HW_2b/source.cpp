// Attached: HW_2b
// ===================================================
// Program: HW_2b
// ===================================================
// Programmer: Jacob Fishel
// Class: CS CMPR 131
// ===================================================

#include <iostream>
#include "Bird.h"
#include "Mammal.h"

int main() {

Bird bird("pelican", 8.5, "gray");
Mammal cow("dairy cow", 8.5, "Black and white");

bird.showAnimal();
cow.showAnimal();

return 0;
}


// ===================================================

/* OUTPUT:

Birds are vertebrates in the Aves class.
This pelican has gray feathers and weighs 8.5 pounds.

Mammals are vertebrates in the Mammalia class.
This Black and white dairy cow weighs 8.5 pounds.

// ===================================================
*/

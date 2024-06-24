// Attached: HW_2a
// ===================================================
// Program: HW_2a
// ===================================================
// Programmer: Jacob Fishel
// Class: CS CMPR 131
// ===================================================

#include "Painting.h"
#include "Sculpture.h"

#include <iostream>
#include <string>

  
  void displayArt(Art & art) {
    art.showArt();
  };


int main() {

  Painting a1("12345", "The Kiss", "Gustav Klimt", "Symbolist", 1908, 2500, "Oil");
  Sculpture a2("54321", "The Thinker", "Rodin", "Impressionism", 1880, 2000, "Bronze");

  a1.showArt();
  a2.showArt();

    return 0;
}


// ===================================================
//OUTPUT:
//
// ID: 12345
// Title: The Kiss
// Artist: Gustav Klimt
// Paint Medium: Oil
// Genre: Symbolist
// Year: 1908
// Price: $2500
//
// ID: 54321
// Title: The Thinker
// Artist: Rodin
// Material: Bronze
// Genre: Impressionism
// Year: 1880
// Price: $2000
// ===================================================
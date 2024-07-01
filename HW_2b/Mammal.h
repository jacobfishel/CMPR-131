#ifndef MAMMAL_H
#define MAMMAL_H

#include <string>
#include "Animal.h"

class Mammal : public Animal {

public:
  Mammal(std::string name, double weight, std::string hairColor);
  ~Mammal();
  void showAnimal();



private:
  std::string hairColor_;

};

#endif // MAMMAL_H
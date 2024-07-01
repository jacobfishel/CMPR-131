#include "Mammal.h"
#include <string>
#include <iostream>

Mammal::Mammal(std::string name, double weight, std::string hairColor)
: Animal(name, weight) ,hairColor_(hairColor) {};

Mammal::~Mammal(){};

void Mammal::showAnimal() {

    std::cout << "Mammals are vertebrates in the Mammalia class.\nThis " << hairColor_ << " "
              << name_ << " weighs " << weight_ << " pounds.\n\n";
};
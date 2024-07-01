#include "Bird.h"
#include <string>
#include <iostream>

Bird::Bird(std::string name, double weight, std::string featherColor)
: Animal(name, weight), featherColor_(featherColor) {};

Bird::~Bird(){};

void Bird::showAnimal() {

    std::cout << "Birds are vertebrates in the Aves class.\nThis " << name_ << " has "
              << featherColor_ << " feathers and weighs " << weight_ << " pounds.\n\n";
};
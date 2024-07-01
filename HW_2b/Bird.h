#ifndef BIRD_H
#define BIRD_H

#include <string>
#include "Animal.h"

class Bird : public Animal {

public:
    Bird(std::string name, double weight, std::string featherColor);
    ~Bird();
    void showAnimal();


private:
    std::string featherColor_;


};

#endif // BIRD_H
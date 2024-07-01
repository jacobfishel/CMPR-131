#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {

public:

  Animal(std::string name, double weight)
  : name_(name), weight_(weight) {};
  
  ~Animal(){};


protected:

  std::string name_;
  double weight_;

};

#endif // ANIMAL_H
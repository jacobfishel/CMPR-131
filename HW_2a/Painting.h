#ifndef PAINTING_H
#define PAINTING_H

#include "Art.h"
#include <string>

class Painting : public Art {

public:
    Painting(std::string id, std::string title, std::string artist, std::string genre,
      int year, double price, std::string paintMedium);

    ~Painting(){};

    void showArt() override;


private:
    std::string paintMedium_;

};

#endif // PAINTING_H
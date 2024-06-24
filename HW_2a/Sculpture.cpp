#include "Sculpture.h"
#include "Art.h"

#include <iostream>
#include <string>

Sculpture::Sculpture(std::string id, std::string title, std::string artist, std::string genre,
      int year, double price, std::string material)
      : material_(material), Art(id, title, artist, genre, year, price) {};

void Sculpture::showArt() {

    std::cout << "ID: " << id_ << "\n"
              << "Title: " << title_ << "\n"
              << "Artist: " << artist_ << "\n"
              << "Material: " << material_ << "\n"
              << "Genre: " << genre_ << "\n"
              << "Year: " << year_ << "\n"
              << "Price: $" << price_ << "\n\n";
};

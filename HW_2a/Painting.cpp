#include "Painting.h"
#include "Art.h"

#include <iostream>
#include <string>

Painting::Painting(std::string id, std::string title, std::string artist, std::string genre,
      int year, double price, std::string paintMedium)
      : Art(id, title, artist, genre, year, price), paintMedium_(paintMedium) {};

void Painting::showArt() {

    std::cout << "ID: " << id_ << "\n"
              << "Title: " << title_ << "\n"
              << "Artist: " << artist_ << "\n"
              << "Paint Medium: " << paintMedium_ << "\n"
              << "Genre: " << genre_ << "\n"
              << "Year: " << year_ << "\n"
              << "Price: $" << price_ << "\n\n";
};
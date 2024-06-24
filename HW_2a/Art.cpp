#include "Art.h"
#include <string>

Art::Art(std::string id, std::string title, std::string artist, std::string genre,
      int year, double price)
    : id_(id), title_(title), artist_(artist), genre_(genre), year_(year), price_(price) {};
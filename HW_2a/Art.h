#ifndef ART_H
#define ART_H

#include <string>

class Art {

public:
  Art(std::string id, std::string title, std::string artist, std::string genre,
      int year, double price);

  ~Art(){};

  virtual void showArt() = 0;

protected:
  std::string id_;
  std::string title_;
  std::string artist_;
  std::string genre_;
  int year_;
  double price_;
};

#endif // ART_H
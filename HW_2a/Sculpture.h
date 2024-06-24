#include "Art.h"
#include <string>

class Sculpture : public Art {

public:
    Sculpture(std::string id, std::string title, std::string artist, std::string genre,
      int year, double price, std::string material);

    ~Sculpture(){};

    void showArt() override;



private:
    std::string material_;


};
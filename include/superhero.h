
#include <string>
#include <iostream>



class Superhero{

// std::string alignment,

public:
  Superhero(int page_id, std::string name, std::string urlslug, std::string id,
    char eye_color, char hair_color, char sex,
    std::string gsm, bool alive, int appearances,
    std::string first_appearance, int year){
    this-> page_id = page_id;
    this-> name = name;
    this-> urlslug = urlslug;
    this-> id = id;
    // this-> alignment = alignment;
    this-> eye_color = eye_color;
    this-> hair_color = hair_color;
    this-> sex = sex;
    this-> gsm = gsm;
    this-> alive = alive;
    this-> appearances = appearances;
    this-> first_appearance = first_appearance;
    this-> year = year;
  }

  // boolean insert(const Superhero & s);

  // Superhero & get(const std::string name);


private:
  int page_id;
  std::string name;
  std::string urlslug;
  std::string id;
  // std::string alignment;
  char eye_color;
  char hair_color;
  char sex;
  std::string gsm;
  bool alive;
  int appearances;
  std::string first_appearance;
  int year;

};

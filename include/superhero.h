
#indef Superhero
#define Superhero

#include <string>
#include <iostream>



class Superhero{

// std::string alignment,

public:
  Superhero();
  ~Superhero();

  void Superhero::setPageID(std::string page_id);
  void Superhero::setName(std::string name);
  void Superhero::setUrl(std::string urlslug);
  void Superhero::setID(std::string id);
  void Superhero::setEyeColor(std::string eye_color);
  void Superhero::setHairColor(std::string hair_color);
  void Superhero::setSex(std::string sex);
  void Superhero::setGSM(std::string gsm);
  void Superhero::setAlive(std::string alive);
  void Superhero::setAppearances(std::string appearances);
  void Superhero::setFirstAppearance(std::string first_appearance);
  void Superhero::setYear(std::year = year);

  std::string Superhero::getPageID();
  std::string Superhero::getName();
  std::string Superhero::getUrl();
  std::string Superhero::getID();
  std::string Superhero::getEyeColor();
  std::string Superhero::getHairColor();
  std::string Superhero::getSex();
  std::string Superhero::getGSM();
  std::string Superhero::getAlive();
  std::string Superhero::getAppearances();
  std::string Superhero::getFirstAppearance();
  std::string Superhero::getYear();

private:
  std::string page_id;
  std::string name;
  std::string urlslug;
  std::string id;
  std::string alignment;
  std::string eye_color;
  std::string hair_color;
  std::string sex;
  std::string gsm;
  std::string alive;
  std::string appearances;
  std::string first_appearance;
  std::string year;

};

#endef Superhero

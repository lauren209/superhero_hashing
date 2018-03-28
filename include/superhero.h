#ifndef         __H_SUPERHERO__
#define         __H_SUPERHERO__

#include <string>
#include <iostream>

class Superhero{

// std::string alignment,

public:
   Superhero();

  void setPageID(std::string p);
  void setName(std::string n);
  void setUrl(std::string url);
  void setID(std::string i);
  void setAlignment(std::string al);
  void setEyeColor(std::string e);
  void setHairColor(std::string h);
  void setSex(std::string s);
  void setGSM(std::string g);
  void setAlive(std::string a);
  void setAppearances(std::string app);
  void setFirstAppearance(std::string f);
  void setYear(std::string y);


  std::string getPageID();
  std::string getName();
  std::string getUrl();
  std::string getID();
  std::string getAlignment();
  std::string getEyeColor();
  std::string getHairColor();
  std::string getSex();
  std::string getGSM();
  std::string getAlive();
  std::string getAppearances();
  std::string getFirstAppearance();
  std::string getYear();

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


#endif

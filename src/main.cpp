
#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "my_hash.h"
#include "superhero.h"

int main(int argc, char** argv){

  Superhero hero;
  std::string page_id;
  std::string name;
  std::string urlslug;
  std::string id;
  std::string eye_color;
  std::string hair_color;
  std::string sex;
  std::string gsm;
  std::string alive;
  std::string appearances;
  std::string first_appearance;
  std::string year;



  ifstream ip("../marvel-wikia-data.csv");

  while(ip.good()){
    getline(ip.page_id, ',');
    getline(ip.name, ',');
    getline(ip.urlslug, ',');
    getline(ip.id, ',');
    getline(ip.eye_color, ',');
    getline(ip.hair_color, ',');
    getline(ip.sex, ',');
    getline(ip.gsm, ',');
    getline(ip.alive, ',');
    getline(ip.appearances, ',');
    getline(ip.first_appearance, ',');
    getline(ip.year, '\n');
  }

  hero.setPageID(page_id);
  hero.setName(name);
  hero.setUrl(urlslug);
  hero.setID(id);
  hero.setEyeColor(eye_color);
  hero.setHairColor(hair_color);
  hero.setSex(sex);
  hero.setGSM(gsm);
  hero.setAlive(alive);
  hero.setAppearances(appearances);
  hero.setFirstAppearance(first_appearance);
  hero.setYear(year);

}








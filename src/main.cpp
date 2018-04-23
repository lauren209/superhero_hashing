
#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "my_hash.h"
#include "superhero.h"
#include "csv.h"

int main(int argc, char** argv){

  Superhero hero;
  my_hash hash;
  int collisions;

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

  std::ifstream inFile;

  io::CSVReader<13> in("../marvel-wikia-data.csv");
  in.read_header(io::ignore_extra_column, "page_id", "name", "urlslug", "ID",
                                          "ALIGN", "EYE", "HAIR", "SEX", "GSM",
                                          "ALIVE", "APPEARANCES", "FIRST APPEARANCE",
                                          "Year" );
  std::string vendor; int size; double speed;

  while(in.read_row(page_id, name, urlslug, id, alignment, eye_color, hair_color,
                    sex, gsm, alive, appearances, first_appearance, year)){
    // do stuff with the data

    hero.setPageID(page_id);
    hero.setName(name);
    hero.setUrl(urlslug);
    hero.setID(id);
    hero.setAlignment(alignment);
    hero.setEyeColor(eye_color);
    hero.setHairColor(hair_color);
    hero.setSex(sex);
    hero.setGSM(gsm);
    hero.setAlive(alive);
    hero.setAppearances(appearances);
    hero.setFirstAppearance(first_appearance);
    hero.setYear(year);

    if(hash.insert(hero) == false){
      collisions += 1;
    }

  }
  std::cout << collisions << std::endl;
  return collisions;
}








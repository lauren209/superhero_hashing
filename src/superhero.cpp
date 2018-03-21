
#include "../include/superhero.h"
#include <string>
#include <iostream>
#include <cstdlib>

Superhero::Superhero(){
}

~Superhero::Superhero(){
}

void Superhero::setPageID(std::string page_id){
  this->page_id = page_id;
}

void Superhero::setName(std::string name){
  this->name = name;
}

void Superhero::setUrl(std::string urlslug){
  this->urlslug = urlslug;
}

void Superhero::setID(std::string id){
  this->id = id;
}

void Superhero::setEyeColor(std::string eye_color){
  this->eye_color = eye_color;
}

void Superhero::setHairColor(std::string hair_color){
  this->hair_color = hair_color;
}

void Superhero::setSex(std::string sex){
  this->sex = sex;
}

void Superhero::setGSM(std::string gsm){
  this->gsm = gsm;
}

void Superhero::setAlive(std::string alive){
  this->alive = alive;
}

void Superhero::setAppearances(std::string appearances){
  this->appearances = appearances;
}

void Superhero::setFirstAppearance(std::string first_appearance){
  this->first_appearance = first_appearance;
}

void Superhero::setYear(std::year = year){
  this->year = year;
}



std::string Superhero::getPageID(){
  return page_id;
}

std::string Superhero::getName(){
  return name;
}

std::string Superhero::getUrl(){
  return urlslug;
}

std::string Superhero::getID(){
  return id;
}

std::string Superhero::getEyeColor(){
  return eye_color;
}

std::string Superhero::getHairColor(){
  return hair_color;
}

std::string Superhero::getSex(){
  return sex;
}

std::string Superhero::getGSM(){
  return gsm;
}

std::string Superhero::getAlive(){
  return alive;
}

std::string Superhero::getAppearances(){
  return appearances;
}

std::string Superhero::getFirstAppearance(){
  return first_appearance;
}

std::string Superhero::getYear(){
  return year;
}















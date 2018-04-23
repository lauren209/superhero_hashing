
#include "superhero.h"
#include <string>
#include <iostream>
#include <cstdlib>

Superhero::Superhero(){
}

void Superhero::setPageID(std::string p){
  page_id = p;
}

void Superhero::setName(std::string n){
  name = n;
}

void Superhero::setUrl(std::string url){
  urlslug = url;
}

void Superhero::setID(std::string i){
  id = i;
}

void Superhero::setAlignment(std::string al){
  alignment = al;
}

void Superhero::setEyeColor(std::string e){
  eye_color = e;
}

void Superhero::setHairColor(std::string h){
  hair_color = h;
}

void Superhero::setSex(std::string s){
  sex = s;
}

void Superhero::setGSM(std::string g){
  gsm = g;
}

void Superhero::setAlive(std::string a){
  alive = a;
}

void Superhero::setAppearances(std::string app){
  appearances = app;
}

void Superhero::setFirstAppearance(std::string f){
  first_appearance = f;
}

void Superhero::setYear(std::string y){
  year = y;
}



std::string Superhero::getPageID(){
  return page_id;
}

std::string Superhero::getName() const{
  return name;
}

std::string Superhero::getUrl(){
  return urlslug;
}

std::string Superhero::getID(){
  return id;
}

std::string Superhero::getAlignment(){
  return alignment;
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


























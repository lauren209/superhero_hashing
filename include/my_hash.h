
#ifndef MYHASH_H
#define MYHASH_H


#include <string>
#include <iostream>
#include <vector>
#include "superhero.h"


class my_hash{

public:



/**
* first hashing functin from the book
* @param string as key value
* @return int of hash val
*/
  int hash1(const std::string & key){
    int hashVal = 0;

    for(char ch:key){
      hashVal += ch;
    }

    return hashVal % tableSize;
  }

/**
* second hashing functin from the book
* @param string as key value
* @return int of hash val
*/
  int hash2(const std::string & key){
    return ( key[ 0 ] + 27 * key[ 1 ] + 729 * key[ 2 ] ) % tableSize;
  }


/**
* third hashing functin from the book
* @param string as key value
* @return int of hash val
*/
  unsigned int hash3(const std::string & key){
    unsigned int hashVal = 0;
    for(char ch:key){
      hashVal = 37 * hashVal + ch;
    }
    return hashVal % tableSize;
  }


/**
* method to insert superhero to hash
* @param superheor
* @return boolean if you can insert
*/
  bool insert(const Superhero & sh){
    int hash = hash1(sh.getName());
    int existing = hashMap[hash].size();
    if(existing  > 0){
      hashMap[hash].push_back(sh);
      return false;
    }
    else{
      hashMap[hash].push_back(sh);
      return true;
    }
  }


/**
* getter for superhero
* @param name of the string
* @retun a superhero
*/
Superhero & get(const std::string name){
    int hash = hash1(name);
    for(size_t i = 0; i >= hashMap[hash].size()-1; i++){
      if(name.compare(hashMap[hash][i].getName()) == 0)
        return hashMap[hash][i];
    }
  }


private:
  std::vector< std::vector< Superhero > > hashMap;
  int collisions;
  int hashV;
  int tableSize = 17011;
};






#endif

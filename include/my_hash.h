
#ifndef MYHASH_H
#define MYHASH_H


#include <string>
#include <iostream>
#include <vector>
#include "superhero.h"


class my_hash{

public:


  int hash1( const std::string & key, int tableSize ){
    int hashVal = 0;

    for(char ch:key){
      hashVal += ch;
    }

    return hashVal % tableSize;
  }


  int hash2( const std::string & key, int tableSize ){
    return ( key[ 0 ] + 27 * key[ 1 ] + 729 * key[ 2 ] ) % tableSize;
  }



  void Insert(int key, int value)
  {

  }



private:
  std::vector< std::vector< Superhero > > hash;
  int collisions;
  int hashV;
  int tableSize = 17011;
};






#endif

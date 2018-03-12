
#include <string>
#include <iostream>
#include <cstdlib>
#include "my_hash.h"

int main(int argc, char** argv){

	int index;
	my_hash hashObj;
	index = hashObj.Hash("testing");

	std::cout << "index = " << index << std::endl;
}

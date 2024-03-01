#include "Zombie.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


Zombie* newZombie( std::string name ) {

	Zombie *new_z = new Zombie();
	new_z->set_name(name);
	return new_z;
}
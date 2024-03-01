#include "Zombie.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void){

	Zombie z;
	Zombie *z_ptr;

	z.set_name("Monster");
	// z.announce();

	z_ptr = newZombie("Zomby");
	// z_ptr->announce();

	randomChump("Chumpy");

	delete z_ptr;
	return 0;
}
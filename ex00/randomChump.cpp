#include "Zombie.hpp"

void randomChump( std::string name ){

	Zombie chumpy;

	chumpy.set_name(name);
	chumpy.announce();
}
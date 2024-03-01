#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde( int N, std::string name ){

	if (N > 0)
	{
		Zombie *zombies = new Zombie[N];

		int i = 0;
		while (i < N)
		{
			zombies[i].set_name(name);
			i++;
		}
		return zombies;
	}
	std::cout << RED << "INVALID N : Must have positive value (N > 0)" << RESET << std::endl;
	return NULL;
}
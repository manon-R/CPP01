#include "Zombie.hpp"

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void){

	int	n = 10;
	int	valid_n = 4;
	int	invalid_n = 0;
	int	i = 0;

	Zombie *test1;
	Zombie *test2;
	Zombie *test3;


	cout << CYAN << "************* TEST 1 N = 10 *************" << RESET << endl;
	test1 = zombieHorde(n, "Zooooooombie");
	cout << endl;
	while (i < n)
	{
		test1[i].announce();
		i++;
	}
	cout << endl;
	delete [] test1;
	cout << endl;

	cout << CYAN << "************* TEST 2 N = 0 *************" << RESET << endl;
	test2 = zombieHorde(invalid_n, "Monster");
	cout << endl;

	i = 0;
	cout << CYAN << "************* TEST 3 N = 4 *************" << RESET << endl;
	test3 = zombieHorde(valid_n, "Chumpy");
	cout << endl;
	while (i < valid_n)
	{
		test3[i].announce();
		i++;
	}
	cout << endl;
	delete [] test3;
	cout << endl;

	return 0;
}
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(void)
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}
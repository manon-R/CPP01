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
	cout << CYAN << "********** SUBJECT's TESTS **********" << RESET << endl;
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	club.setType("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	cout << endl;

	cout << CYAN << "********** OTHER TESTS **********" << RESET << endl;
	Weapon gun = Weapon("Gun");
	HumanA lucky("Lucky", gun);
	lucky.attack();
	gun.setType("some other type of gun");
	lucky.attack();

	HumanB sam("Sam");
	sam.attack();
	sam.setWeapon(gun);
	sam.attack();
	gun.setType("Double gun");
	sam.attack();
	cout << endl;

	return 0;
}
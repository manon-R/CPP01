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
	Weapon weapon;

	weapon.set_type("gun");
	cout << "Weapon type is " << RED << weapon.get_type() << RESET << endl;
}
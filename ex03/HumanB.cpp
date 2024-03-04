#include "HumanB.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


HumanB::HumanB(string name) : name(name){
	weapon = NULL;
	cout <<  "Human B " << GREEN << get_name() << RESET << " Constructor called" << endl;
}

HumanB::~HumanB(void)
{
	cout << "HumanB " << RED << get_name() << RESET << " Destructor called" << RESET << endl;
}

string HumanB::get_name(void){
	return name;
}

void HumanB::setWeapon(Weapon &w){
	weapon = &w;
}

void HumanB::attack(void){

	if (!weapon)
		cout << get_name() << " has no weapon to attack... " << endl;
	else
		cout << get_name() << " attacks with their " << weapon->getType() << endl;
}

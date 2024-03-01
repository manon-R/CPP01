#include "HumanA.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

HumanA::HumanA(string name, Weapon &weapon) : name(name), weapon(weapon){

	cout <<  "Human A " << GREEN << get_name() << RESET << " Constructor called" << endl;
}

HumanA::~HumanA(void)
{
	cout << "HumanA " << RED << get_name() << RESET << " Destructor called" << RESET << endl;
}

string HumanA::get_name(void){
	return name;
}

void HumanA::attack(void){
	cout << get_name() << " attacks with their " << weapon.getType() << endl;
}

#include "Weapon.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

Weapon::Weapon(string t){

	setType(t);
	cout << GREEN <<"Weapon Constructor called" << RESET << endl;
}

Weapon::~Weapon(void){

	cout << RED <<"Weapon Destructor called" << RESET << endl;
}

string const &Weapon::getType(void)
{
	string &typeREF = type;
	return typeREF;
}

void Weapon::setType(string t)
{
	type = t;
}
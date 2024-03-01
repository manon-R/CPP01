#include "Weapon.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

Weapon::Weapon(void){

	cout << GREEN <<"Weapon Constructor called" << RESET << endl;
}

Weapon::~Weapon(void){

	cout << RED <<"Weapon Destructor called" << RESET << endl;
}

string const &Weapon::get_type(void)
{
	string &typeREF = type;
	return typeREF;
}

void Weapon::set_type(string t)
{
	type = t;
}
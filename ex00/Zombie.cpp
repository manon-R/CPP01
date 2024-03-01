#include "Zombie.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

Zombie::Zombie(){
	cout << GREEN <<"Zombie Constructor called" << RESET << endl;
}

Zombie::~Zombie(){
	cout << RED <<"Zombie " << get_name() << " Destructor called" << RESET << endl;
}

void Zombie::announce(){

	cout << get_name() << ": " << "BraiiiiiiinnnzzzZ..." << endl;
}

string Zombie::get_name() const{
	return name;
}

void Zombie::set_name(string n){
	this->name = n;
}
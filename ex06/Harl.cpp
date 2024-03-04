#include "Harl.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;


Harl::Harl(void)
{
	cout << GREEN <<  "Harl Constructor called" << RESET << endl;
}

Harl::~Harl(void)
{
	cout << RED <<  "Harl Destructor called" << RESET << endl;
}

void Harl::debug(void){
	cout << CYAN << "[ DEBUG ]" << RESET << endl;
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void Harl::info(void){
	cout << YELLOW << "[ INFO ]" << RESET << endl;
	cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << endl;
}

void Harl::warning(void){
	cout << MAGENTA << "[ WARNING ]" << RESET << endl;
	cout << "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << endl;
}

void Harl::error(void){
	cout << BLUE << "[ ERROR ]" << RESET << endl;
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(string level){
	int i = 0;
	string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*t[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	while (i < 4)
	{
		if (level == tab[i])
		{
			(this->*t[i])();
			cout << endl;
			return ;
		}
		i++;
	}
	cout << RED << "Level out of scope : Harl has no word..." << RESET << endl;
}
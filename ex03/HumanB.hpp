#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define CYAN    "\033[36m"

using std::string;

class HumanB {

public:

	HumanB(string name);
	~HumanB(void);

	string	get_name(void);

	void	set_name(string name);
	void	set_weapon(Weapon *weapon);
	void	attack();

private:

	string name;
	Weapon *weapon;
	
};


#endif
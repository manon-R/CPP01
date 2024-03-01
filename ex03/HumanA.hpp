#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define CYAN    "\033[36m"

using std::string;

class HumanA {

public:

	HumanA(string name, Weapon &weapon);
	~HumanA(void);

	string	get_name(void);

	void	attack(void);

private:

	const string name;
	Weapon &weapon;

};


#endif
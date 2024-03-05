#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define CYAN    "\033[36m"

using std::string;

class Weapon {

public:

	Weapon(string type);
	~Weapon(void);

	string const &getType(void);

	void setType(string t);

private:

	string type;
};


#endif
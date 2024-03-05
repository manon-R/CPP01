#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define CYAN    "\033[36m"

using std::string;

class Zombie {

public:

	Zombie(void);
	~Zombie(void);

	void	announce( void );
	void	set_name(string name);

	string	get_name(void) const;

private:

	string name;
};

void randomChump( string name );
Zombie* newZombie( string name );

#endif
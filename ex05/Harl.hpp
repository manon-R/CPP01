#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

using std::string;

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define CYAN    "\033[36m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"


class Harl {

public:

	Harl(void);
	~Harl(void);

	void complain(string level);

private:

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

};




#endif
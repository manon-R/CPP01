#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Macros pour les couleurs
# define RESET   "\033[0m"
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define CYAN    "\033[36m"


int main(void){

	string origin = "HI THIS IS BRAIN";
	string *stringPTR = &origin;
	string &stringREF = origin;

	cout << CYAN << "*************** ADDRESS ***************" << RESET << endl;
	cout << "The memory address of the string variable is => " << CYAN << &origin << RESET<< endl;
	cout << "The memory address held by stringPTR is      => " << CYAN << stringPTR << RESET << endl;
	cout << "The memory address held by stringREF is      => " << CYAN << &stringREF << RESET << endl;
	cout << endl;

	cout << GREEN << "**************** VALUE ****************" << RESET << endl;
	cout << "The value of the string variable is  => " << GREEN << origin << RESET<< endl;
	cout << "The value pointed to by stringPTR is => " << GREEN << *stringPTR << RESET << endl;
	cout << "The value pointed to by stringREF is => " << GREEN << stringREF << RESET << endl;
	cout << endl;

	return 0;
}
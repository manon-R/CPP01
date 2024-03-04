# include "Harl.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void)
{
	Harl harl = Harl();
	cout << endl;

	cout << CYAN << "********** INVALID LEVEL **********" << RESET <<  endl;
	harl.complain("test");
	cout << endl;

	cout << CYAN << "********** VALID TESTS (random order)**********" << RESET <<  endl;
	harl.complain("INFO");
	cout << endl;
	harl.complain("WARNING");
	cout << endl;
	harl.complain("ERROR");
	cout << endl;
	harl.complain("DEBUG");
	cout << endl;

	return 0;
}
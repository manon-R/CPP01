# include "Harl.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

#define CTRL_D	"FORCED EXIT"


int main(int argc, char **argv)
{

	if (argc != 2)
	{
		cout << RED << "Invalid parameter(s): Only level name required\n" << RESET;
		return 1;
	}
	string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	choice = 0;

	Harl harl = Harl();
	cout << endl;
	while (choice < 4)
	{
		if (tab[choice] == argv[1])
			break;
		choice++;
	}

	switch (choice) {
		case 0:
		{
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		}

		case 1:
		{
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		}
		case 2:
		{
			harl.complain("WARNING");
			harl.complain("ERROR");
			break;
		}
		case 3:
		{
			harl.complain("ERROR");
			break;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << endl;
			break;
	}
	return 0;
}
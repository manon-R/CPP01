#include <iostream>
#include <string>
#include <fstream>

using std::ifstream;
using std::ofstream;
using std::ostream;
using std::string;
using std::cerr;
using std::endl;

# define RED     "\033[31m"
# define RESET   "\033[0m"

bool check_argv(char **argv){
	return (argv[1][0] && argv[2][0] && argv[3][0]);
}

void find_and_replace(ostream &out, const string &origin, const string &s1, const string &s2)
{
	size_t pos = 0;
	size_t new_pos;
	while (pos < origin.length())
	{
		new_pos = origin.find(s1, pos);
		if (new_pos == string::npos)
		{
			out << origin.substr(pos);
			return ;
		}
		out << origin.substr(pos, (new_pos - pos));
		out << s2;
		pos = new_pos + s1.length(); // -1?
	}
}

int main(int argc, char **argv)
{
	if (argc != 4 || !check_argv(argv))
	{
		cerr << RED << "Error : Invalid parameters (file, s1 and s2 required)" << RESET << endl;
		return 1;
	}

	ifstream fichier(argv[1]);
	string line;

	if (!fichier) {
		cerr << RED << "Error : Impossible to open this file !" << RESET << endl;
		return 1;
	}

	ofstream outfile((string(argv[1]) + ".replace").c_str()); // operator + const char*
	if (!outfile){
		cerr << RED << "Error : Impossible to open this outfile !" << RESET << endl;
		return 1;
	}
	int i = 0;
	while (std::getline(fichier, line)) {
		find_and_replace(outfile, line, argv[2], argv[3]);
		i++;
	}
	fichier.close();
	outfile.close();
	if (i == 0)
		cerr << RED <<  "Error : Empty file" << RESET << endl;
	return 0;
}
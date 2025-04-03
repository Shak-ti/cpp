#include <iostream>
#include <fstream>

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Usage : ./sed filename toReplace replacement\n";
		return 1;
	}
	std::string		name = av[1];
	std::ifstream	filein(av[1], std::ifstream::in);
	if (!filein) {
		std::cout << "Can't open file " << name << std::endl;
		return 1;
	}

	std::string		copy;
	std::string		buf;
	std::string		toReplace = av[2];
	std::string		replacement = av[3];
//	std::size_t		location;
//	std::ofstream	fileout(replacementName, std::ifstream::in);
	while (!filein.eof()) {
		getline(filein, copy);
		copy += buf + "\n";
	}
	std::cout << copy;
	filein.close();
	return 0;
}

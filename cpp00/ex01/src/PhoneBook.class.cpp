#include "../inc/header.hpp"

// Un paramètre est passé de façon discrete : le pointeur sur l'instance courante (this)
//ex: this->contactList[0]
PhoneBook::PhoneBook( void ) {
	return ;
}

PhoneBook::~PhoneBook( void ) {
	return ;
}

void	PhoneBook::add( void ) {
	int	spot;

	std::string	infos[5];
	std::cout << "New contact creation...\n";
	spot = this->getSpot();
	if (spot == -1)
		return ;
	std::cout << "Registering contact n°" << spot << std::endl;
	if (PhoneBook::getInfos(infos))
		return ;
	this->contactList[spot].addInfos(infos);
	_lastEntry += 1;
	return ;
}

int	PhoneBook::getInfos( std::string *infos ) const {
	std::string	buf;
	std::cout << "Firstname : ";
	std::cin >> buf;
	if (buf.empty()) {
		std::cout << "No empty field authorized, please restart registration\n";
		return (1);
	}
	infos[0] = buf;
	std::cout << "Lastname : ";
	std::cin >> buf;
	if (buf.empty()) {
		std::cout << "No empty field authorized, please restart registration\n";
		return (1);
	}
	infos[1]= buf;
	std::cout << "Nickname : ";
	std::cin >> buf;
	if (buf.empty()) {
		std::cout << "No empty field authorized, please restart registration\n";
		return (1);
	}
	infos[2] = buf;
	std::cout << "Phone number : ";
	std::cin >> buf;
	if (buf.empty()) {
		std::cout << "No empty field authorized, please restart registration\n";
		return (1);
	}
	infos[3] = buf;
	std::cout << "Darkest secret : ";
	std::cin >> buf;
	if (buf.empty()) {
		std::cout << "No empty field authorized, please restart registration\n";
		return (1);
	}
	infos[4] = buf;
	return (0);
}

int		PhoneBook::getSpot( void ) {
	int			lastEntry;
	std::string	buf;

	lastEntry = this->getLastEntry();
	if (lastEntry < 8)
		return (lastEntry + 1);
	else {
		std::cout << "WARNING : PhoneBook full\n";
		std::cout << "Replacing contact n°" << lastEntry << ". Proceed ?(yes/no)\n";
		std::cin >> buf;
		if (buf.compare("yes"))	
			return (lastEntry);
		else if (buf.compare("no"))
			return (-1);
		else {
			std::cout << "Non conventional answer, restarting...\n";
			return (-1);
		}
	}
	return (0);
}

void	PhoneBook::search( void ) const {
	return ;
}

int		PhoneBook::getLastEntry( void ) {
	return PhoneBook::_lastEntry;
}

int		PhoneBook::_lastEntry = -1;

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
	_lastEntry += 1;
	spot = this->getSpot();
	if (spot == -1) {
		_lastEntry -= 1;
		return ;
	}
	std::cout << "Registering contact n°" << spot << std::endl;
	if (PhoneBook::getInfos(infos)) {
		_lastEntry -= 1;		
		return ;
	}
	this->contactList[spot].addInfos(infos);
	return ;
}

int	PhoneBook::getInfos( std::string *infos ) const {
	std::string	buf;
	try {
		std::cout << "Firstname : ";
		if (!std::getline(std::cin, buf) or buf.empty())
			throw std::logic_error("No empty field authorized, please restart registration\n");
		infos[0] = buf;
		std::cout << "Lastname : ";
		if (!std::getline(std::cin, buf) or buf.empty())
			throw std::logic_error("No empty field authorized, please restart registration\n");	
		infos[1]= buf;
		std::cout << "Nickname : ";
		if (!std::getline(std::cin, buf) or buf.empty())
			throw std::logic_error("No empty field authorized, please restart registration\n");
		infos[2] = buf;
		std::cout << "Phone number : ";
		if (!std::getline(std::cin, buf) or buf.empty())
			throw std::logic_error("No empty field authorized, please restart registration\n");
		infos[3] = buf;
		std::cout << "Darkest secret : ";
		if (!std::getline(std::cin, buf) or buf.empty())
			throw std::logic_error("No empty field authorized, please restart registration\n");
		infos[4] = buf;
	} catch (const std::exception &e) {
		std::cout << e.what();
		return (1);
	}
	return (0);
}

int		PhoneBook::getSpot( void ) {
	int			lastEntry;
	std::string	buf;

	lastEntry = this->getLastEntry();
	if (lastEntry < 1)
		return (lastEntry + 1);
	else {
		std::cout << "WARNING : PhoneBook full\n";
		std::cout << "Replacing contact n°" << lastEntry % 2 << ". Proceed ?(yes/no)\n";
		std::cin >> buf;
		if (!buf.compare("yes"))	{
			std::cout << "okkkkkkkkkk " << lastEntry % 2 << std::endl;
			return (lastEntry % 2);
		}
		else if (!buf.compare("no"))
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

int		PhoneBook::_lastEntry = -2;

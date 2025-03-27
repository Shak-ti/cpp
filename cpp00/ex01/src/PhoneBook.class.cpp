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

	try {
		std::cout << BLUE << "\nNew contact creation...\n" << RESET;
		_lastEntry += 1;
		spot = this->_getSpot();
		std::cout << BLUE << "Registering contact n°" << spot << ":\n\n" << RESET;
		PhoneBook::getInfos(infos);
		this->contactList[spot].addInfos(infos);
	} catch (const std::exception &e) {
		std::cout << RED << e.what() << RESET;
		_lastEntry -= 1;
		return ;
	}
}

void	PhoneBook::getInfos( std::string *infos ) const {
	std::string	buf;

	std::cout << "Firstname : ";
	std::getline(std::cin, buf);
	if (std::cin.eof() or buf.empty())
		throw std::logic_error("No empty field authorized, please restart registration\n");
	infos[0] = buf;
	std::cout << "Lastname : ";
	std::getline(std::cin, buf);
	if (std::cin.eof() or buf.empty())
		throw std::logic_error("No empty field authorized, please restart registration\n");
	infos[1]= buf;
	std::cout << "Nickname : ";
	std::getline(std::cin, buf);
	if (std::cin.eof() or buf.empty())
		throw std::logic_error("No empty field authorized, please restart registration\n");
	infos[2] = buf;
	std::cout << "Phone number : ";
	std::getline(std::cin, buf);
	if (std::cin.eof() or buf.empty())
		throw std::logic_error("No empty field authorized, please restart registration\n");
	infos[3] = buf;
	std::cout << "Darkest secret : ";
	std::getline(std::cin, buf);
	if (std::cin.eof() or buf.empty())
		throw std::logic_error("No empty field authorized, please restart registration\n");
	infos[4] = buf;
}

int		PhoneBook::_getSpot( void ) {
	int			lastEntry;
	std::string	buf;

	lastEntry = this->getLastEntry();
	if (lastEntry < 1)
		return (lastEntry + 1);
	else {
		std::cout << "WARNING : PhoneBook full\n";
		std::cout << "Replacing contact n°" << lastEntry % 2 - 1 << ". Proceed ?(yes/no)\n";
		std::getline(std::cin, buf);
		if (!buf.compare("yes"))
			return (lastEntry % 2);
		else if (!buf.compare("no"))
			throw std::logic_error("Canceling registration... \n");
		else
			throw std::logic_error("Non conventional answer, please try again...\n");
	}
	return (0);
}

void	PhoneBook::search( void ) const {
	std::string	buf;
	int			index;

	try {
		PhoneBook::printTab();
		std::cout << BLUE << "Enter index of choosen contact : " << RESET;
		std::getline(std::cin,buf);
		if (std::cin.eof())
			throw std::logic_error("Empty answer, please try again...\n");
		index = PhoneBook::getIndex(buf);
		this->contactList[index].print();
	} catch (const std::exception &e) {
		std::cout << RED << e.what() << RESET;
	}
}

void	PhoneBook::printTab( void ) const {
	int	i;

	i = 0;
	if (PhoneBook::contactList[0].firstName.empty())
		throw std::logic_error("No contact registered, why bother looking for emptyness...\n");
	std::cout << MAGENTA << "|" << "Firstname" << "|" << "Lastname" << "|" << "Nickname" << "|\n" << RESET;
	while (i < 8 && !PhoneBook::contactList[i].firstName.empty())
	{
		PhoneBook::contactList[i++].printSimple();
	}
}

int		PhoneBook::getIndex( std::string buf ) const {
	int	index;

	for (size_t i = 0; i < buf.size(); i++)
	{
		if (!std::isdigit(buf[i]))
			throw std::logic_error("Please enter a valid index next time...\n");
	}
	index = atoi(buf.c_str());
	if (index > 8 or index < 0)
		throw std::logic_error("Please enter a valid index next time...\n");
	return (index);
}

int		PhoneBook::getLastEntry( void ) {
	return PhoneBook::_lastEntry;
}

int		PhoneBook::_lastEntry = -2;

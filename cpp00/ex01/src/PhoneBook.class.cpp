#include "../inc/header.hpp"

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
		spot = this->_getSpot();
		std::cout << BLUE << "Registering contact n°" << spot << ":\n\n" << RESET;
		PhoneBook::_getInfos(infos);
		this->_contactList[spot].addInfos(infos);
		_nbContact += 1;
		std::cout << _nbContact << std::endl;
	} catch (const std::exception &e) {
		std::cout << RED << e.what() << RESET;
		return ;
	}
}

void	PhoneBook::_getInfos( std::string *infos ) const {
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

	lastEntry = this->_getLastEntry();
	if (lastEntry < 7)
		return (lastEntry + 1);
	else {
		std::cout << "WARNING : PhoneBook full\n";
		std::cout << "Replacing contact n°" << (lastEntry + 1) % 8 << ". Proceed ?(yes/no)\n";
		std::getline(std::cin, buf);
		if (!buf.compare("yes"))
			return ((lastEntry + 1) % 8);
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
		PhoneBook::_printTab();
		std::cout << BLUE << "\nEnter index of choosen contact : " << RESET;
		std::getline(std::cin,buf);
		std::cout << std::endl;
		if (std::cin.eof())
			throw std::logic_error("Empty answer, please try again...\n");
		index = PhoneBook::_getIndex(buf);
		this->_contactList[index].print();
	} catch (const std::exception &e) {
		std::cout << RED << e.what() << RESET;
	}
}

void	PhoneBook::_printTab( void ) const {
	int	i;

	i = 0;
	if (this->_contactList[0].firstName.empty())
		throw std::logic_error("No contact registered\n");
	std::cout << MAGENTA << std::setw(1) << "|" << std::setw(10) << "INDEX";
	std::cout << std::setw(1) << "|" << std::setw(10) << "FIRSTNAME";
	std::cout << std::setw(1) << "|" << std::setw(10) << "LASTNAME";
	std::cout << std::setw(1) << "|" << std::setw(10) << "NICKNAME";
	std::cout << std::setw(1) << "|\n" << RESET;
	while (i < 8 && !this->_contactList[i].firstName.empty())
	{
		this->_contactList[i].printSimple(i);
		i++;
	}
}

int		PhoneBook::_getIndex( std::string buf ) const {
	int	index;

	for (size_t i = 0; i < buf.size(); i++)
	{
		if (!std::isdigit(buf[i]))
			throw std::logic_error("Please enter a valid index next time...\n");
	}
	index = atoi(buf.c_str());
	if (index > 7 or index < 0)
		throw std::logic_error("Please enter a valid index next time...\n");
	return (index);
}

int		PhoneBook::_getLastEntry( void ) {
	return PhoneBook::_nbContact;
}

int		PhoneBook::_nbContact = -1;

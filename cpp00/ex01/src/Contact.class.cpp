#include "../inc/header.hpp"

// Liste d'initialisation (et pas d'attribution)
Contact::Contact( void ) : firstName( "" ), lastName(""), nickName(""), phoneNumber(""), darkestSecret("") {
	return ;
}

Contact::~Contact( void ) {
	return ;
}

void	Contact::addInfos( std::string *infos ) {
	this->firstName = infos[0];
	this->lastName = infos[1];
	this->nickName = infos[2];
	this->phoneNumber = infos[3];
	this->darkestSecret = infos[4];
}

void	Contact::print( void ) const {
	std::cout << MAGENTA << std::setw(20) << std::left << "Firstname : " << RESET;
	std::cout << this->firstName << std::endl;
	std::cout << MAGENTA << std::setw(20) << std::left << "Lastname : " << RESET;
	std::cout << this->lastName << std::endl;
	std::cout << MAGENTA << std::setw(20) << std::left << "Nickname : " << RESET;
	std::cout << this->nickName << std::endl;
	std::cout << MAGENTA << std::setw(20) << std::left << "Phone number : " << RESET;
	std::cout << this->phoneNumber << std::endl;
	std::cout << MAGENTA << std::setw(20) << std::left << "Darkest secret : " << RESET;
	std::cout << this->darkestSecret << std::endl;
}

void	Contact::printSimple( int index ) const {
	std::cout << MAGENTA ;
	std::cout << std::setw(1) << "|" << std::setw(10) << index;
	std::cout << std::setw(1) << "|" << std::setw(10) << this->firstName;
	std::cout << std::setw(1) << "|" << std::setw(10) << this->lastName;
	std::cout << std::setw(1) << "|" << std::setw(10) <<  this->nickName;
	std::cout << std::setw(1) << "|" << RESET;
}

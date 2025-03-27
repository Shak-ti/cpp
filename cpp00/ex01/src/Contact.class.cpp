#include "../inc/header.hpp"

// Liste d'initialisation (et pas d'attribution)
Contact::Contact( void ) : firstName( "" ), lastName(""), nickName(""), phoneNumber(""), darkestSecret("") {
	Contact::_nbInst += 1;
	return ;
}

Contact::~Contact( void ) {
	Contact::_nbInst -= 1;
	return ;
}

void	Contact::addInfos( std::string *infos ) {
	this->firstName = infos[0];
	this->lastName = infos[1];
	this->nickName = infos[2];
	this->phoneNumber = infos[3];
	this->darkestSecret = infos[4];
	return ;
}

void	Contact::print( void ) const {
	std::cout << MAGENTA << "Firstname : " << RESET << this->firstName << std::endl;
	std::cout << MAGENTA << "Lastname : " << RESET << this->lastName << std::endl;
	std::cout << MAGENTA << "Nickname : " << RESET << this->nickName << std::endl;
	std::cout << MAGENTA << "Phone number : " << RESET << this->phoneNumber << std::endl;
	std::cout << MAGENTA << "Darkest secret : " << RESET << this->darkestSecret << std::endl;
	return ;
}

void	Contact::printSimple( void ) const {
	std::cout << MAGENTA << "|" << this->firstName << "|" << this->lastName << "|" <<  this->nickName << "|" << RESET;
}

int		Contact::compareContact( Contact * to_compare ) const {
	if (to_compare->firstName.compare("test"))
		return (1);
	return (0);
}

int		Contact::getNbInst( void ) {
	return Contact::_nbInst;
}

//static donc ne dépend pas d'une instance en particulier
//cette ligne sert à l'initialiser
int		Contact::_nbInst = 0;

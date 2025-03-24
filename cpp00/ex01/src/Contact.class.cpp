#include "../inc/Contact.class.hpp"

// Liste d'initialisation (et pas d'attribution)
Contact::Contact( void ) : firstName( "" ), lastName(""), nickName(""), phoneNumber(""), darkestSecret("") {
	Contact::_nbInst += 1;
	return ;
}

Contact::~Contact( void ) {
	Contact::_nbInst -= 1;
	return ;
}

void	Contact::addInfos( void ) {
	std::string	buf;
	std::cout << "Firstname : ";
	std::cin >> buf;
	this->firstName = buf;
	std::cout << "Lastname : ";
	std::cin >> buf;
	this->lastName = buf;
	std::cout << "Nickname : ";
	std::cin >> buf;
	this->nickName = buf;
	std::cout << "Phone number : ";
	std::cin >> buf;
	this->phoneNumber = buf;
	std::cout << "Darkest secret : ";
	std::cin >> buf;
	this->darkestSecret = buf;
	_nbInitializedInst += 1;
	if (this->testEmpty())
		
	return ;
}

int		Contact::getContact( void ) const {
	return (0);
}

void	Contact::setContact( void ) {
	return ;
}

void	Contact::print( void ) const {
	std::cout << "Firstname 		: " << this->firstName << std::endl;
	std::cout << "Lastname 			: " << this->lastName << std::endl;
	std::cout << "Nickname 			: " << this->nickName << std::endl;
	std::cout << "Phone number		: " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret	: " << this->darkestSecret << std::endl;
	return ;
}

int		Contact::compareContact( Contact * to_compare ) const {
	if (to_compare->firstName.compare("test"))
		return (1);
	return (0);
}

bool	Contact::testEmpty( void ) const {
	if (this->firstName.empty())
	{
		std::cout << "FirstName can't be empty, please restart contact registration\n";
		return (true);
	}
	if (this->lastName.empty())
	{
		std::cout << "LastName can't be empty, please restart contact registration\n";
		return (true);
	}
	if (this->nickName.empty())
	{
		std::cout << "NickName can't be empty, please restart contact registration\n";
		return (true);
	}
	if (this->phoneNumber.empty())
	{
		std::cout << "PhoneNumber can't be empty, please restart contact registration\n";
		return (true);
	}
	if (this->darkestSecret.empty())
	{
		std::cout << "DarkestSecret can't be empty, please restart contact registration\n";
		return (true);
	}
	return (false);
}

int		Contact::getNbInst( void ) {
	return Contact::_nbInst;
}

int		Contact::getNbInitializedInst( void ) {
	return Contact::_nbInitializedInst;
}

//static donc ne dépend pas d'une instance en particulier
//cette ligne sert à l'initialiser
int		Contact::_nbInst = 0;
int		Contact::_nbInitializedInst = 0;

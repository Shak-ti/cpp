#include "Contact.class.hpp"

// Liste d'initialisation (et pas d'attribution)
Contact::Contact( void ) : firstName( "" ), lastName(""), nickName(""), phoneNumber(""), darkestSecret("") {
	Contact::_nbInst += 1;
	return ;
}

Contact::~Contact( void ) {
	Contact::_nbInst -= 1;
	return ;
}

void	Contact::addInfos( std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret ) {
	return ;
}

int		Contact::getContact( void ) const {
	return ;
}

void	Contact::setContact( void ) {
	return ;
}

int		Contact::compareContact( Contact * to_compare ) const {

}
int		Contact::getNbInst( void ) {
	return Contact::_nbInst;
}


//static donc ne dépend pas d'une instance en particulier
//cette ligne sert à l'initialiser
int		Contact::_nbInst = 0;

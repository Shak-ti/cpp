#include "../inc/PhoneBook.class.hpp"
#include "../inc/Contact.class.hpp"
#include <iostream>
#include <cstring>

//this : pointeur d'instance
//ex: this->Répertoire[0]
PhoneBook::PhoneBook( void ) {
	return ;
}

PhoneBook::~PhoneBook( void ) {
	return ;
}

// Un paramètre est passé de façon discrete : le pointeur sur l'instance courante (this)
void	PhoneBook::add( void ) {
	int	spot;
	std::cout << "New contact creation...\n";
	spot = this->testFull();
	this->contactList[spot].addInfos();
	return ;
}

bool	PhoneBook::testFull( void ) const {
	int	nbInst;

	nbInst = this->contactList->getNbInitializedInst();
	std::cout << nbInst << std::endl;
	if ( nbInst >= 8)
	{
		std::cout << "PhoneBook full, replacing last entry\n";
		return (nbInst % 8);
	}
	std::cout << "Contact n°" << nbInst << " created" << std::endl;
	return (nbInst);
}
void	PhoneBook::search( void ) const {
	return ;
}

void	PhoneBook::exit( void ) const {
	return ;
}

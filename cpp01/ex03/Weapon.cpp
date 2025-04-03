#include "Weapon.hpp"

Weapon::Weapon( std::string name ) : type(name) {

}

Weapon::~Weapon( void ) {

}

void	Weapon::setType( std::string name ) {
	type = name;
}

std::string const	&Weapon::getType( void ) {
	std::string& ref = type;
	return ref;
}

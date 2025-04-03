#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name), weapon(NULL) {
	return ;
}

HumanB::~HumanB( void ) {
	return ;
}

void	HumanB::attack( void ) {
	if (!weapon) {
		std::cout << name << " attacks with their fists\n";
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType();
	std::cout << std::endl;
}

void	HumanB::setWeapon( Weapon& newWeapon ) {
	weapon = &newWeapon;
}

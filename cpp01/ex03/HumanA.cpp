#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& Weapon ) : name(name), weapon(Weapon) {

}

HumanA::~HumanA( void ) {

}

void	HumanA::attack( void ) {
	std::cout << name << " attacks with their " << weapon.getType();
	std::cout << std::endl;
}

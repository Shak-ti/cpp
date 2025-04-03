# include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name) {
	return ;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie " << _name << " destroyed\n";
	return ;
}

void	Zombie::announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

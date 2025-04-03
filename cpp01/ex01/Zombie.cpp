# include "Zombie.hpp"

Zombie::Zombie( void ) {
	return ;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie " << _name << " destroyed\n";
	return ;
}

void	Zombie::announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::init_name( std::string name ) {
	_name = name;
}

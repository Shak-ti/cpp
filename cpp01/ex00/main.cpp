# include "Zombie.hpp"

int	main() {
	Zombie* test = newZombie("Ptr");

	std::cout << "Zombie en pointeur:\n\n";
	test->announce();
	delete test;
	std::cout << "\nZombie en référence:\n\n";
	randomChump("Ref");
	return (0);
}

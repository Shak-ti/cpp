# include "Zombie.hpp"

int	main() {
	int		N = 4;
	Zombie* test = zombieHorde(N, "Ptr");

	for (int i = 0; i < N; i++)
		test[i].announce();
	delete [] test;
	return (0);
}

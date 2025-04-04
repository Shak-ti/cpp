#include "Harl.hpp"

int	main() {
	Harl	test;

	test.complain("debug");
	std::cout << std::endl;
	test.complain("info");
	std::cout << std::endl;
	test.complain("warning");
	std::cout << std::endl;
	test.complain("error");
	std::cout << std::endl;
	test.complain("blabla");
	std::cout << std::endl;

	return 0;
}

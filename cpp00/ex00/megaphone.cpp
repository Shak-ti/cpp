#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	int	i;
	std::string to_print = "";

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[i])
	{
		for (size_t j = 0; j < std::strlen(argv[i]); j++)
			to_print.append(1, toupper(argv[i][j]));
		std::cout << to_print;
		to_print = "";
		i++;
	}
	std::cout << std::endl;
	return (0);
}

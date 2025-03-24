#include "../inc/header.hpp"

int	main()
{
	std::string	buf;
	PhoneBook	phoneBook;

	while (1)
	{
		std::cout << "[phonebookManager] $ ";
		std::cin >> buf;
		if (!(buf.compare("EXIT")))
			return (0);
		else if (!(buf.compare("ADD")))
			phoneBook.add();
		else if (!(buf.compare("SEARCH")))
			phoneBook.search();
		else
			std::cout << "Usage : 'ADD', 'SEARCH' or 'EXIT'\n";
	}
	return (0);
}

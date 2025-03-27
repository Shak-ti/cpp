#include "../inc/header.hpp"

int	main()
{
	std::string	buf;
	PhoneBook	phoneBook;

	std::cout << BLUE << "[phonebookManager] $ " << RESET;
	while (std::getline(std::cin, buf))
	{		
		if (!(buf.compare("EXIT")))
			return (0);
		else if (!(buf.compare("ADD")))
			phoneBook.add();
		else if (!(buf.compare("SEARCH")))
			phoneBook.search();
		else
			std::cout << RED << "Usage : 'ADD', 'SEARCH' or 'EXIT'\n" << RESET;
		std::cout << BLUE << "[phonebookManager] $ " << RESET;
	}
	std::cout << std::endl;
	return (0);
}

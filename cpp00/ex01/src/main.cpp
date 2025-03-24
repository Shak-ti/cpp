#include "../inc/Contact.class.hpp"
#include "../inc/PhoneBook.class.hpp"

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
		if (!(buf.compare("ADD")))
			phoneBook.add();
		if (!(buf.compare("SEARCH")))
			phoneBook.search();
	}
	return (0);
}

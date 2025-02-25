#include "common.hpp"
#include "PhoneBook.hpp"

void	welcome()
{
	std::cout << "Please enter one of the following commands :" << "\n";
	std::cout << "-> ADD\n" << "-> SEARCH\n" << "-> EXIT\n";
}

int	main()
{
	std::string	input;
	PhoneBook	pb;

	while (!std::cin.eof())
	{
		input.clear();
		welcome();
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (input.compare("ADD") == 0)
			pb.add();
		else if (input.compare("SEARCH") == 0)
		{
			pb.search();
			std::cin.ignore();
		}
		else if (input.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Error: invalid command!\n";
	}
	return (0);
}

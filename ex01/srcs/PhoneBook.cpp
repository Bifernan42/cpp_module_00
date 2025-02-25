#include "PhoneBook.hpp"
#include "common.hpp"

PhoneBook::PhoneBook()
{
	argc = 0;
	oldest = 0;
}

void	PhoneBook::add()
{
	int	index;
	std::stringstream	ss;
	std::string	str;
	Contact	new_contact;

	if (argc == 8)
	{
		if (oldest == 8)
			oldest = 0;
		index = oldest;
		oldest++;
	}
	else
		index = argc;
	ss << index;
	str = ss.str();
	new_contact.trunc_str(str, 0);
	str.clear();
	while (str.empty())
	{
		std::cout << "Please enter contact's first name\n";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return ;
	}
	new_contact.trunc_str(str, 1);
	new_contact.update_field(str, 1);
	str.clear();
	while (str.empty())
	{
		std::cout << "Please enter contact's last name\n";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return ;
	}
	new_contact.trunc_str(str, 2);
	new_contact.update_field(str, 2);
	str.clear();
	while (str.empty())
	{
		std::cout << "Please enter contact's nickname\n";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return ;
	}
	new_contact.trunc_str(str, 3);
	new_contact.update_field(str, 3);
	str.clear();
	while (str.empty())
	{
		std::cout << "Please enter contact's phone number\n";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return ;
	}
	new_contact.update_field(str, 4);
	str.clear();
	while (str.empty())
	{
		std::cout << "Please enter contact's darkest secret\n";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return ;
	}
	new_contact.update_field(str, 5);
	str.clear();
	contacts[index] = new_contact;
	if (argc < 8)
		argc++;
}

void	PhoneBook::search()
{
	if (argc == 0)
	{
		std::cout << "Error: No contacts registered\n";
		std::cout << "< press 'Enter' to continue >";
		return ;
	}
	int	i = 0;
	std::string input;
	int	index;
	while (i < argc)
	{
		contacts[i].display_contact();
		i++;
	}
	while (1)
	{
		input.clear();
		std::cout << "Please enter your contact's index\n";
		std::cin >> input;
		if (std::cin.eof())
			return ;
		if (is_digits(input) && is_in_range(input, argc))
			break ;
	}
	std::istringstream(input) >> index;
	contacts[index].show_contact();
}

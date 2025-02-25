#include "Contact.hpp"
#include "common.hpp"

void	Contact::display_contact()
{
	//std::cout << "|";
	std::cout << index;
	std::cout << "|";
	std::cout << trunc_first_name;
	std::cout << "|";
	std::cout << trunc_last_name;
	std::cout << "|";
	std::cout << trunc_nickname;
	std::cout << "\n";
}

void	Contact::update_field(std::string new_str, int i)
{
	if (new_str.empty())
		return ;
	if (i == 0)
		index = new_str;	
	if (i == 1)
		first_name = new_str;	
	if (i == 2)
		last_name = new_str;	
	if (i == 3)
		nickname = new_str;	
	if (i == 4)
		phone_number = new_str;	
	if (i == 5)
		darkest_secret = new_str;
}

void	Contact::trunc_str(std::string str, int i)
{
	std::string	dot = ".";
	if (str.empty())
		return ;
	if (str.size() == 10)
	{
		if (i == 1)
			trunc_first_name = str;	
		if (i == 2)
			trunc_last_name = str;	
		if (i == 3)
			trunc_nickname = str;	
	}
	else if (str.size() < 10)
	{
		while (str.size() < 10)
		{
			str += ' ';
		}
		if (i == 0)
			index = str;
		if (i == 1)
			trunc_first_name = str;	
		if (i == 2)
			trunc_last_name = str;	
		if (i == 3)
			trunc_nickname = str;	
	}
	else
	{
		str.resize(10);
		str.replace(9, 1, dot);
		if (i == 1)
			trunc_first_name = str;	
		if (i == 2)
			trunc_last_name = str;	
		if (i == 3)
			trunc_nickname = str;	
	}
}

void	Contact::show_contact()
{
	std::cout << "first name     : " << first_name << std::endl;	
	std::cout << "last name      : " << last_name << std::endl;	
	std::cout << "nickname       : " << nickname << std::endl;	
	std::cout << "phone number   : " << phone_number << std::endl;	
	std::cout << "darkest secret : " << darkest_secret << std::endl;
}

#include "common.hpp"

bool	is_digits(std::string & str)
{
	if (str.empty())
		return false;
	if (str.find_first_not_of("0123456789") == std::string::npos)
	{
		return true;
	}
	else
	{
		std::cout << "Error: bad input !" << std::endl;
		return false;
	}
}

bool	is_in_range(std::string & str, int max)
{
	int	index;
	if (str.empty())
		return false;
	std::istringstream(str) >> index;
	if (index >= max || index < 0)
	{
		std::cout << "Error: index out of range !\n";
		return false;
	}
	return true;
}

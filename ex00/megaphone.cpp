#include <iostream>
#include <string>

void	display_char(char c)
{
	if (std::isalpha(c) && c >= 'a' && c <= 'z')
	{
		c -= 32;
		std::cout << c;
	}
	else
		std::cout << c;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	int	i = 1;
	int	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
			display_char(argv[i][j++]);
		j = 0;
		i++;
	}
	std::cout << std::endl;
	return (0);
}

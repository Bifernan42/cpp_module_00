#include <cstdio>

void	print_one_element(int & a)
{
	std::printf("%d\n", a);
}

int	main()
{
	int	tab[3] = {0, 1, 2};

	print_one_element(tab[1]);
	return (0);
}

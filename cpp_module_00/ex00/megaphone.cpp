#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (++i < argc)
		{
			j = 0;
			while (argv[i][j])
				std::cout << (char)toupper(argv[i][j++]);
		}
	return (0);
}
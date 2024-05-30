#include <iostream>

int	is_lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

void	print_upper(std::string str)
{
	int	i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (is_lowercase(str[i]) == 1)
			c -= 32;
		std::cout << c;
		i++;
	}
}

int	main(int ac, char *av[])
{
	int	i;
	std::string	str;

	i = 1;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[i] != NULL)
	{
		str = av[i];
		print_upper(str);
		i++;
	}
	std::cout << std::endl;
	return (0);
}

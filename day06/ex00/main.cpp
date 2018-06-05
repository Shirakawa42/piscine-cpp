#include "Convert.hpp"

int		main(int ac, char **av)
{
	if (ac != 2)
		return 0;
	Convert		convert((std::string(av[1])));
	try
	{
		std::cout << "char: ";
		char c = static_cast<char>(convert);
		if (isprint(c))
			std::cout << "'" << c << "'";
		else
			std::cout << "Non displayable";
	}
	catch (std::exception e)
	{
		std::cout << "impossible";
	}
	std::cout << std::endl << "int: ";
	try
	{
		std::cout << static_cast<int>(convert);
	}
	catch (std::exception e)
	{
		std::cout << "impossible";
	}

	std::cout << std::fixed;
	std::cout.precision(1);

	std::cout << std::endl << "float: ";
	try
	{
		std::cout << static_cast<float>(convert) << "f";
	}
	catch (std::exception e)
	{
		std::cout << "impossible";
	}
	std::cout << std::endl << "double: ";
	try
	{
		std::cout << static_cast<double>(convert);
	}
	catch (std::exception e)
	{
		std::cout << "impossible";
	}
	std::cout << std::endl;
}

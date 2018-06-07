#include "easyfind.hpp"
#include <list>

int		main(void)
{
	std::list<int> list;

	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);

	try
	{
		std::cout << easyfind(list, 4) << std::endl;
	}
	catch (std::logic_error e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << easyfind(list, 2) << std::endl;
	}
	catch (std::logic_error e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << easyfind(list, 8) << std::endl;
	}
	catch (std::logic_error e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}

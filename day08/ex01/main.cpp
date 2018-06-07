#include "span.hpp"
#include <cstdlib>

int		main()
{
	Span	sp = Span(20000);

	srand(time(NULL));
	for (int i = 0 ; i < 20000 ; i++)
		sp.addNumber(rand() % 500000);
	try
	{
		sp.addNumber(rand() % 500000);
	}
	catch (std::overflow_error e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl << std::endl;

	Span	sp2 = Span(5);

	sp2.addNumber(5);
	sp2.addNumber(3);
	sp2.addNumber(17);
	sp2.addNumber(9);
	sp2.addNumber(11);

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl << std::endl;

	Span	sp3 = Span(1);

	sp3.addNumber(3);

	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl << std::endl;

	Span	sp4 = Span();

	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
}

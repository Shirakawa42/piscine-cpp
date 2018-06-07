#ifndef SPAN_HPP

# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class	span
{
	public:
		span();
		span(unsigned int n);
		~span();
		span( const span & );
		span &	operator = ( const span & );
		void	addNumber(int);
		int		shortestSpan();
		int		longestSpan();
	private:
		std::vector<int>	_tab;
};

#endif

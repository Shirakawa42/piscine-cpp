#ifndef SPAN_HPP

# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class	Span
{
	public:
		Span();
		Span(unsigned int n);
		~Span();
		Span( const Span & );
		Span &	operator = ( const Span & );
		void	addNumber(int);
		int		shortestSpan();
		int		longestSpan();
	private:
		std::vector<int>	_tab;
};

#endif

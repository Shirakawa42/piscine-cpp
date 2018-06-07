#include "span.hpp"

Span::Span()
{
	_tab.reserve(0);
}

Span::Span(unsigned int n)
{
	_tab.reserve(n);
}

Span::~Span()
{
}

Span::Span( const Span & cpy )
{
	*this = cpy;
}

Span &	Span::operator = ( const Span & cpy )
{
	_tab = cpy._tab;
	return *this;
}

void	Span::addNumber(int i)
{
	if (_tab.size() < _tab.capacity())
		_tab.push_back(i);
	else
		throw std::overflow_error("Can't store more");
}

int		Span::shortestSpan()
{
	std::vector<int>	tmp = _tab;

	std::sort(tmp.begin(), tmp.end());
	if (_tab.size() > 1)
		return	*std::min_element(tmp.begin() + 1, tmp.end()) -
				*std::min_element(tmp.begin(), tmp.end());
	return	0;
}

int		Span::longestSpan()
{
	return	*std::max_element(_tab.begin(), _tab.end()) -
			*std::min_element(_tab.begin(), _tab.end());
}

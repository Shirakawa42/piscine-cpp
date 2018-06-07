#include "span.hpp"

span::span()
{
	_tab.reserve(0);
}

span::span(unsigned int n)
{
	_tab.reserve(n);
}

span::~span()
{
}

span::span( const span & cpy )
{
	*this = cpy;
}

span &	span::operator = ( const span & cpy )
{
	_tab = cpy._tab;
	return *this;
}

void	span::addNumber(int i)
{
	if (_tab.size() < _tab.capacity())
		_tab.push_back(i);
	else
		throw std::overflow_error("Can't store more");
}

int		span::shortestSpan()
{
	std::vector<int>	tmp = _tab;

	std::sort(tmp.begin(), tmp.end());
	if (_tab.size() > 1)
		return	*std::min_element(tmp.begin() + 1, tmp.end()) -
				*std::min_element(tmp.begin(), tmp.end());
	return	0;
}

int		span::longestSpan()
{
	return	*std::max_element(_tab.begin(), _tab.end()) -
			*std::min_element(_tab.begin(), _tab.end());
}

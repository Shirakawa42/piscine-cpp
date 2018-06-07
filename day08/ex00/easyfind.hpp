#pragma once

#include <exception>
#include <iostream>
#include <algorithm>

template<typename T>
int &	easyfind(T & t, int i)
{
	typename T::iterator	it = std::find(t.begin(), t.end(), i);
	if (it != t.end())
		return *it;
	throw std::logic_error("Not found");
}

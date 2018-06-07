#ifndef MUTANTSTACK_HPP

# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>

class	mutantstack
{
	public:
		mutantstack();
		~mutantstack();
		mutantstack( const mutantstack & );
		mutantstack &	operator = ( const mutantstack & );
};

#endif

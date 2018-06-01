#ifndef SORCERER_HPP

# define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class	Sorcerer
{
	public:
		Sorcerer();
		~Sorcerer();
		Sorcerer( std::string n, std::string t);
		Sorcerer( const Sorcerer & cpy );
		Sorcerer &	operator = ( const Sorcerer & other );

		void	polymorph(Victim const & victim) const;

		std::string	name;
		std::string	title;
};

std::ostream &	operator << (std::ostream & o, const Sorcerer & other);

#endif

#ifndef PEON_HPP

# define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class	Peon : public Victim
{
	public:
		Peon();
		Peon( std::string n );
		~Peon();
		Peon( const Peon & cpy );
		Peon &	operator = ( const Peon & other );

		void	getPolymorphed() const;
};

#endif

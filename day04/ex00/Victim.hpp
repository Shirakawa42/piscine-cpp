#ifndef VICTIM_HPP

# define VICTIM_HPP

#include <string>
#include <ostream>

class	Victim
{
	public:
		Victim();
		Victim( std::string n );
		~Victim();
		Victim( const Victim & cpy );
		Victim &	operator = ( const Victim & other );

		virtual void	getPolymorphed() const;

		std::string	name;
};

std::ostream &	operator << (std::ostream & o, const Victim & other);

#endif

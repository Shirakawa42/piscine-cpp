#include "Peon.hpp"

Peon::Peon( std::string n ) : Victim(n)
{
	name = n;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon( const Peon & cpy ) : Victim(cpy)
{
	*this = cpy;
	std::cout << "Some random Peon called " << name << " just popped !" << std::endl;
}

Peon &	Peon::operator = ( const Peon & other )
{
	name = other.name;
	return *this;
}

std::ostream &	operator << (std::ostream & o, const Peon & other)
{
	o << "I'm " << other.name << " and I like otters !" << std::endl;
	return o;
}

void	Peon::getPolymorphed() const
{
	std::cout << name << " has been turned into a pink pony !" << std::endl;
}

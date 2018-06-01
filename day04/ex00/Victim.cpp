#include "Victim.hpp"
#include <iostream>

Victim::Victim( std::string n )
{
	name = n;
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason !" << std::endl;
}

Victim::Victim( const Victim & cpy )
{
	*this = cpy;
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim &	Victim::operator = ( const Victim & other )
{
	name = other.name;
	return *this;
}

std::ostream &	operator << (std::ostream & o, const Victim & other)
{
	o << "I'm " << other.name << " and I like otters !" << std::endl;
	return o;
}

void	Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep !" << std::endl;
}

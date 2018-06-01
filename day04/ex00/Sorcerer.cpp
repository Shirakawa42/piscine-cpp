#include "Sorcerer.hpp"

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer( std::string n, std::string t)
{
	name = n;
	title = t;
	std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer( const Sorcerer & cpy )
{
	*this = cpy;
	std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer &	Sorcerer::operator = ( const Sorcerer & other )
{
	name = other.name;
	title = other.title;
	return *this;
}

std::ostream &	operator << (std::ostream & o, const Sorcerer & other)
{
	o << "I am " << other.name << ", " << other.title << ", and i like ponies !" << std::endl;
	return o;
}

void	Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

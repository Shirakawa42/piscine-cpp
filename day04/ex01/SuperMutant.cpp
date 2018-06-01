#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy("Super Mutant", 170)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & cpy)
{
	*this = cpy;
}

void		SuperMutant::takeDamage(int d)
{
	Enemy::takeDamage(d - 3);
}

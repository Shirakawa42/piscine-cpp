#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy("RadScorpion", 80)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & cpy)
{
	*this = cpy;
}

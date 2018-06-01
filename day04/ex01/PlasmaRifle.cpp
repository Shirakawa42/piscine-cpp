#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle( const PlasmaRifle & cpy )
{
	*this = cpy;
}

PlasmaRifle::~PlasmaRifle()
{
}

void			PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

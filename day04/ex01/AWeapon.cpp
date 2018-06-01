#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	name = "default";
	ap_cost = 0;
	damage = 0;
}

AWeapon::AWeapon(std::string const & n, int apc, int d)
{
	name = n;
	ap_cost = apc;
	damage = d;
}

AWeapon::AWeapon( const AWeapon & cpy )
{
	*this = cpy;
}

AWeapon &	AWeapon::operator = ( const AWeapon & other )
{
	name = other.getName();
	ap_cost = other.getAPCost();
	damage = other.getDamage();
	return *this;
}

AWeapon::~AWeapon()
{
	
}

std::string		AWeapon::getName() const
{
	return name;
}

int				AWeapon::getAPCost() const
{
	return ap_cost;
}

int				AWeapon::getDamage() const
{
	return damage;
}

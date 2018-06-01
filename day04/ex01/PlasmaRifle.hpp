#ifndef PLASMARIFLE_HPP

# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		~PlasmaRifle();
		PlasmaRifle(PlasmaRifle const & other);
		using AWeapon::operator = ;

		void	attack() const;
};

#endif

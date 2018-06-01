#ifndef AWEAPON_HPP

# define AWEAPON_HPP

#include <string>
#include <iostream>

class	AWeapon
{
	private:
		std::string		name;
		int				ap_cost;
		int				damage;
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon();
		AWeapon( const AWeapon & cpy );
		AWeapon &	operator = ( const AWeapon & other );
		virtual ~AWeapon();
		std::string		getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;
};

#endif

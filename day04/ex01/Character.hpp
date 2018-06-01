#ifndef CHARACTER_HPP

# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class	Character
{
	private:
		int			ap;
		AWeapon		*weapon;
		const std::string	name;
	public:
		Character();
		 ~Character();
		 Character(const Character &);
		 Character &	operator = (const Character &);
		 Character(std::string const & name);
		 void			recoverAP();
		 void			equip(AWeapon*);
		 void			attack(Enemy*);
		 std::string const &	getName() const;
		 int			getAP() const;
		 AWeapon		*getWeapon() const;
};

std::ostream	&	operator << (std::ostream &, Character const &);

#endif

#ifndef SUPERMUTANT_HPP

# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	public:
		SuperMutant();
		~SuperMutant();
		SuperMutant(SuperMutant const &);
		using Enemy::operator = ;

		void		takeDamage(int d);
};

#endif

#ifndef RADSCORPION_HPP

# define RADSCORPION_HPP

#include "Enemy.hpp"

class	RadScorpion : public Enemy
{
	public:
		RadScorpion();
		~RadScorpion();
		RadScorpion(RadScorpion const &);
		using Enemy::operator = ;
};

#endif

#include "Enemy.hpp"

Enemy::Enemy()
{
	hit_points = 1;
	type = "Default";
}

Enemy::Enemy(std::string t, int hp)
{
	hit_points = hp;
	type = t;
}

Enemy::~Enemy()
{
	
}

Enemy::Enemy(Enemy const & cpy)
{
	*this = cpy;
}

Enemy &	Enemy::operator = (Enemy const & other)
{
	type = other.getType();
	hit_points = other.getHP();

	return *this;
}

std::string		Enemy::getType() const
{
	return type;
}

int				Enemy::getHP() const
{
	return hit_points;
}

void		Enemy::takeDamage(int d)
{
	if (d < 0)
		return ;
	if (d > hit_points)
		hit_points = 0;
	else
		hit_points -= d;
}

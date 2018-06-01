#ifndef ENEMY_HPP

# define ENEMY_HPP

#include <iostream>
#include <string>

class	Enemy
{
	private:
		int			hit_points;
		std::string	type;
	public:
		Enemy();
		virtual ~Enemy();
		Enemy(Enemy const & cpy);
		Enemy &	operator = (Enemy const & other);
		Enemy(std::string, int);
		std::string		getType() const;
		int				getHP() const;

		virtual void	takeDamage(int d);
};

#endif

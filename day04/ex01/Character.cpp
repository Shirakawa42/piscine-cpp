#include "Character.hpp"

Character::Character() : name("default")
{
	ap = 40;
	weapon = NULL;
}

Character::~Character()
{
	
}

Character::Character(const Character & character)
{
	*this = character;
}

Character &	Character::operator = (const Character & character)
{
	ap = character.getAP();
	weapon = character.getWeapon();

	return *this;
}

Character::Character(std::string const & n) : name(n)
{
	ap = 40;
	weapon = NULL;
}

void			Character::recoverAP()
{
	ap += 10;
	if (ap > 40)
		ap = 40;
}

void			Character::equip(AWeapon* w)
{
	weapon = w;
}

void			Character::attack(Enemy* enemy)
{
	if (weapon != NULL && ap >= weapon->getAPCost())
	{
		std::cout << name << " attacks " << enemy->getType() << " with a " << weapon->getName() << std::endl;
		ap -= weapon->getAPCost();
		weapon->attack();
		enemy->takeDamage(weapon->getDamage());
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}

std::string const &	Character::getName() const
{
	return name;
}

int			Character::getAP() const
{
	return ap;
}

AWeapon		*Character::getWeapon() const
{
	return weapon;
}

std::ostream	&	operator << (std::ostream & o, Character const & character)
{
	if (character.getWeapon() == NULL)
		o << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	else
		o << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeapon()->getName() << std::endl;

	return o;
}

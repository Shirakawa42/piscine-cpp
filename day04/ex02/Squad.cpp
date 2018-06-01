#include "Squad.hpp"

Squad::Squad()
{
	squad = NULL;
	n = 0;
}

Squad::Squad( const Squad & cpy )
{
	t_squad	*tmp;
	t_squad	*ctmp;

	tmp = squad;
	ctmp = cpy.squad;
	squad = NULL;
	while (ctmp)
	{
		if (squad == NULL)
		{
			squad = new(t_squad);
			squad->marine = ctmp->marine;
			squad->next = NULL;
		}
		else
		{
			tmp = squad;
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new(t_squad);
			tmp->next->marine = ctmp->marine;
			tmp->next->next = NULL;
		}
		ctmp = ctmp->next;
	}
	n = cpy.n;
}

Squad &		Squad::operator = ( const Squad & cpy )
{
	t_squad	*tmp;
	t_squad	*ctmp;

	if (this != &cpy)
	{
		tmp = squad;
		while (tmp)
		{
			delete tmp->marine;
			tmp = tmp->next;
		}
		tmp = squad;
		ctmp = cpy.squad;
		squad = NULL;
		while (ctmp)
		{
			if (squad == NULL)
			{
				squad = new(t_squad);
				squad->marine = ctmp->marine;
				squad->next = NULL;
			}
			else
			{
				tmp = squad;
				while (tmp->next)
					tmp = tmp->next;
				tmp->next = new(t_squad);
				tmp->next->marine = ctmp->marine;
				tmp->next->next = NULL;
			}
			ctmp = ctmp->next;
		}
		n = cpy.n;
	}
	return *this;
}

Squad::~Squad()
{
	t_squad	*tmp;

	while (squad)
	{
		tmp = squad;
		delete squad->marine;
		squad = squad->next;
		delete tmp;
	}
}

int		Squad::getCount() const
{
	return n;
}

int		Squad::push( ISpaceMarine* marine )
{
	t_squad	*tmp;

	if (marine == NULL)
		return (n);
	if (squad == NULL)
	{
		squad = new(t_squad);
		squad->marine = marine;
		squad->next = NULL;
	}
	else
	{
		tmp = squad;
		while (tmp->next)
		{
			if (tmp->marine == marine)
				return (n);
			tmp = tmp->next;
		}
		tmp->next = new(t_squad);
		tmp->next->marine = marine;
		tmp->next->next = NULL;
	}
	n++;
	return (n);
}

ISpaceMarine*	Squad::getUnit( int i ) const
{
	t_squad *tmp;

	tmp = squad;
	while (i > 0 && tmp != NULL)
	{
		tmp = tmp->next;
		i--;
	}
	return tmp->marine;
}

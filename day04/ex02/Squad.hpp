#ifndef SQUAD_HPP

# define SQUAD_HPP

#include <iostream>
#include <string>
#include "ISquad.hpp"

class	Squad : public ISquad
{
	typedef struct	s_squad
	{
		ISpaceMarine	*marine;
		s_squad			*next;
	}				t_squad;

	private:
		int		n;
		t_squad	*squad;
	public:
		Squad();
		~Squad();
		Squad( const Squad & );
		Squad &	operator = ( const Squad & );

		int				getCount() const;
		ISpaceMarine	*getUnit( int ) const;
		int				push( ISpaceMarine *sm );
};

#endif

#ifndef TACTICALMARINE_HPP

# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		~TacticalMarine();
		TacticalMarine( const TacticalMarine & );
		TacticalMarine &	operator = ( const TacticalMarine & );

		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
		ISpaceMarine	*clone() const;
};

#endif

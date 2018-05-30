#ifndef FIXED_CLASS_HPP

# define FIXED_CLASS_HPP

#include <iostream>
#include <string>
#include <cmath>

class	Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed( const Fixed & fixed );
		Fixed( int const i );
		Fixed( float const f );
		Fixed & operator = (const Fixed & other);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		int					fixed_point_value;
		static const int	n_frac_bits = 8;
};

std::ostream & operator << (std::ostream & o, const Fixed & other);

#endif

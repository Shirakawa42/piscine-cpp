#ifndef FIXED_CLASS_HPP

# define FIXED_CLASS_HPP

#include <iostream>
#include <string>

class	Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed( const Fixed & fixed );
		Fixed & operator = (const Fixed & other);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
	private:
		int					fixed_point_value;
		static const int	n_frac_bits = 8;
};

#endif

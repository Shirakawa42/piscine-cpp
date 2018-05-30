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
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		Fixed & operator = (const Fixed & other);
		bool	operator > (const Fixed & other);
		bool	operator < (const Fixed & other);
		bool	operator >= (const Fixed & other);
		bool	operator <= (const Fixed & other);
		bool	operator == (const Fixed & other);
		bool	operator != (const Fixed & other);
		Fixed	operator + (const Fixed & other);
		Fixed	operator - (const Fixed & other);
		Fixed	operator * (const Fixed & other);
		Fixed	operator / (const Fixed & other);
		Fixed &	operator ++ ( void );
		Fixed	operator ++ ( int );
		Fixed &	operator -- ( void );
		Fixed	operator -- ( int );

		static Fixed &			min( Fixed & a, Fixed & b );
		static Fixed &			max( Fixed & a, Fixed & b );
		static const Fixed &	min(Fixed const & a, Fixed const & b);
		static const Fixed &	max(Fixed const & a, Fixed const & b);

	private:
		int					fixed_point_value;
		static const int	n_frac_bits = 8;
};

std::ostream &	operator << (std::ostream & o, const Fixed & other);


#endif

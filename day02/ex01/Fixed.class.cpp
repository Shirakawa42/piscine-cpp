#include "Fixed.class.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed & fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed( int const i )
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(i << n_frac_bits);
}

Fixed::Fixed( float const f )
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(f * (1 << n_frac_bits)));
}

float	Fixed::toFloat( void ) const
{
	return (float)getRawBits() / (1 << n_frac_bits);
}

int		Fixed::toInt( void ) const
{
	return getRawBits() >> n_frac_bits;
}

std::ostream & operator << (std::ostream & o, const Fixed & other)
{
	return o << other.toFloat();
}

int		Fixed::getRawBits() const
{
	return fixed_point_value;
}

void	Fixed::setRawBits( int const raw )
{
	fixed_point_value = raw;
}

Fixed & Fixed::operator = (const Fixed & other)
{
	std::cout << "Assignation operator called" << std::endl;
	fixed_point_value = other.getRawBits();
	return *this;
}

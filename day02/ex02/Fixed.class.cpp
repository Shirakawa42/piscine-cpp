#include "Fixed.class.hpp"

Fixed::Fixed()
{
	fixed_point_value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed( const Fixed & fixed)
{
	*this = fixed;
}

Fixed::Fixed( int const i )
{
	setRawBits(i << n_frac_bits);
}

Fixed::Fixed( float const f )
{
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
	fixed_point_value = other.getRawBits();
	return *this;
}

bool	Fixed::operator > (const Fixed & other)
{
	if (other.getRawBits() > getRawBits())
		return false;
	return true;
}

bool	Fixed::operator < (const Fixed & other)
{
	if (other.getRawBits() < getRawBits())
		return false;
	return true;
}

bool	Fixed::operator >= (const Fixed & other)
{
	if (other.getRawBits() >= getRawBits())
		return false;
	return true;
}

bool	Fixed::operator <= (const Fixed & other)
{
	if (other.getRawBits() <= getRawBits())
		return false;
	return true;
}

bool	Fixed::operator == (const Fixed & other)
{
	if (other.getRawBits() == getRawBits())
		return true;
	return false;
}

bool	Fixed::operator != (const Fixed & other)
{
	if (other.getRawBits() != getRawBits())
		return true;
	return false;
}

Fixed	Fixed::operator + (const Fixed & other)
{
	Fixed	ret;

	ret.setRawBits(getRawBits() + other.getRawBits());
	return ret;
}

Fixed	Fixed::operator - (const Fixed & other)
{
	Fixed	ret;

	ret.setRawBits(getRawBits() - other.getRawBits());
	return ret;
}

Fixed	Fixed::operator * (const Fixed & other)
{
	Fixed	ret;

	ret.setRawBits((getRawBits() * other.getRawBits()) >> n_frac_bits);
	return ret;
}

Fixed	Fixed::operator / (const Fixed & other)
{
	Fixed	ret;

	ret.setRawBits((getRawBits() << n_frac_bits) / other.getRawBits());
	return ret;
}

Fixed &	Fixed::operator ++ ( void )
{
	this->fixed_point_value++;
	return *this;
}

Fixed	Fixed::operator ++ ( int )
{
	Fixed	ret;

	ret = *this;
	this->fixed_point_value++;
	return ret;
}

Fixed &	Fixed::operator -- ( void )
{
	this->fixed_point_value--;
	return *this;
}

Fixed	Fixed::operator -- ( int )
{
	Fixed	ret;

	ret = *this;
	this->fixed_point_value--;
	return ret;
}

Fixed &			Fixed::min( Fixed & a, Fixed & b )
{
	if (a.getRawBits() > b.getRawBits())
		return	b;
	return	a;
}

Fixed &			Fixed::max( Fixed & a, Fixed & b )
{
	if (a.getRawBits() > b.getRawBits())
		return	a;
	return	b;
}

const Fixed &	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a.getRawBits() > b.getRawBits())
		return	b;
	return	a;
}

const Fixed &	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a.getRawBits() > b.getRawBits())
		return	a;
	return	b;
}

#include "Convert.hpp"

Convert::Convert( const std::string & str ) : _str(str)
{
	
}

Convert::~Convert()
{
	
}

Convert::operator const std::string & () const
{
	return _str;
}

Convert::operator char() const
{
	char c = static_cast<char>(std::atoi(_str.c_str()));
	if (errno)
		throw (NoConvertException());
	return c;
}

Convert::operator int() const
{
	int i = static_cast<int>(std::atoi(_str.c_str()));
	if (errno)
		throw (NoConvertException());
	return i;
}

Convert::operator float() const
{
	float f = static_cast<float>(std::atof(_str.c_str()));
	if (errno)
		throw (NoConvertException());
	return f;
}

Convert::operator double() const
{
	double d = static_cast<double>(std::strtod(_str.c_str(), NULL));
	if (errno)
		throw (NoConvertException());
	return d;
}

Convert::NoConvertException::NoConvertException()
{
	
}

Convert::NoConvertException::~NoConvertException() throw()
{
	
}

const char	*Convert::NoConvertException::what() const throw()
{
	return "No Conversion";
}

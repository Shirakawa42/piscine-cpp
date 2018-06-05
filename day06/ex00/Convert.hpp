#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <exception>
#include <cerrno>

class	Convert
{
	public:
		Convert( const std::string & );
		~Convert();
		operator const std::string & (void) const;
		operator char(void) const;
		operator int(void) const;
		operator float(void) const;
		operator double(void) const;
		class	NoConvertException : public std::exception
		{
			public:
				NoConvertException();
				~NoConvertException() throw();
				const char	*what() const throw();
		};
	private:
		const std::string	_str;
};

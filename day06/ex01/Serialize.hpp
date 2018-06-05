#pragma once

#include <string>
#include <iostream>
#include <cstdlib>

struct	Serialize
{
	char		tab1[9];
	int			i;
	char		tab2[9];
};

struct	Data
{
	std::string	tab1;
	int			i;
	std::string	tab2;
};

void		*serialize();
Data		*deserialize(void *);

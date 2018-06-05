#include "Serialize.hpp"

void	random_str(char *s)
{
	static const char	alphanum[] =
		"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 8; i++) {
		s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
	}
	s[8] = 0;
}

void		*serialize()
{
	Serialize	*s = new Serialize;

	random_str(s->tab1);
	s->i = rand() % 2000000;
	random_str(s->tab2);
	return reinterpret_cast<void*>(s);
}

Data	*deserialize(void *raw)
{
	Serialize	*s = reinterpret_cast<Serialize*>(raw);
	Data		*ret = new Data;

	ret->tab1 = std::string(s->tab1);
	ret->i = s->i;
	ret->tab2 = std::string(s->tab2);
	delete(s);
	return ret;
}

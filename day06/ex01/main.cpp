#include "Serialize.hpp"

int		main()
{
	srand(time(NULL));
	void		*serialized = serialize();
	Data		*data = deserialize(serialized);
	std::cout << data->tab1 << data->i << data->tab2 << std::endl;
	return 0;
}

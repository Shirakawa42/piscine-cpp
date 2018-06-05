#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <string>
#include <iostream>

Base	*generate(void)
{
	int		i = rand() % 3;

	if (i == 0)
		return new A();
	else if (i == 1)
		return new B();
	return new C();
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "This class has the type A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "This class has the type B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "This class has the type C" << std::endl;
}

void	identify_from_reference(Base & p)
{
	if (dynamic_cast<A*>(&p) != NULL)
		std::cout << "This class has the type A" << std::endl;
	else if (dynamic_cast<B*>(&p) != NULL)
		std::cout << "This class has the type B" << std::endl;
	else if (dynamic_cast<C*>(&p) != NULL)
		std::cout << "This class has the type C" << std::endl;
}

int		main(void)
{
	srand(time(NULL));
	Base	*random = generate();

	identify_from_pointer(random);
	identify_from_reference(*random);
	return 0;
}

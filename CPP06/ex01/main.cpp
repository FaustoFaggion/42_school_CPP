#include "Data.hpp"

struct myStruct
{
	int		x;
	int		y;
	char	c;
	bool	b;
};

int	main(void) {

	{

		Data		a("Joao e Raoni", 33);
		uintptr_t	b;
		Data		*c;

		b = serialize(&a);

		c = deserialize(b);
		std::cout<< "a: " << a << std::endl;
		std::cout<< "b: " << b << std::endl;
		std::cout<< "c: " << *c << std::endl;
	}
	{
		myStruct	s;
		s.x = 5;
		s.y = 10;
		s.c = 'a';
		s.b = true;

		int *p = reinterpret_cast<int *>(&s);
		std::cout << *p << std::endl;
		p++;
		std::cout << *p << std::endl;
		p++;
		char *c = reinterpret_cast<char *>(p);
		std::cout << *c << std::endl;
		c++;
		bool *b = reinterpret_cast<bool *>(c);
		std::cout << *b << std::endl;
	
		std::cout << "static cast" << std::endl;
		s.x	 = s.c;
		std::cout << s.x << std::endl;
		s.x	 = static_cast<int>(s.b);
		std::cout << s.x << std::endl;
	}
	{
		char	c;
		int		*p = (int*)&c;
		*p = 5;

		std::cout << *p << std::endl;
		int		*ip = static_cast<int*>(&c);
	}



}
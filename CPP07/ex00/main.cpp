#include "Whatever.hpp"

int	main(void) {



	{
		std::cout << "\n___________________\n" << std::endl;
		int a = 2;
		int b = 3;
		
		swap( a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";
		swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	}

	std::cout << "\n___________________\n" << std::endl;
	
	int 		i1 = 2;
	int 		i2 = 7;
	int 		ri;
	float		f1 = 4.4;
	float		f2 = 8.8;
	float		rf;
	std::string	str1 = "Ola";
	std::string	str2 = "Alo";
	std::string	rs;

	std::cout << "Return min" << std::endl;
	std::cout << "i1: " << i1 << std::endl;
	std::cout << "i2: " << i2 << std::endl;
	std::cout << "min" << std::endl;
	ri = min(i1, i2);
	std::cout <<  ri << std::endl;
	std::cout << "f1: " << f1 << std::endl;
	std::cout << "f2: " << f2 << std::endl;
	std::cout << "min" << std::endl;
	rf = min(f1, f2);
	std::cout << rf << std::endl;
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str2: " << str2 << std::endl;
	std::cout << "min" << std::endl;
	rs = min(str1, str2);
	std::cout << rs << std::endl;

	std::cout << "Return max" << std::endl;
	std::cout << "i1: " << i1 << std::endl;
	std::cout << "i2: " << i2 << std::endl;
	std::cout << "max" << std::endl;
	ri = max(i1, i2);
	std::cout <<  ri << std::endl;
	std::cout << "f1: " << f1 << std::endl;
	std::cout << "f2: " << f2 << std::endl;
	std::cout << "max" << std::endl;
	rf = max(f1, f2);
	std::cout << rf << std::endl;
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str2: " << str2 << std::endl;
	std::cout << "max" << std::endl;
	rs = max(str1, str2);
	std::cout << rs << std::endl;
	
	std::cout << "Before Swap" << std::endl;
	std::cout << "i1: " << i1 << std::endl;
	std::cout << "i2: " << i2 << std::endl;
	std::cout << "f1: " << f1 << std::endl;
	std::cout << "f2: " << f2 << std::endl;
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str2: " << str2 << std::endl;
	
	swap(i1, i2);
	swap(f1, f2);
	swap(str1, str2);

	std::cout << "After Swap" << std::endl;
	std::cout << "i1: " << i1 << std::endl;
	std::cout << "i2: " << i2 << std::endl;
	std::cout << "f1: " << f1 << std::endl;
	std::cout << "f2: " << f2 << std::endl;
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str2: " << str2 << std::endl;

}
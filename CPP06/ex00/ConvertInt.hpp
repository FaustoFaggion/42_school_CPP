#ifndef CONVERTINT_HPP
#define CONVERTINT_HPP

#include "DetectType.hpp"

class ConvertInt {

	private:

	public:
		ConvertInt();
		ConvertInt(char c);
		ConvertInt(int c);
		ConvertInt(float c);
		ConvertInt(double c);
		ConvertInt(ConvertInt &rsc);
		~ConvertInt();

	ConvertInt	&operator=(ConvertInt const &rsc);
};		


#endif
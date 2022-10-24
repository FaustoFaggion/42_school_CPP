#ifndef CONVERTFLOAT_HPP
#define CONVERTFLOAT_HPP

#include "DetectType.hpp"

class ConvertFloat {

	private:

	public:
		ConvertFloat();
		ConvertFloat(char c);
		ConvertFloat(int c);
		ConvertFloat(float c);
		ConvertFloat(double c);
		ConvertFloat(ConvertFloat &rsc);
		~ConvertFloat();

	ConvertFloat	&operator=(ConvertFloat const &rsc);
};		


#endif
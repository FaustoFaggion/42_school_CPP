#ifndef CONVERTDOUBLE_HPP
#define CONVERTDOUBLE_HPP

#include "DetectType.hpp"
#include <iomanip>

class ConvertDouble {

	private:

	public:
		ConvertDouble();
		ConvertDouble(char c);
		ConvertDouble(int c);
		ConvertDouble(float c);
		ConvertDouble(double c);
		ConvertDouble(ConvertDouble &rsc);
		~ConvertDouble();

	ConvertDouble	&operator=(ConvertDouble const &rsc);
};		


#endif
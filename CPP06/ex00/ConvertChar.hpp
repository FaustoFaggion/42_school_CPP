#ifndef CONVERTCHAR_HPP
#define CONVERTCHAR_HPP

#include "DetectType.hpp"

class ConvertChar {

	private:

	public:
		ConvertChar();
		ConvertChar(char c);
		ConvertChar(int c);
		ConvertChar(float c);
		ConvertChar(double c);
		ConvertChar(ConvertChar &rsc);
		~ConvertChar();

	ConvertChar	&operator=(ConvertChar const &rsc);
};		


#endif
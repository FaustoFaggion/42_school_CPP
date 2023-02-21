#ifndef DETECTTYPE_HPP
#define DETECTTYPE_HPP

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <limits>


class	DetectType {
	
	private:
		const std::string	input;
		double				d;
	public:
	DetectType();
	DetectType(const char *argv);
	DetectType(DetectType &rsc);
	~DetectType();
	
	std::string	const	&getInput() const;
	double const		&getD() const;
	
	int					verify();

	DetectType	&operator=(DetectType const &rsc);
	
	enum types {
		CHAR,
		INT,
		FLOAT,
		DOUBLE,
		IMPOSSIBLE,
		NAN,
		MINF,
		PINF,
		NANF,
		MINFF,
		PINFF
	};
};

#endif
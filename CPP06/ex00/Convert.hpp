#ifndef CONVERT_HPP
#define CONVERT_HPP

#include "DetectType.hpp"
#include "ConvertChar.hpp"
#include "ConvertInt.hpp"
#include "ConvertFloat.hpp"
#include "ConvertDouble.hpp"

class Convert : public DetectType {

	private:
		long double		ld;
		char			c;
		int				i;
		float			f;
		double			d;
	public:
		Convert();
		Convert(const char * input);
		Convert(Convert &rhs);
		~Convert();

		long double const	&getLd() const;
		char const			&getC() const;
		int const			&getI() const;
		float const			&getF() const;
		double const		&getD() const;

		Convert				&operator=(Convert const &rhs);
};

#endif
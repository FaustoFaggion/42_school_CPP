#ifndef CONVERT_HPP
#define CONVERT_HPP

#include "DetectType.hpp"
#include "ConvertChar.hpp"
#include "ConvertInt.hpp"

class Convert : DetectType {

	private:
		char			c;
		long long int	ll;
		int				i;
		float			f;
		double			d;
	public:
		Convert();
		Convert(const char * input);
		Convert(Convert &rhs);
		~Convert();

		char const			&getC() const;
		long long int const	&getLL() const;
		int const			&getI() const;
		float const			&getF() const;
		double const			&getD() const;


		Convert				&operator=(Convert const &rhs);
};

#endif
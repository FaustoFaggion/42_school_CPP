#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:
		WrongCat();
		WrongCat(WrongCat const &rsc);
		~WrongCat();
		WrongCat	&operator=(WrongCat const &rhs);
};

#endif
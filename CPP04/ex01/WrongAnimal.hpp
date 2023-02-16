#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string.h>

class WrongAnimal {

	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(std::string const type);
		WrongAnimal(WrongAnimal const &rsc);
		~WrongAnimal();

		WrongAnimal&	operator=(WrongAnimal const &rhs);

		std::string const	&getType() const;

		void	setType(std::string const type);

		void	makeSound() const;
};

std::ostream&	operator<<(std::ostream &lhs, WrongAnimal &rhs);

#endif
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string.h>

class Animal {

	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string const type);
		Animal(Animal const &rsc);
		virtual ~Animal();

		Animal&	operator=(Animal const &rhs);

		std::string const	&getType() const;

		void	setType(std::string const type);

		virtual void	makeSound() = 0;
};

std::ostream&	operator<<(std::ostream &lhs, Animal &rhs);

#endif
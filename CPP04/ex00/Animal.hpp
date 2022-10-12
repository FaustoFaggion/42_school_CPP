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
		~Animal();

		Animal&	operator=(Animal const &rhs);

		std::string const	&getType() const;

		void	setType(std::string const type);

		void	makeSound();
};

std::ostream&	operator<<(std::ostream &lhs, Animal &rhs);

/*
class Dog : public Animal {

	public:
		Dog();
		Dog(Dog const &rsc);
		~Dog();
};

class Cat : public Animal {

	public:
		Cat();
		Cat(Cat const &rsc);
		~Cat();
};
*/
#endif
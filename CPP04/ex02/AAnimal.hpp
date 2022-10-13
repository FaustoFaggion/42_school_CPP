#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string.h>

class AAnimal {

	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(std::string const type);
		AAnimal(AAnimal const &rsc);
		virtual ~AAnimal();

		AAnimal&	operator=(AAnimal const &rhs);

		std::string const	&getType() const;

		void	setType(std::string const type);

		virtual void	makeSound() = 0;
};

std::ostream&	operator<<(std::ostream &lhs, AAnimal &rhs);

#endif
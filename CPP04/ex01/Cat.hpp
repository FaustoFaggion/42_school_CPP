#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	private:
		Brain	*brain;

	public:
		Cat();
		Cat(Cat const &rsc);
		~Cat();
		Cat	&operator=(Cat const &rhs);

		Brain	&getBrain() const;
		void	makeSound() const;
};

#endif
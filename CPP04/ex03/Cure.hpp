#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

	private:

	public:
		Cure();
		Cure(Cure const &rsc);
		~Cure();

		Cure const	&operator=(Cure const &rhs);

		Cure		*clone() const;
		void		use(ICharacter &target);
};

#endif
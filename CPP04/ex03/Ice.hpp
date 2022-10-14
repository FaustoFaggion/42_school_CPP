#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {

	private:

	public:
		Ice();
		Ice(Ice const &rsc);
		~Ice();

		Ice const	&operator=(Ice const &rsc);

		Ice			*clone() const;
		void		use(ICharacter &target);
};

#endif
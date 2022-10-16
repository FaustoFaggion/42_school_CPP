#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private:
		AMateria	*source[4];
	public:
		MateriaSource();
		~MateriaSource();

		void		learnMateria(AMateria *materia);
//		AMateria	*createMateria(std::string const &type) = 0;

		AMateria const	&getSource(int i) const;
};

#endif
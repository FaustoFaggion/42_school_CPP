#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	private:
		AMateria	*source[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &rsc);
		~MateriaSource();

		AMateria	*getSource(int i) const;
		
		void		learnMateria(AMateria *materia);
		AMateria	*createMateria(std::string const &type);

		MateriaSource	&operator=(MateriaSource const &rsc);
};

#endif
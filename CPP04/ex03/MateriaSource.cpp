#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->source[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;

	for(int i = 0; i < 4; i++) {
		if (this->source[i] != NULL) {
			delete this->source[i];
		}
	}

}

void	MateriaSource::learnMateria(AMateria* materia) {
	for(int i = 0; i < 4; i++) {
		if (this->source[i] == NULL) {
			this->source[i] = materia;
			break;
		}
	}
}

/*
std::ostream	&operator<<(std::ostream &lhs, MateriaSource &rhs) {

	return (lhs);
}
*/
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		this->source[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const &rsc) {
	for (int i = 0; i < 4; i++) {
		this->source[i] = NULL;
	}
	*this = rsc;
}


MateriaSource::~MateriaSource() {
	for(int i = 0; i < 4; i++) {
		if (this->source[i] != NULL) {
			delete this->source[i];
		}
	}

}

AMateria	*MateriaSource::getSource(int i) const {
	return (this->source[i]);
}

void	MateriaSource::learnMateria(AMateria* materia) {
	for(int i = 0; i < 4; i++) {
		if (this->source[i] == NULL) {
			this->source[i] = materia;
			return;
		}
	}
	delete materia;
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (this->source[i] != NULL && this->source[i]->getType() == type) {
			return (this->source[i]->clone());
		}
	}
	return (0);
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rsc) {
	for (int i = 0; i < 4; i++) {
		if (this->source[i] != NULL)
		{
			delete this->source[i];
			this->source[i] = NULL;
		}
		if(rsc.source[i] != NULL)
			this->source[i] = rsc.source[i]->clone();
	}
	return (*this);
}


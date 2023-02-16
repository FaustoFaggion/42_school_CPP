#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	//std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->source[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const &rsc) {
	//std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->source[i] = NULL;
	}
	*this = rsc;
}


MateriaSource::~MateriaSource() {
	//std::cout << "MateriaSource destructor called" << std::endl;

	for(int i = 0; i < 4; i++) {
		if (this->source[i] != NULL) {
			//std::cout << "MateriaSource destructor called at " <<  i << std::endl;
			delete this->source[i];
		}
	}

}

AMateria	*MateriaSource::getSource(int i) const {
	return (this->source[i]);
}

void	MateriaSource::learnMateria(AMateria* materia) {
	//std::cout << "learnMateria called!!" << std::endl;
	for(int i = 0; i < 4; i++) {
		if (this->source[i] == NULL) {
			this->source[i] = materia;
			//std::cout << "stored source at " << i << std::endl;
			return;
		}
	}
	delete materia;
}

AMateria	*MateriaSource::createMateria(std::string const &type) {
	//std::cout << "createMateria called!!" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->source[i] != NULL && this->source[i]->getType() == type) {
			//std::cout << "cloned source " << i << " called!!" << std::endl;
			return (this->source[i]->clone());
		}
	}
	return (0);
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rsc) {
	//std::cout << "operator = called!!" << std::endl;

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


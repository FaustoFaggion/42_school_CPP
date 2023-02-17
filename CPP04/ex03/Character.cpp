#include "Character.hpp"

Character::Character(void) {
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
	for (int i = 0; i < 50; i++) {
		this->leftOnTheFloor[i] = NULL;
	}
}

Character::Character(std::string name) : name(name) {
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
	for (int i = 0; i < 50; i++) {
		this->leftOnTheFloor[i] = NULL;
	}
}

Character::Character(Character const & rsc) {
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}

	*this = rsc;
}

Character::~Character() {
	for(int i = 0; i < 4; i++) {
		if (this->inventory[i] != NULL) {
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
	}
	for(int i = 0; i < 50; i++) {
		if (this->leftOnTheFloor[i] != NULL) {
			delete this->leftOnTheFloor[i];
			this->leftOnTheFloor[i] = NULL;
		}
	}
}

Character const	&Character::operator=(Character const &rsc) {
	this->name = rsc.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
		{
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
		if (rsc.inventory[i] != NULL)
			this->inventory[i] = rsc.inventory[i]->clone();
	}

	for (int i = 0; i < 50; i++)
	{
		this->leftOnTheFloor[i] = NULL;
	}
	return (*this);
}

std::string const &Character::getName() const {
	return (this->name);
}

void	Character::equip(AMateria *m) {
	for(int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL) {
			this->inventory[i] = m;
			return ;
		}
	}
	for (int i = 0; i < 50; i++)
	{
		if (this->leftOnTheFloor[i] == NULL)
		{
			this->leftOnTheFloor[i] = m;
			return;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
	{
		for (int i = 0; i < 50; i++)
		{
			if (this->leftOnTheFloor[i] == NULL){
				this->leftOnTheFloor[i] = this->inventory[idx];
				break;
			}
		}
		this->inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target) {
	if (this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}

std::ostream	&operator<<(std::ostream &lhs, Character &rhs) {
	lhs << rhs.getName();
	return (lhs);
}

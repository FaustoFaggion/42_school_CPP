#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main (void) {

	Animal	*vaca = new Animal("vaca");
	Cat		*mimi = new Cat();
	Dog		*toto = new Dog();
	

	std::cout << *vaca << std::endl;
	std::cout << *mimi << std::endl;
	std::cout << *toto << std::endl;

	mimi->makeSound();
	toto->makeSound();
	vaca->makeSound();
	
	return (0);
}


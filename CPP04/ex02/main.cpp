#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int    main(void) {

    {
	    AAnimal    *animals[10];
        Cat        cat;
        Dog        dog;

        for (size_t i = 0; i < 10; i++)
        {
            i % 2 ? animals[i] = new Cat : animals[i] = new Dog;
            animals[i]->makeSound();
        }

        std::cout << "\n-------------------\n";

        for (size_t i = 0; i < 10; i++)
            delete animals[i];
    }

    std::cout << "\n-------------------\n";
    
	{
        Cat cat1;
        Cat cat2(cat1);
        {
            Cat tmp = cat1;
        }
    }

    std::cout << "\n-------------------\n";
    
	{
        Cat *cat = new Cat();
        
        Cat *deepCopyCat = new Cat(*cat);
        Dog *dog = new Dog();
        Dog *deepCopyDog = new Dog(*dog);

        Cat cat2 = *cat;
        
        cat2 = *deepCopyCat;
        
        std::cout << &(cat->getBrain()) << std::endl;
        std::cout << &(deepCopyCat->getBrain()) << std::endl;
        std::cout << &(dog->getBrain()) << std::endl;
        std::cout << &(deepCopyDog->getBrain()) << std::endl;

        delete cat;
        delete deepCopyCat;
        delete dog;
        delete deepCopyDog;
    }
	
	return (0);
}


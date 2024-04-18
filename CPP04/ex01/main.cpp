#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "colour.h"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Animal *animals[4];

	std::cout << RED_TEXT << "----------Constructors----------" << RESET_TEXT << std::endl;

	for (int i = 0; i < 2; ++i)
	    animals[i] = new Cat();

	for (int i = 2; i < 4; ++i)
	    animals[i] = new Dog();

	std::cout << RED_TEXT <<"----------Sounds----------" << RESET_TEXT <<std::endl;

    for(int i = 0; i < 4; i++)
        animals[i]->makeSound();
	
	std::cout << RED_TEXT << "----------Destructors----------" << RESET_TEXT << std::endl;

	for (int i = 0; i < 4; ++i)
	    delete animals[i];

	return (0);
}
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "colour.h"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << YELLOW_TEXT << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        std::cout << meta->getType() << " " << RESET_TEXT << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();

        delete j;
        delete i;
        delete meta;
    }
    std::cout << "---------------------" << std::endl;
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();

        std::cout << YELLOW_TEXT << i->getType() << " " << std::endl;
        std::cout << meta->getType() << " " << RESET_TEXT << std::endl;
        i->makeSound();
        meta->makeSound();

        delete i;
        delete meta;
    }
    
    return 0;
}
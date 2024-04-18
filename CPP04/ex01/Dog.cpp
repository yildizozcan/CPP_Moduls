#include "Dog.hpp"
#include "colour.h"

Dog::Dog()
{
    std::cout << "Dog default constructor called!" << std::endl;
    setType("Dog");
    brain = new Brain();
}

Dog::Dog(const Dog& r)
{
    std::cout << "Dog copy constructor called!" << std::endl;
    *this = r;
}

Dog &Dog::operator=(const Dog& r)
{
    std::cout << "Dog assigment operator called!" << std::endl;
    if(this != &r)
    {
        setType(r.type);
        if(this->brain != NULL)
            delete this->brain;
        this->brain = new Brain;
        *(this->brain) = *(r.brain);
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called!" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << GREEN_TEXT << "U・ᴥ・U : hav hav.." << RESET_TEXT << std::endl;
}

Brain *Dog::getBrain() const
{
    return (this->brain);
}

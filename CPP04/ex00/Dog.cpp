#include "Dog.hpp"
#include "colour.h"

Dog::Dog()
{
    std::cout << "Dog default constructor called!" << std::endl;
    setType("Dog");
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
        setType(r.type);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called!" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << GREEN_TEXT << "U・ᴥ・U : hav hav.." << RESET_TEXT << std::endl;
}

#include "Animal.hpp"
#include "colour.h"

Animal::Animal()
{
    std::cout << "Animal default constructor called!" << std::endl;
    setType("Unknown Animal Species");
}

Animal::Animal(const Animal& r)
{
    std::cout << "Animal copy constructor called!" << std::endl;
    *this = r;
}

Animal &Animal::operator=(const Animal& r)
{
    std::cout << "Animal assigment operator called!" << std::endl;
    if(this != &r)
        setType(r.type);
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called!" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << GREEN_TEXT << "Animal : It is unknown what the sound will be like." << RESET_TEXT << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::setType(const std::string typeName)
{
    this->type = typeName;
}


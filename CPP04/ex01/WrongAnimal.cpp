#include "WrongAnimal.hpp"
#include "colour.h"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    setType("WrongAnimal");
}

WrongAnimal::WrongAnimal(const WrongAnimal& r)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = r;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& r)
{
    std::cout << "WrongAnimal assigment operator called" << std::endl;
    if(this != &r)
        setType(r.type);
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << GREEN_TEXT << "WrongAnimal : It is unknown what the sound will be like." << RESET_TEXT << std::endl;
}
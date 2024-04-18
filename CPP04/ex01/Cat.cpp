#include "Cat.hpp"
#include "colour.h"

Cat::Cat()
{
    std::cout << "Cat default constructor called!" << std::endl;
    setType("Cat");
    this->brain = new Brain();
}

Cat::Cat(const Cat& r)
{
    std::cout << "Cat copy constructor called!" << std::endl;
    *this = r;
}

Cat &Cat::operator=(const Cat& r)
{
    std::cout << "Cat assigment operator called!" << std::endl;
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

Cat::~Cat()
{
    std::cout << "Cat destructor called!" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << GREEN_TEXT <<"ฅ^•ﻌ•^ฅ : meowwww... " << RESET_TEXT << std::endl;
}

Brain *Cat::getBrain() const
{
    return (this->brain);
}

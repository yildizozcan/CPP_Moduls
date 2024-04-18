#include "WrongCat.hpp"
#include "colour.h"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called!" << std::endl;
    setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat& r)
{
    std::cout << "WrongCat copy constructor called!" << std::endl;
    *this = r;
}

WrongCat &WrongCat::operator=(const WrongCat& r)
{
    std::cout << "WrongCat assigment operator called!" << std::endl;
    if(this != &r)
        setType(r.type);
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called!" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << GREEN_TEXT <<"ฅ^•ﻌ•^ฅ : WrongCat : meowwww... " << RESET_TEXT << std::endl;
}
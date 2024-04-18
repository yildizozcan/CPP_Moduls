#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat& r);
        WrongCat &operator=(const WrongCat& r);
        ~WrongCat();
        void makeSound() const;
};

#endif
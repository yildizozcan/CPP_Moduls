#ifndef __CAT_HPP__
# define __CAT_HPP__

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& r);
        Cat &operator=(const Cat& r);
        ~Cat();
        void makeSound() const;
};

#endif
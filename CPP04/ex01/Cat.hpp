#ifndef __CAT_HPP__
# define __CAT_HPP__

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat& r);
        Cat &operator=(const Cat& r);
        ~Cat();
        void makeSound() const;
        Brain *getBrain() const;
};

#endif
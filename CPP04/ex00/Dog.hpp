#ifndef __DOG_HPP__
# define __DOG_HPP__

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& r);
        Dog &operator=(const Dog& r);
        ~Dog();
        void makeSound() const;
};

#endif

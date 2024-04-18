#ifndef __DOG_HPP__
# define __DOG_HPP__

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog& r);
        Dog &operator=(const Dog& r);
        ~Dog();
        void makeSound() const;
        Brain *getBrain() const;
};

#endif

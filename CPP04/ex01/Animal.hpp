#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>

class Animal
{
    public:
        Animal();
        Animal(const Animal& r);
        Animal &operator=(const Animal& r);
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
        void setType(const std::string typeName);

    protected:
        std::string type;
};

#endif
#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& r);
        WrongAnimal &operator=(const WrongAnimal& r);
        virtual ~WrongAnimal();
        void setType(std::string type);
        std::string getType() const;
        void makeSound() const;
    protected:
        std::string type;
};



#endif
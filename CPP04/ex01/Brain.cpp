#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called!" << std::endl;
    for(int i = 0; i < 100; i++)
        ideas[i] = "";
}

Brain::Brain(const Brain& r)
{
    std::cout << "Brain copy constructor called!" << std::endl;
    *this = r;
}

Brain &Brain::operator=(const Brain& r)
{
    std::cout << "Brain assigment operator called!" << std::endl;
    if(this != &r)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = r.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called!" << std::endl;
}
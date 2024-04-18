#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& r);
        Brain &operator=(const Brain& r);
        ~Brain();
};


#endif
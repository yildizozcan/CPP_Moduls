#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie
{
    private:
        std::string Name;
    public:
        Zombie();
        ~Zombie();
        void zombieName(std::string name);
        void announce(void);
};

Zombie* zombieHorde( int N, std::string name);

#endif
#include "Zombie.hpp"

int main()
{
    int hordeSize = 5;
    std::string zombieName = "Zombie";

    Zombie *zombieArmy = zombieHorde(hordeSize, zombieName);

    for (int i = 0; i < hordeSize; ++i)
    {
        zombieArmy[i].announce();
    }
    delete[] zombieArmy;
    return 0;
}
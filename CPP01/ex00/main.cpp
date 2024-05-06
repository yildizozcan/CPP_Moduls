#include "Zombie.hpp"

int main()
{
    Zombie *tmpZombie = newZombie("walker");
    tmpZombie->announce();

    randomChump("roamer");

    delete tmpZombie;
    return 0;
}
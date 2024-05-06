#include "Zombie.hpp"

Zombie::Zombie(){

}

Zombie::~Zombie()
{
    std::cout << this->Name << " destroyed." << std::endl;
}

void Zombie::zombieName(std::string name)
{
    this->Name = name;
}

void Zombie::announce(void)
{
    std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
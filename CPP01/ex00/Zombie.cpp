#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->Name = name;
}

Zombie::~Zombie()
{
    std::cout << this->Name << " zombie destroyed." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
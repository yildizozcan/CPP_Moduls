#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon& newWeapon)
{
    weapon = &newWeapon;
}

void HumanB::attack() const 
{
    if(weapon)
        std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
    else 
        std::cout << this->name << " doesn't have a weapon to attack with!" << std::endl;
}
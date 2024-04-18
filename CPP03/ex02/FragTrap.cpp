#include "FragTrap.hpp"
#include "colour.h"

FragTrap::FragTrap() : ClapTrap()
{
    this->name = "FR4G-TP";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << YELLOW_TEXT << "FragTrap default constructor called." << RESET_TEXT << std::endl;
    std::cout << "FragTrap " << this->name << " has been created!" << std::endl;
}

FragTrap::FragTrap(std::string nametmp) : ClapTrap(nametmp)
{
    this->name = nametmp;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << YELLOW_TEXT << "FragTrap int constructor called." << RESET_TEXT << std::endl;
    std::cout << "FragTrap " << this->name << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
{
    std::cout << YELLOW_TEXT << "FragTrap copy constructor called." << RESET_TEXT << std::endl;
    *this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    std::cout << YELLOW_TEXT << "FragTrap assignment operator called." << RESET_TEXT << std::endl;
    if(this != &obj)
    {
        this->name = obj.name;
        this->hitPoints = obj.hitPoints;
        this->energyPoints = obj.energyPoints;
        this->attackDamage = obj.attackDamage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << RED_TEXT << "FragTrap " << this->name << " has been destroyed!" << " FragTrap destructor called." << RESET_TEXT << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if(this->energyPoints < 1)
    {
        std::cout << BLUE_TEXT <<"FragTrap the player has no energy points left." << RESET_TEXT << std::endl;
        return;
    }
    if(this->hitPoints < 1)
    {
        std::cout << BLUE_TEXT << "FragTrap the player has no hit points left." << RESET_TEXT << std::endl;
        return;
    }
    this->attackDamage += 1;
    this->energyPoints -= 1;
    std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if(this->hitPoints < 1 || this->energyPoints < 1)
    {
        std::cout << BLUE_TEXT <<"FragTrap the player has no hit/energy points left. Can't get any work done!" << RESET_TEXT << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->name << " requests a high five!" << std::endl;
}
#include "ScavTrap.hpp"
#include "colour.h"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->name = "SC4V-TP";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << YELLOW_TEXT << "ScavTrap default constructor called." << RESET_TEXT << std::endl;
    std::cout << "ScavTrap " << this->name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(std::string nametmp) : ClapTrap(nametmp)
{
    this->name = nametmp;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << YELLOW_TEXT << "ScavTrap int constructor called." << RESET_TEXT << std::endl;
    std::cout << "ScavTrap " << this->name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
    std::cout << YELLOW_TEXT << "ScavTrap copy constructor called." << RESET_TEXT << std::endl;
    *this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    std::cout << YELLOW_TEXT << "ScavTrap assignment operator called." << RESET_TEXT << std::endl;
    if(this != &obj)
    {
        this->name = obj.name;
        this->hitPoints = obj.hitPoints;
        this->energyPoints = obj.energyPoints;
        this->attackDamage = obj.attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED_TEXT << "ScavTrap " << this->name << " has been destroyed!" << " ScavTrap destructor called." << RESET_TEXT << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->energyPoints < 1)
    {
        std::cout << BLUE_TEXT <<"ScavTrap the player has no energy points left." << RESET_TEXT << std::endl;
        return;
    }
    if(this->hitPoints < 1)
    {
        std::cout << BLUE_TEXT << "ScavTrap the player has no hit points left." << RESET_TEXT << std::endl;
        return;
    }
    this->attackDamage += 1;
    this->energyPoints -= 1;
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    if(this->hitPoints < 1 || this->energyPoints < 1)
    {
        std::cout << BLUE_TEXT <<"ScavTrap the player has no hit/energy points left. Can't get any work done!" << RESET_TEXT << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode." << std::endl;
}
#include "ClapTrap.hpp"
#include "colour.h"

ClapTrap::ClapTrap() : name("CL4P-TP"), hitPoints(10), energyPoints(10), attackDamage(0) 
{
    std::cout << YELLOW_TEXT << "ClapTrap default constructor called." << RESET_TEXT << std::endl;
    std::cout << "ClapTrap " << this->name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(std::string nametmp) : name(nametmp), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << this->name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj) : name(obj.name), hitPoints(obj.hitPoints), energyPoints(obj.energyPoints), attackDamage(obj.attackDamage)
{
    std::cout << YELLOW_TEXT << "ClapTrap copy constructor called." << RESET_TEXT << std::endl;
    std::cout << "ClapTrap " << this->name << " has been created!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout << YELLOW_TEXT << "ClapTrap assignment operator called." << RESET_TEXT << std::endl;
    if(this != &obj)
    {
        this->name = obj.name;
        this->hitPoints = obj.hitPoints;
        this->energyPoints = obj.energyPoints;
        this->attackDamage = obj.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << RED_TEXT << "ClapTrap " << this->name << " has been destroyed!" << " ClapTrap destructor called. " << RESET_TEXT << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->energyPoints < 1)
    {
        std::cout << BLUE_TEXT <<"The player has no energy points left." << RESET_TEXT << std::endl;
        return;
    }
    if(this->hitPoints < 1)
    {
        std::cout << BLUE_TEXT << "The player has no hit points left." << RESET_TEXT << std::endl;
        return;
    }
    this->attackDamage += 1;
    this->energyPoints -= 1;
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " hit points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->energyPoints < 1)
    {
        std::cout << BLUE_TEXT <<"The player has no energy points left." << RESET_TEXT << std::endl;
        return;
    }
    if(this->hitPoints < 1)
    {
        std::cout << BLUE_TEXT << "The player has no hit points left." << RESET_TEXT << std::endl;
        return;
    }
    if(this->hitPoints - amount < 0)
    {
        this->hitPoints = 0;
        std::cout << "ClapTrap " << this->name << " takes " << amount << " damage and is destroyed!" << std::endl;
        return;
    }
    this->hitPoints -= amount;
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;     
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energyPoints < 1)
    {
        std::cout << BLUE_TEXT <<"The player has no energy points left." << RESET_TEXT << std::endl;
        return;
    }
    if(this->hitPoints < 1)
    {
        std::cout << BLUE_TEXT << "The player has no hit points left." << RESET_TEXT << std::endl;
        return;
    }
    this->hitPoints += amount;
    this->energyPoints -= 1;
    std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " points!" << std::endl;
}
#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap1;
    ClapTrap claptrap2("Jack");
    ClapTrap claptrap3 = claptrap2;

    claptrap1.attack("Tyreen");
    claptrap2.attack("Aurelia");
    claptrap1.takeDamage(5);
    claptrap2.takeDamage(5);

    claptrap2.beRepaired(2);
    claptrap1.beRepaired(2);

    claptrap3.takeDamage(15);
    claptrap3.attack("Aurelia");

    return 0;
}
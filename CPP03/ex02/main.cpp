#include "FragTrap.hpp"

int	 main(void)
{
	ScavTrap obj1("Rick");
	FragTrap obj2("Negan");
	FragTrap obj3(obj2);

    obj1.attack("zombie");
    obj2.attack("another zombie");
    obj3.highFivesGuys();
    obj1.guardGate();
}
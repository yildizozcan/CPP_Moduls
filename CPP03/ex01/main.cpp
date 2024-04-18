#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	 main(void)
{
	ScavTrap obj1("Rick");
	ScavTrap obj2("Negan");
	ScavTrap obj3(obj2);

    obj1.attack("zombie");
    obj1.attack("another zombie");
    obj3.takeDamage(200);
    obj3.guardGate();
    obj1 = obj2;
    obj1.guardGate();
    obj1.attack("zombie");
    obj3.attack("zombie");
}
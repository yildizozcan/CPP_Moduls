#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
    std::string name;
    Weapon& weapon;

public:
    HumanA(std::string name, Weapon& weapon);
    void attack() const;
};

#endif
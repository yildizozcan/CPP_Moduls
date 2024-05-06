#include "Weapon.hpp"

Weapon::Weapon() : type("knife") {}

Weapon::Weapon(const std::string& str)
{
    setType(str);
}

const std::string& Weapon::getType() const
{
    return type;
}

void Weapon::setType(const std::string& newType)
{
    this->type = newType;
}
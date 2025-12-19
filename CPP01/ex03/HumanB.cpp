# include "HumanB.hpp"

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

HumanB::HumanB(std::string n)
{
    name = n;
}

void HumanB::attack()
{
    if(weapon)
        std::cout << name << " attack with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon!" << std::endl;
}

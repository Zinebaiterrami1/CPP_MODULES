# include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &weapon): weapon(weapon), name(n)
{
}

void HumanA::attack()
{
    std::cout << name << " attack with their " << weapon.getType() << std::endl;
}

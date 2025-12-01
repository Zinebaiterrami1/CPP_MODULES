#include "ScavTrap.hpp"

/*
This member function will display a message 
indicating that ScavTrap is now in Gate
keeper mode.
*/

ScavTrap::ScavTrap() : ClapTrap()
{
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
}

void ScavTrap::attack(const std::string& target)
{
    if(HitPoint > 0 && EnergyPoint > 0)
    {
        EnergyPoint -= 1;
        std::cout << "ScavTrap " << Name
        << " attacks" << &target << " ,causing " << AttackDamage << " points of damage!"
        << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScravTrap is now in Gate Keeper Mode!" << std::endl;
}


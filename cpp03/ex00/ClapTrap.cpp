#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    Name = "default";
    HitPoint = 10;
    EnergyPoint = 10;
    AttackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &val)
{
    *this = val;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& val)
{
    if(this != &val)
    {
        this->Name = val.Name;
        this->HitPoint = val.HitPoint;
        this->EnergyPoint = val.EnergyPoint;
        this->AttackDamage = val.AttackDamage;
    }
    return *this;
}

ClapTrap::ClapTrap(std::string name)
{
    Name = name;
    HitPoint = 10;
    EnergyPoint = 10;
    AttackDamage = 0;
}

void ClapTrap::attack(const std::string& target)
{
    if(HitPoint > 0 && EnergyPoint > 0)
    {
        EnergyPoint -= 1;
        std::cout << "ClapTrap " << Name
        << " attacks" << &target << " ,causing " << AttackDamage << " points of damage!"
        << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    HitPoint -= amount;
    if(HitPoint < 0)
        HitPoint = 0;
    std::cout << "ClapTrap " << Name << "takes " << amount << " damage!"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(HitPoint > 0 && EnergyPoint > 0)
    {
        HitPoint += amount;
        EnergyPoint--;
        std::cout << "ClapTrap " << Name << "repairs itself, gaining " << amount << " hit points!" << std::endl;
    }
}



#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout<<"ScavTrap Default constructor called"<<std::endl;
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout<<"ScavTrap Parameterized constructor called"<<std::endl;
    HitPoint = 100;
    EnergyPoint = 50;
    AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &val) : ClapTrap(val)
{
    std::cout<<"ScavTrap Copy constructor called"<<std::endl;
    *this = val;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& val)
{
    std::cout<<"ScavTrap Copy assignment operator called"<<std::endl;
    if(this != &val)
    {
        this->Name = val.Name;
        this->HitPoint = val.HitPoint;
        this->EnergyPoint = val.EnergyPoint;
        this->AttackDamage = val.AttackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(HitPoint <= 0 || EnergyPoint <= 0)
        std::cout << "ClapTrap can't attack" << std::endl;
    if(EnergyPoint > 0)
        EnergyPoint -= 1;
    std::cout << "ClapTrap " << Name
    << " attacks " << target << " ,causing " << AttackDamage << " points of damage!"
    << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScravTrap is now in Gate Keeper Mode!" << std::endl;
}


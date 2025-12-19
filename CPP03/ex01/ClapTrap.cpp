#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
    std::cout << "ClapTrap Parameterized constructor called" << std::endl;
    Name = name;
}

ClapTrap::ClapTrap(const ClapTrap &val)
{
    std::cout<<"ClapTrap Copy constructor called"<<std::endl;
    *this = val;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& val)
{
    std::cout<<"ClapTrap Copy assignment operator called"<<std::endl;
    if(this != &val)
    {
        this->Name = val.Name;
        this->HitPoint = val.HitPoint;
        this->EnergyPoint = val.EnergyPoint;
        this->AttackDamage = val.AttackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"ClapTrap Destructor called"<<std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(HitPoint <= 0 || EnergyPoint <= 0)
        std::cout << "ClapTrap can't attack" << std::endl;
    if(EnergyPoint > 0)
        EnergyPoint -= 1;
    std::cout << "ClapTrap " << Name
    << " attacks " << target << " ,causing " << AttackDamage << " points of damage!"
    << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(HitPoint <= 0)
    {
        std::cout << "ClapTrap " << Name << "is already destroyed and cannot take more damage!"
        << std::endl;
        return ;
    }
    if(amount >= HitPoint)
    {
        HitPoint = 0;
        std::cout << "ClapTrap " << Name
                  << " takes " << amount
                  << " damage and is destroyed!" << std::endl;
    }
    else
    {
        HitPoint -= amount;
        std::cout << "ClapTrap " << Name
                    << " takes " << amount
                    << " damage! HP now = " << HitPoint
                    << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(HitPoint <= 0)
    {
        std::cout << "ClapTrap " << Name
                << " cannot repair itself, no hit points left!" << std::endl;
        return ;
    }
    if(EnergyPoint <= 0)
    {
        std::cout << "ClapTrap " << Name
                  << " cannot repair itself because it has no energy points left!" << std::endl;
        return;
    }
    HitPoint += amount;
    EnergyPoint--;
    std::cout << "ClapTrap " << Name << " repairs itself, gaining " << amount << " hit points!" << std::endl;
}


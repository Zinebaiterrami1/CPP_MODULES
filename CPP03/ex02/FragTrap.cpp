# include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout<<"FragTrap Default constructor called"<<std::endl;
    HitPoint = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout<<"FragTrap Parameterized constructor called"<<std::endl;
    HitPoint = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &val) : ClapTrap(val)
{
    std::cout<<"FragTrap Copy constructor called"<<std::endl;
    *this = val;
}

FragTrap& FragTrap::operator=(const FragTrap& val)
{
    std::cout<<"FragTrap Copy assignment operator called"<<std::endl;
    if(this != &val)
    {
        this->Name = val.Name;
        this->HitPoint = val.HitPoint;
        this->EnergyPoint = val.EnergyPoint;
        this->AttackDamage = val.AttackDamage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "Hight-Fives" << std::endl;
}
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
    protected:
        std::string Name;
        int HitPoint;
        int EnergyPoint;
        int AttackDamage;
    public:
        ClapTrap();
        ClapTrap(const ClapTrap &val);
        ClapTrap& operator=(const ClapTrap& val);
        ~ClapTrap();
        ClapTrap(std::string name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

# endif
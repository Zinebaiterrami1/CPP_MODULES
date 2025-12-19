#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &val);
        ScavTrap& operator=(const ScavTrap& val);
        ~ScavTrap();

        void guardGate();
        void attack(const std::string& target);
};

#endif
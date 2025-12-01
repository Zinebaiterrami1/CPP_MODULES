#ifndef FRAGTRAP_HPP
# define FRSGTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
    FragTrap();
    FragTrap(std::string Name);
    FragTrap(const FragTrap &val);
    FragTrap& operator=(const FragTrap& val);
    ~FragTrap();

    void highFivesGuys(void);
};

#endif
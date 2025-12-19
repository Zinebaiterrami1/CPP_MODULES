#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap &val);
        FragTrap& operator=(const FragTrap& val);
        ~FragTrap();

    void highFivesGuys(void);
};

#endif
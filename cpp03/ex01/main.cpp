# include "ScavTrap.hpp"

int main()
{
    ClapTrap a("Bot 1");
    ScavTrap b("Bot 2");

    a.attack("Bot a");
    a.takeDamage(5);
    a.beRepaired(10);
    std::cout << "---------------------------------------------" << std::endl;
    b.attack("Bot b");
    b.takeDamage(5);
    b.beRepaired(10);
    b.guardGate();
}

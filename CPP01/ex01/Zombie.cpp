# include "Zombie.hpp"

Zombie::Zombie()
{
    name = "";
}

Zombie::~Zombie()
{
    std::cout << "destroyed!" << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl; 
}

void Zombie::setName(std::string n)
{
    name = n;
}

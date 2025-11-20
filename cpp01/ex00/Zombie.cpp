#include "Zombie.hpp"

Zombie::Zombie()
{
    name = "Luna";
}

Zombie::~Zombie()
{
    std::cout << name << "destroyed!" << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl; 
}
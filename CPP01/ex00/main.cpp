#include "Zombie.hpp"

int main()
{
    /*heap*/
    Zombie* z = newZombie("Zombie 1");
    delete z;
    /*stack*/
    randomChump("Zombie 2");
}
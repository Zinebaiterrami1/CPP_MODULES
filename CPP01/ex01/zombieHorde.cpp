# include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;

    i = 0;
    if(N <= 0)
        return (NULL);
    Zombie *Horde = new Zombie[N];
    while(i < N)
    {
        Horde->setName(name);
        Horde->announce();
        i++;
    }
    return (Horde);
}

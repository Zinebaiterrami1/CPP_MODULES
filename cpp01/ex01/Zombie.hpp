#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
    private:
        std::string name;
        int N;
    public:
    Zombie();
    void setName(std::string name);
    void announce(void);
    ~Zombie();
};
Zombie* zombieHorde( int N, std::string name );
#endif
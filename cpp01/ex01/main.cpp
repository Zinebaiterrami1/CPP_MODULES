#include "Zombie.hpp"

int main()
{
    int N;

    N = 0;
    std::cout << "Enter a Size N: " << N << std::endl;
    Zombie *h = zombieHorde(N, "xdsdsf");
    delete[] h;
    h = NULL;
}
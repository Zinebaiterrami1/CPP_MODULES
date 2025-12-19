#include <iostream>
#include <string.h>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                std::cout << (char)toupper(av[i][j]);
                j++;
            }
            i++;
        }
    }
    std::cout << std::endl;
}

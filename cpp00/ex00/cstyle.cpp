#include <iostream>
#include <string.h>

void appercase(char c)
{
    if(c >= 97 && c <= 122)
    {
        c -= 32;
        std::cout << c;
    }
}

void switch_to_apper(char **av, int ac)
{
    int i;
    int j;

    j = 0;
    i = 1;
    if(ac > 1)
    {
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                if(av[i][j] >= 97 && av[i][j] <= 122)
                {
                    av[i][j] -= 32;
                    std::cout << av[i][j];
                }
                else if(av[i][j] <= 97 || av[i][j] >= 122)
                    std::cout << av[i][j];
                j++;
            }
            i++;
        }
        std::cout << "\n";
    }
    else if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    }
}

int main(int argc, char **argv)
{
    switch_to_apper(argv, argc);
    return (0);
    // int cout;

    // cout = 4;
    // std::cout << "cout : " << cout << std::endl;
}
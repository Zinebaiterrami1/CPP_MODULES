#include <stdio.h>
#include <stdlib.h>

void appercase(char c)
{
    if(c >= 97 && c <= 122)
    {
        c -= 32;
        printf("%c", c);
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
                    printf("%c", av[i][j]);
                }
                else if(av[i][j] <= 97 || av[i][j] >= 122)
                {
                    printf("%c", av[i][j]);
                }
                j++;
            }
            i++;
        }
        printf("\n");
    }
    else if(ac == 1)
    {
        printf("* LOUD AND UNBEARABLE FEEDBACK NOISE *\n");
    }
}

int main(int argc, char **argv)
{
    switch_to_apper(argv, argc);
    return (0);
}
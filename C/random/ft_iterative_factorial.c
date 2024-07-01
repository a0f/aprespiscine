// add header

//remove this
#include <stdio.h>

int ft_iterative_factorial(int nb)
{   
    int freturn;

    freturn = 1;
    while (nb > 1)
    {
        freturn *= nb;
        nb--;
    }
    return (freturn);
}

int main(void)
{
    int i;

    i = 4;

    printf("%i\n", ft_iterative_factorial(i));
}

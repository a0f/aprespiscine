// do header

// get rid
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    int result;

    result = 1;
    if (power < 0)
    {
        return (0);
    }
    if (power == 0)
    {
        return (1);
    }
    return (result *= nb * ft_recursive_power(nb, power - 1));
    
}

int main(void)
{
    int number;
    int power;

    number = 2;
    power = 12;

    printf("%i\n", ft_recursive_power(number, power));
}

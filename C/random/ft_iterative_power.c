
//get rid
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result;

    result = 1;
    if (power < 0)
    {
        return (0);
    }
    while (power != 0)
    {
        result *= nb;
        power--;
    }
    return (result);
}

int main(void)
{
    int number;
    int power;

    number = 0;
    power = 0;

    printf("%i\n", ft_iterative_power(number, power));


}

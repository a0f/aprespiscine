#include <stdio.h>

int ft_atoi(char *str)
{
    int i;
    int value;
    int sign;
    int sc;

    i = 0;
    value = 0;
    sign = 1;
    sc = 0;
    while (str[i] == ' ')
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign = -1;
        sc++;
        i++;
    }
    if (str[i] == '+')
    {   
        sc++;
        i++;
    }
    if (sc > 1)
    {
        return 0;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        value = (value * 10) + (str[i] - '0');
        i++;
    }
    return (value * sign);
}

int main(void)
{
    char s1[] = "geeksforgeeks";

    printf("%i", ft_atoi(s1));
}

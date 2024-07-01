// CHECK EVERYTHING. DONE FROM HOME.
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_ptnbr(int nbr)
{
    char c;
    // check if negative, make positive tho
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr *= -1;
    }
    // recursivly call until nbr single digit
    if(nbr >= 10)
    {
        ft_ptnbr(nbr / 10);
    }
    // on the way back up, get remainders
    c = (nbr % 10) + '0';
    write(1, &c, 1);

}

int main(void)
{
    int number;
    number = 10;
    ft_ptnbr(number);
}

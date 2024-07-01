#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

// DEAR GOD REMOVE STDIO AND CHECK FOR FORBIDDEN FUNCTIONS
// AND ADD HEADER

int ft_strlen(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0')
    {
        counter++;    
    }
    return (counter);
}
char	*ft_strcpy(char *str)
{
	char	*dest;
	int	length;
    int i;

    length = ft_strlen(str);
    i = 0;
	dest = (char *)malloc((length + 1) * (sizeof(char)));
	if (dest == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
struct s_stock_str  *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *str;
    int i;
    int j;
    
    i = 0;
    j = 0;
    str = (t_stock_str *)malloc((ac + 1) * (sizeof(t_stock_str)));
	if (str == 0)
		return (NULL);
	i = 0;
    while (i < ac)
    {
        str[i].size = ft_strlen(av[i]);
        str[i].str = av[i];
        str[i].copy= ft_strcpy(av[i]);
        i++;
    }
    str[i].size = 0;
	str[i].str = NULL;
	str[i].copy = NULL;
    return (str);
}
void    ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_ptnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        ft_putstr("-2147483648");
        return;
    }
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
    }
    if (nbr > 9)
    {
        ft_ptnbr(nbr / 10);
    }
    ft_putchar(nbr % 10 + '0');
}
void ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while (par[i].str != NULL)
    {
        ft_ptnbr(par[i].size);
        write(1, "\n", 1);
        ft_putstr(par[i].str);
        write(1, "\n", 1);
        ft_putstr(par[i].copy);
        write(1, "\n", 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    t_stock_str *stock;

    stock = ft_strs_to_tab(argc, argv);
    if (stock == NULL)
    {
        printf("lol no memory.\n");
        return 1;
    }
    ft_show_tab(stock);

    return 0;
}


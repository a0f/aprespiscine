#include <unistd.h>

void ft_writenum(char a, char b, char c)
{
    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &c, 1);
}

void ft_formatter(char a, char b, char l)
{   
    if (l != '7')
    {
    write(1, &a, 1);
    write(1, &b, 1);
    }
}

void ft_counter(char l, char m, char r)
{
      while (l < '7' + 1)
      {
      while (m < '8' + 1)
      { 
      while (r < '9' + 1)
      {   
          ft_writenum(l, m, r);
          ft_formatter(',', ' ', l);
          r++;
      }
      m++;
      r = m + 1;
      }
      l++;
      m = l;
      }
}

void ft_print_comb(void)
{  
    char l;
    char m;
    char r;

    l = '0';
    m = '1';
    r = '2';

    ft_counter(l, m, r);
}

int main(void)
{
    ft_print_comb();
}

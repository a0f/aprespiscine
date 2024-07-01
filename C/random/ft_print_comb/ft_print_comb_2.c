#include <unistd.h>

void ft_writenum(char a, char b, char c, char d)
{
    char space = ' ';

    write(1, &a, 1);
    write(1, &b, 1);
    write(1, &space, 1);
    write(1, &c, 1);
    write(1, &d, 1);
}

void ft_formatter(char a, char b, char ll, char lr)
{   
    if (ll != '9' || lr != '9')
    {
    write(1, &a, 1);
    write(1, &b, 1);
    }
}

void ft_counter(char ll, char lr, char rl, char rr)
{  
    while (ll < '9' + 1)
    {
    while (lr < '9' + 1)
    {
    while (rl < '9' + 1)
    {
    while (rr < '9' + 1)
    {
      ft_writenum(ll, lr, rl, rr);
      ft_formatter(',', ' ', ll, lr);
      rr++;
    }
    rl++;
    rr = '0';
    }
    lr++;
    // my first idea set rl to 0
    // but rl needs to always stay with ll
    // and rr just needs to increment
    rl = ll;
    rr = lr + 1;
    }
    ll++;
    lr = '0';
    rl = ll;
    rr = ll;
    }
}

void ft_print_comb(void)
{
    char rr;
    char rl;
    char lr;
    char ll;

    rr = '1';
    rl = '0';
    lr = '0';
    ll = '0';

    ft_counter(ll, lr, rl, rr);
}

int main(void)
{
    ft_print_comb();
}

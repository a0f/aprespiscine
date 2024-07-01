#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int cash;
    do
    {
        cash = get_int("Change owed: ");
    }
    while (cash < 1);

    int coins = 0;

    // quartars 25
    while (cash >= 25)
    {
        cash = cash - 25;
        coins = coins + 1;
    }

    // dimes 10
    while (cash >= 10)
    {
        cash = cash - 10;
        coins = coins + 1;
    }
    // nickles 5
    while (cash >= 5)
    {
        cash = cash - 5;
        coins = coins + 1;
    }
    // pennies 1
    while (cash >= 1)
    {
        cash = cash - 1;
        coins = coins + 1;
    }

    printf("%i\n", coins);
}

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int x);

int main(void)
{
    int number = 1234567;

    printf("Sum of all digits: %i\n", sum(number));
}

int sum(int x)
{
    if (x < 10)
    {
        return x;
    }

    int newnumber = x % 10;

    x = x / 10;

    // newnumber is being returned. then for every instance of sum(x) until the base case
    // is hit, the newnumber is being returned to the same pile as well. so they all get added.
    return newnumber + sum(x);
}

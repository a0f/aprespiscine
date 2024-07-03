#include <cs50.h>
#include <stdio.h>

int collatz(int x);

int steps = 0;

int main(void)
{
    collatz(5);
    printf("Steps: %i\n", steps);
}

int collatz(int x)
{
    // base case
    if (x == 1)
    {
        return 0;
    }
    // even case
    if (x % 2 == 0)
    {
        steps++;
        x = collatz(x / 2);
    }

       // odd case - IMPORTANT to use an else if.
    else if (x % 2 != 0)
    {
        steps++;
        x = collatz((3 * x) + 1);
    }

    return steps;
}

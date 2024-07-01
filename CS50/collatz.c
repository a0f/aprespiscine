#include <cs50.h>
#include <stdio.h>

int collatz(int x);

int main(void)
{
    printf("Steps: %i\n", collatz(21));
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
        return 1 + collatz(x / 2);
    }

       // odd case - IMPORTANT to use an else if.
    else if (x % 2 != 0)
    {
        return 1 + collatz((3 * x) + 1);
    }
    return 0;
}

// in a recursive function all cases including the base case are returning a value into the function itself.

// When x == 1, the function returns 0. This value is then returned to the previous call
// which adds 1 to it and returns the result to the call before that, and so on.
// This process continues until the original call to collatz returns the final count.
// So, the return 0; in the base case doesn't overwrite the count
// it just signals the end of the recursion and starts the process of adding up the steps.

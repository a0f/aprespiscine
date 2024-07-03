#include <cs50.h>
#include <stdio.h>

int factorial(int x);

int main(void)
{
    int calc = factorial(10);
    printf("%i\n", calc);
}

int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }

    int result = x * factorial(x - 1);

    // each instance of the factorial() function computes its own result and passes it back to the previous instance until the final result is computed.
    //This process involves multiple calls to the function, and each call operates independently of the others until it returns a value.

    // So it makes a branching tree down until all base cases are resolved, then it takes the results and passes them to the previous brach
    // until its back at the top again

    // each function automatically returns the value calculated to the previous function

    return result;
}

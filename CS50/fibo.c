#include <cs50.h>
#include <stdio.h>
#include <string.h>

int fibo(int x);

int main(void)
{
    int calc = fibo(10);
    printf("%i", calc);
}

int fibo(int x)
{
    // in this function, there are multiple bases BECAUSE
    // there are multiple cases where you DONT want to call
    // the function again.
    // in the case of x == 0, you want to return 0. because the 0th case of fibo sequence, x = 0
    // in the case of x == 1, you want to return one, because in the 1th case of fibo sequence, x = 1


    if (x == 0)
    {
        return 0;
    }
    if (x == 1)
    {
        return 1;
    }

    int fibocalc =  fibo(x - 1) + fibo(x - 2);
    // in BOTH of these cases, fibo(x - 1) + fibo(x - 2) are going down the chain UNTIL they hit a base case
    // when that is hit, they return a value. then that value is passed up the chain.
    // and they are added all the way up the chain
    // https://miro.medium.com/v2/resize:fit:720/format:webp/1*svQ784qk1hvBE3iz7VGGgQ.jpeg


    return fibocalc;
}

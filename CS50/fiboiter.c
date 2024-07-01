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
    // need to add 1 to the index, since f10 is the 11th iteration
    int fibo[x+1];

    // set the first two of the sequence
    fibo[0] = 0;
    fibo[1] = 1;


    // current index = previous and 2nd previous index.
    for (int i = 2; i < x + 1; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    // return target index only.
    return fibo[x];
}

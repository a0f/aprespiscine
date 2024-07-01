#include <stdio.h>

int summation(int num);

int main(void)
{
    int target = 8;

    printf("%i\n", summation(target));
}

int summation(int num)
{
    int sum = 0;

    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }

    return sum;
}

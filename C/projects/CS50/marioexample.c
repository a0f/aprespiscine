#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get size of grid
    int n;
    do // do while loop. do is excecuted based on the while condition (do n=get_int while n < 1)
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // Print an n-n grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

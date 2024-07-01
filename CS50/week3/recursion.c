#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    // if nothing to draw, dont call draw
    // example of a base case
    if (n <= 0)
    {
        return;
    }

    // print pyramid of height - 1
    draw(n - 1);

    // print one more row
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}

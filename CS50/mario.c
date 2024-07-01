#include <cs50.h>
#include <stdio.h>

void print_row(int length); // prototype functions to feed to main
void print_blocks(int length);

int main(void)
{
    // asks for height, but only will move on if height is 1 or greater, otherwise asks again
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);

    // print the pyramid -> height = height, but spaces = height minus index + 1 for starting at 0 index
    for (int i = height; i > 0; i--)
    {
        print_row(i - 1);
        print_blocks(height - i + 1);
    }
}
// handles printing spaces and # blocks based on variable given.
void print_row(int length)
{
    for (int i = 0; i < length; i++)
    {
        printf(" ");
    }
}

void print_blocks(int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("#");
    }
    printf("\n");
}

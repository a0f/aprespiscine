#include <cs50.h>
#include <stdio.h>

void print_row(int length); // func prototype required, void is acceptable (is on original as well so need)

int main(void)
{
    int height = get_int("Height: ");

    for (int i = 0; i < height; i++)  // does below, stops at height.
    {
        print_row(i + 1);          // prints row based on current index number, then loops back and adds 1 to index
    }
}

void print_row(int length) //void is what it returns to you (we dont need a return here)
{
    for (int i = 0; i < length; i++)
    {
        printf("#");
    }
    printf("\n");
}

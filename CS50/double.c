#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int size = get_int("Enter size: ");
    int sequence[size];

    sequence[0] = 1;
    printf("%i\n", sequence[0]);

    for (int i = 1; i < size; i++)
    {
        sequence[i] = sequence[i-1] * 2;
        printf("%i\n", sequence[i]);
    }
}

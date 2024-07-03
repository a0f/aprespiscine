#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? ");

    if (c == 'y' || c == 'Y') //** When using single characters, USE SINGLE QUOTES.
    {
        printf("Agreed.\n"); //** When using multiple characters, USE DOUBLE QUOTES.
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}


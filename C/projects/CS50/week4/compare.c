#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = get_int("i: ");
    int j = get_int("j: ");

    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    string x = get_string("x: ");
    string y = get_string("y: ");

    if (x == y)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    printf("Look at the addresses: %p", &x);
    printf("They are different: %p", &y);
    printf("This is what you are trying to compare");

    // will always be different... even in the case of

    char *xx = get_string("*xx: ");
    char *yy = get_string("*yy: ");

    if (xx == yy)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    // this is because really, its asking for the address and comparing those, which will always be different.
    // because thats what char *var is asking for, and they will always be stored in different parts of memory

    char *m = get_string("m: ");
    char *l = get_string("l: ");

    if (strcmp(m, l) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    // strcmp works by comparing the strings char by char, not the address.
}

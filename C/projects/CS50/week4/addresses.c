#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%c", s[0]);
    printf("%c", s[1]);
    printf("%c\n", s[2]);

    //can instead do pointer arithmetic
    // since s is the address of the first char in the string...

    printf("%c", *s);
    printf("%c", *(s + 1));
    printf("%c\n", *(s + 2));

    // ends up as same thing.
    // the array syntax s[1] is "syntactic sugar" for *(s + 1)
}

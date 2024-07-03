#include <stdio.h>

int main(void)
{
    // to get an int without cs50's get_int...
    int n;
    printf("n: ");
    // gotta pass by reference here, so that scanf can go to that address and actually change it
    // otherwise it would be a copy
    scanf("%i", &n);
    printf("n: %i\n", n);

    char s[4]; // in this case, s is already an address since a string is just the address
             // of the first char in the string, then chars after till it hits null term.
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);

    // without  char s[4] (char *s instead), this would seg fault
    // because you haven't initialized s, and without initializing and calling malloc
    // malloc would make a valid address.
    // s could be a bunch of random garbage values
    // s is not a valid address, and you're now touching memory you shouldn't have

    // with char s[4];, we have a fixed amount of memory though
    // if the string is longer, it will seg fault again
    // can do char s[4000]; but can still go over it
    
}

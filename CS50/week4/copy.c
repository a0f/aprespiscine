#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Get a string
    string s = get_string("s: ");

    // Copy string's address
    string t = s;

    // Capitalize first letter in string
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print string twice
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // in this case, since we set t = s...
    // and essentially that means char *s = char *t...
    // both are pointers, pointing to the same address in memory
    // so it uppercases it for both, since both are accessing the same thing.

    // we can fix this by creating a duplicate space in memory for it and modifying it there

    // Get a string
    char *x = get_string("x: ");

    // Allocate memory for another string
    // malloc asks for a certain amount of bytes in memory that the program can use
    // malloc therefore returns the first address of the new chunk of memory
    char *y = malloc(strlen(x) + 1);
    // asks for the bytes for whatever the string length is, + 1 for null char
    if (y == NULL)
    {
        return 1;
    }
    // if malloc returns NULL, it means there is not enough memory availible
    // this is basically saying if there is not enough memory availible, abort program early


    // Copy string into memory char by char, including '\0' which means <= n not just <
    for (int i = 0, n = strlen(x); i <= n; i++)
    {
        y[i] = x[i];
    }
    // another way of copying is the following
    strcpy(y, x);

    // Capitalize copy
    y[0] = toupper(y[0]);

    // Print strings
    printf("x: %s\n", x);
    printf("y: %s\n", y);

    free(y);
    return 0;

    // so since malloc is storing something in memory, when you are done with the program in C
    // you have to tell the program to free that memory
    // or else over time the computer running buggy code will run out of memory/slow down/crash

    // side node, get_string in cs50 free's it for you. therefore do NOT free memory with get_string
}



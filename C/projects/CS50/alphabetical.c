#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    string phrase = get_string("Enter a phrase: ");

    for (int i = 0, length = strlen(phrase); i < length; i++)
    {
        phrase[i] = toupper(phrase[i]);
        // printf("%i\n", phrase[i]); for testing
        if (phrase[i] < phrase[i-1])
    {
        printf("%s", phrase);
        printf(" is NOT in alphabetical order. Stopping\n");
        exit(1);
    }
    }
    printf("%s", phrase);
    printf(" is in alpabetical order.\n");
}

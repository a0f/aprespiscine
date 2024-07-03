#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
bool only_digits(string input);
char rotate(char c, int n);

//change this so that it runs command line arguments
int main(int argc, string argv[])
{
    if (argc < 2 || argc > 2 || only_digits(argv[1]) == true)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (argc > 1 || only_digits(argv[1]) == false)
    {
        int key = atoi(argv[1]);
        // printf("key: %i\n", key);

        string plaintext = get_string("plaintext: ");
        // printf("plaintext: %s\n", plaintext);

        for (int i = 0, length = strlen(plaintext); i < length; i++)
        {
            if (i == 0)
            {
                printf("ciphertext: ");
            }

            int x = rotate(plaintext[i], key);
            printf("%c", x);

            if (i == length - 1)
            {
                printf("\n");
            }
        }

        return 0;
    }

    //convert argv[1] to an int. (check document for implementation)

}

//add only_digits function which returns true if a string only contains digits 0-9, else returns false
bool only_digits(string input)
{
    bool isdigits = false;

    for (int i = 0, length = strlen(input); i < length; i++)
    {
        // this is checking if it is not isdigit, doesn't require a = sign.
        if (!isdigit(input[i]))
        {
            isdigits = true;
        }
    }
        return isdigits;
}

//one function (called rotate) to change a lower case letter to a lowercase letter (check doc for implementation)
char rotate(char c, int n)
{
    int r = c;

    if (isalpha(c))
    {
        if (isupper(c))
        {
            r = (((c - 65) + n) % 26) + 65;
        }
        else if (islower(c))
        {
            r = (((c - 97) + n) % 26) + 97;
        }

    }
    return r;
}

// add uppercase eventually

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool only_digits(string input);
char rotate(char c, int n);

// gets ready to take in an additional command line argument
int main(int argc, string argv[])
{
    // stops code and returns 1 if only_digits = false
    if (argc < 2 || argc > 2 || only_digits(argv[1]) == true)
    {
        printf("Usage: ./caesar key\n");

        return 1;
    }
    // runs enclosed code if only_digits = true
    else if (argc > 1 || only_digits(argv[1]) == false)
    {
        int key = atoi(argv[1]);

        string plaintext = get_string("plaintext: ");

        int length = strlen(plaintext);

        // sets characrters of ciphertext at index. +1 is so it checks NULL
        // aswell.
        char ciphertext[length + 1];

        // iterates over plaintext and rotates based on key input
        // takes [i]char in plaintext, rotates, puts it at corresponding [i]char
        // in ciphertext
        for (int i = 0; i < length; i++)
        {
            ciphertext[i] = rotate(plaintext[i], key);
        }

        //  sets the null terminator at given length of the array (end of the
        //  array)
        ciphertext[length] = '\0';

        printf("ciphertext: %s\n", ciphertext);

        return 0;
    }
}

// func returns false if string has characters outside digits (0-9)
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

// function changes given char (c) according to caesar cipher key (n)
char rotate(char c, int n)
{
    int r = c;
    // if c is alphabetical then...
    if (isalpha(c))
    {
        // checks if uppercase, ciphers it, and maintains case based on ASCII
        // value
        if (isupper(c))
        {
            r = (((c - 65) + n) % 26) + 65;
        }
        // checks if lowercase, ciphers it, and maintains case based on ASCII
        // value
        else if (islower(c))
        {
            r = (((c - 97) + n) % 26) + 97;
        }
    }
    return r;
}

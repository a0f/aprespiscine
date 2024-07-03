// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string input);

int main(int argc, string argv[])
{
    // command line feedback if entered incorrectly, return 1
    if (argc != 2)
    {
        printf("Usage: ./no-vowels \"text\"""\n");

        return 1;
    }
    // otherwise, run program, return 0 at end
    else
    {
        string leet = replace(argv[1]);

        printf("%s\n", leet);
    }
}

// func replace-> takes string, returns string
// change vowels to numbers. check sheet.

string replace(string input)
{
    for (int i = 0, length = strlen(input); i < length; i++)
    {
        switch (input[i])
        {
            case 65:
            case 97:
                input[i] = 54;
                break;

            case 69:
            case 101:
                input[i] = 51;
                break;

            case 73:
            case 105:
                input[i] = 49;
                break;

            case 79:
            case 111:
                input[i] = 48;
                break;
        }
    }
    return input;
}

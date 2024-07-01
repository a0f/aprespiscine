#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
        if (input[0] == '\0')
        {
            return 0;
        }
        int length = strlen(input);

        int converted = 0;

        if (input[0] != '\0')
        {
            input[length] = '\0';

            converted = (convert(input) * 10) + (input[length] - 48);

        }
        return converted;

}

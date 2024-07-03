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
    // Base case: If the input string is empty, return 0
    if (input[0] == '\0')
    {
        return 0;
    }

    // Recursive case: Remove the last character, convert the rest, and add the last character to the result
    int length = strlen(input);
    int lastDigit = input[length - 1] - 48; // Convert the last character to an integer
    input[length - 1] = '\0'; // Remove the last character

    // Recursive call to convert the rest of the string
    int converted = convert(input);

    // Calculate the final result by adding the last digit
    return converted * 10 + lastDigit;
}

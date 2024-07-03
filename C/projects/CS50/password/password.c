// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int lower = 0;
    int upper = 0;
    int digit = 0;
    int symbol = 0;

    for (int i = 0, length = strlen(password); i < length; i++)
    {
        if (isalpha(password[i]) != 0)
        {
            if (islower(password[i]) != 0)
            {
                lower += 1;
            }
            if (isupper(password[i]) != 0)
            {
                upper += 1;
            }
        }

        if (isdigit(password[i]) != 0)
            {
              digit += 1;
            }

        if ((password[i] > 20 && password[i] < 48)
            || (password[i] > 57 && password[i] < 65)
            || (password[i] > 90 && password[i] < 97)
            || (password[i] > 122 && password[i] < 127))
            {
                symbol += 1;
            }
    }

        if (lower == 0 || upper == 0 || digit == 0 || symbol == 0)
        {
            return false;
        }
        return true;
}

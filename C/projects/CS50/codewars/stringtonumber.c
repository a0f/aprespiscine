#include <cs50.h>
#include <stdio.h>
#include <string.h>

int convert(string x);

int main(void)
{
    string example = "-1234";

    printf("%i\n", convert(example));
}

int convert(string x)
{
    int output = 0;

    int mod = 1;

    for (int i = 0, length = strlen(x); i < length; --length)
    {
        if (x[0] == '-')
        {
            output += ((x[length - 1] - '0') * mod);

            mod *= 10;

            if (length == 2)
            {
                output = output * -1;
                return output;
            }
        }
        else
        {
            output += ((x[length - 1] - '0') * mod);

            mod *= 10;
        }

    }

    return output;
}


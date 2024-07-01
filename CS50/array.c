#include <cs50.h>
#include <stdio.h>
#include <string.h>

int sumarray(int array1[], int length);

int main(void)
{
    int array1[] = {1, 2, 3, 4, 5, 6, 7};

    // this gets the length of an array
    int length = sizeof(array1) / sizeof(array1[0]);


    printf("%i\n", sumarray(array1, length));
}

int sumarray(int array1[], int length)
{
    if (length == 0)
    {
        return 0;
    }

    int sumdigits = array1[length - 1];

    //arrays are not null terminated. so cant do the usual = '\0'
    // but we can just do length which is simpler anways.
    --length;

    return sumdigits + sumarray(array1, length);
}

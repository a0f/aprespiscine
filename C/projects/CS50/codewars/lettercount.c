#include <stdio.h>
#include <string.h>
void lettercount(char* x);

const int array_size = 26;

char letters[26]; // Array to hold 26 letters
int count[26]; // Array to hold 26 counters

int main(void)
{
    char input[20];

    // Initialize letters from 'a' to 'z'
    for (int i = 0; i < 26; i++) {
        letters[i] = 'a' + i; // Assigning each letter in sequence
    }
    for (int i = 0; i < 26; i++) {
        count[i] = 0; // Initilize corresponding array at 0 for each letter
    }

    // prints below
    printf("Input: ");

    // waits for user input and stores it
    // as string to input
    scanf("%s", input);

    lettercount(input);

    return 0;
}

void lettercount(char* x)
{
    int lengthx = strlen(x);

    // iterate over loop
    for (int i = 0; i < lengthx; i++)
    {
        for (int j = 0; j < array_size; j++)
        {
        if (x[i] == letters[j])
        {
            count[j] += 1;
        }
        }
    }
    printf("Output: \n");
    for (int z = 0; z < array_size; z++)
    {
        if (count[z] > 1)
        {
            printf("%c: %i\n", letters[z], count[z]);
        }
    }
}


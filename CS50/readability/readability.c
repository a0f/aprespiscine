#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

// grade level calculator function prototype
int gradelevel(string text);

int main(void)
{
    // prompt for text input and convert to string
    string text = get_string("Text: ");

    // runs function for given string of text
    int average = gradelevel(text);

    if (average < 1)
        printf("Before Grade 1\n");
    if (average > 1 && average < 16)
        printf("Grade %i\n", average);
    if (average > 16)
        printf("Grade 16+\n");
}

// grade level calculator function
int gradelevel(string text)
{
    // need to initialize 3 variables, letters, words, and sentences.
    float wordtotal = 0;
    float lettertotal = 0;
    float sentencetotal = 0;

    for (int i = 0, length = strlen(text); i < length; i++)
    {
        // calc lettertotal, checks for ascii lowercase and uppercase values a-z
        if ((text[i] > 64 && text[i] < 91) || (text[i] > 96 && text[i] < 123))
        {
            lettertotal += 1;
        }

        // calc word total based on amount of spaces (wordtotal will be missing
        // 1 for last word.)
        if (text[i] == 32)
        {
            wordtotal += 1;
        }

        if (text[i] == 33 || text[i] == 46 || text[i] == 63)
        {
            sentencetotal += 1;
        }
    }
    // adds 1 to word total -> or else last word will be lost.
    wordtotal += 1;

    // these calculate average Letters and Sentences per 100 words respectively
    float L = (lettertotal / wordtotal) * 100;
    float S = (sentencetotal / wordtotal) * 100;
    // calculates Coleman-Liau index and rounds it to nearest interger
    float gradelevelcalc = round((0.0588 * L) - (0.296 * S) - 15.8);
    // returns the value into the function as a int since specified above
    return gradelevelcalc;
}

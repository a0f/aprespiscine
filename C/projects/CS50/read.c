#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int gradelevel(string text);

int main(void)
{
    //prompt for text input to string
    string text = get_string("Text: ");

    //calc average letters per word.


    //print average words
    int average = gradelevel(text);

    if (average < 1)
    printf("Before Grade 1\n");
    if (average > 1 && average <16)
    printf("Grade %i\n", average);
    if (average > 16)
    printf("Grade 16+\n");

}

int gradelevel(string text)
{
    // need 3 variables, letters, words, and sentences.
    float wordtotal = 0;
    float lettertotal = 0;
    float sentencetotal = 0;



    for (int i = 0, length = strlen(text); i < length; i++)
    {
        // calc lettertotal
        if ((text[i] > 64 && text[i] < 91) || (text[i] > 96 && text[i] < 123))
        {
            lettertotal += 1;
        }

        // calc word total.
        if (text[i] == 32)
        {
        wordtotal += 1;
        }

        if (text[i] == 33 || text[i] == 46 || text[i] == 63)
        {
            sentencetotal += 1;
        }
    }
    // plus 1 word for the end.
    wordtotal += 1;
    printf("%f lettertotal\n", lettertotal);
    printf("%f sentencetotal\n", sentencetotal);
    printf("%f wordtotal\n", wordtotal);
    float L = (lettertotal/wordtotal) * 100;
    float S = (sentencetotal/wordtotal) * 100;
    printf("%f L100\n", L);


    printf("%f S100\n", S);


    float gradelevelcalc = round((0.0588 * L) - (0.296 * S) - 15.8);


    return gradelevelcalc;
}

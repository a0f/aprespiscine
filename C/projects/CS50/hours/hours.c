#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int length, int weeks, char output);

int main(void)
{
    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    int length = sizeof(hours) / sizeof(hours[0]);

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');


    printf("%.1f hours\n", calc_hours(hours, length, weeks, output));
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int length, int weeks, char output)
{
    // initialize return variable
    float hourscalc = 0;

    // if output = T, add hours then return
    if (output == 'T')
    {
        for (int i = 0; i < length; i++)
        {
            hourscalc += hours[i];
        }
        return hourscalc;
    }

    // if = A selected, add hours, divide by weeks, return
    if (output == 'A')
    {
        for (int i = 0; i < length; i++)
        {
            hourscalc += hours[i];
        }
        hourscalc = hourscalc/length;
    }
    return hourscalc;
}

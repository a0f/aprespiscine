// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, float tip); // we defined the function so we can use it in main

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_float("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent)); // we used the function
}

// TODO: Complete the function
float half(float bill, float tax, float tip) // we built this function (functionality)
{
    float taxbill = (bill * (tax / 100)) + bill;

    float tipbill = (taxbill * (tip / 100)) + taxbill;

    float half = tipbill / 2;

    return half;
}

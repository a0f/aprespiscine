#include <cs50.h>
#include <stdio.h>
int add(int a, int b);

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    int z = add(x, y); // uses the add function to add x and y
    printf("%i\n", z);  // %i tells it to expect and interger, %s would be for strings
} // SCOPE is when the variables defined only exist within a specific context
    // in this case. x y and z only really erxist within lines 6-12 here. trying to call them outside wont work (undeclared)

int add(int a, int b) // the add function simply adds two variables, whatever they are.
{
    return a + b;
}

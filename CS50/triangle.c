#include <cs50.h>
#include <stdio.h>
bool valid_triangle(float x, float y, float z);

int main(void)
{
    float side1;
    float side2;
    float side3;
    do {
    side1 = get_float("Side 1 Length: ");
    }
    while (side1 <= 0);
    do {
    side2 = get_float("Side 2 Length: ");
    }
    while (side2 <= 0);
    do {
    side3 = get_float("Side 3 Length: ");
    }
    while (side3 <= 0);

    int triangle_check = valid_triangle(side1, side2, side3);

    if (triangle_check == 1)
    {
        printf("True\n");
    }
    else if (triangle_check == 0)
    {
        printf("False\n");
    }
}

bool valid_triangle(float x, float y, float z)
{
    bool result;
    if ((x + y) <= z)
    {
        result = false;
    }
    else if ((y + z) <= x)
    {
        result = false;
    }
    else if ((x + z) <= y)
    {
        result = false;
    }
    else
    {
        result = true;
    }
    return result;
}

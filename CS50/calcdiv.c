// Type casting

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    int x = get_int("x: ");

    // Prompt user for y
    int y = get_int("y: ");

    // Divide x by y
      //float z = x / y; this doesnt work because of truncation. x and y are both int's still
      // so it discards anything after the decimal, because it gets truncated. you see more 0's, but its thrown away
    float z = (float) x / (float) y; // therefore we have to convert the int to a float.
                                    // a float divided by float will always give a float
    printf("%f\n", z); // %.nf will give you decimal points to the n. so %.5f will give you 5 decimal places
}   // interesting, 1/3 at 20 decimal places will not be .33 repeating, but it will go to 34267 etc randomly
    // because of limited memory, it gets as close as possible
    // if you use double to allocate more bits/numbers/memory, it will repeat 3 for longer but still will mess up eventually
    // this is FLOATING-POINT IMPRECISION
    // you need infinite memory to be precise, which is impossible

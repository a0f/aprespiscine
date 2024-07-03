#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = 50;
    printf("%i\n", n);

    //%p is a pointer. and & giving us the address of n
    //pointer is an address of a variable that you can store.
    // you can also call it as such

    int *p = &n; //this is saying give me a variable called p, that stores an address
    // you always start with int *var, then = &othervar is whatever's address you are storing

    printf("%p\n", &n); // will print the above.

    // can also go backwards, see what is at an address and show/access what is there
    // p is therefore like a treasure map
    printf("%i\n", *p);

    //IMPORTANT SYNTAX
    // int *p without specifying a type is getting ready to store/declare a pointer
    // *p literally just means go to/go there. going to perform something.

    // whitespace does not matter.
    // int *p is conventional
    // int * p is also used
    // int* p is also used

    //so...

    string s = "example"; // in cs50.h (doesnt work without it)\


    // is the SAME as

    char *s= "example";

    // since both are a pointer finding the first address of the string (first char)
    // and then assuming every char after is in that string until the null terminator is hit


}

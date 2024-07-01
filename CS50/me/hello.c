#include <cs50.h>
#include <stdio.h> // (library) find standard io.h, copy and part it here, so I know standard declarations

int main(void)
{
    string answer = get_string("Whats your name? ");
    printf("hello, %s\n", answer);
}

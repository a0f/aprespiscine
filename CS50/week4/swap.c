#include <stdio.h>

void swap(int a, int b);
void swapgood(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);

    printf("x is %i, y is %i\n", x, y);

    //now you have to pass in the address
    swapgood(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}


// this is passing by value, where the function is getting copies of x and y
void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
// because the function goes ontop of the bottom of the computers memory (the stack)
// when main calls swap, swap goes above it on the stack
// when swap is returned, the memory of what happened within swap goes away

// in this case, main has 2 variables x = 1 and y = 2
// swap is called which takes inputs a and b
// swap is using its memory as room for temp, room for a, room for b

// since functions pass by value, a is a COPY of x, and b is a COPY of y
// the copies are stored different memory locations
// then we changed those values in that memory location

// then when swap returns, all of that work is gone because its in the wrong scope
// it was operated on copies, because it passed by values


// to fix this...
// INSTEAD you can pass by reference.
//

void swapgood(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
// in this case, here you are taking the addressed of intergers.
// *a means GOTO address at a, grab it
// so this is literally swapping the values in memory as stored in main
// tmp is still a variable in the function and that shit can go away at the end
// so we dont need to pass tmp by reference

// in a string, you would have to change the chars one char at a time at a certain address.



// considerations about stack and heap
// stack at bottom and grows up
// heap near top (not top though) and grows down

// if you call functions recursivly and too much, may grow up into the heap
// if you call malloc too much, may grow down into stack

// when heap and stack touch, bad things can happen :)

// can lead to...
// heap overflow
// stack overflow

// specific examples of buffer overflow -> means overflow of memory


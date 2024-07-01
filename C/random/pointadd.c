#include <stdio.h>

// Write a program in C to add two numbers using pointers.

int main(void)
{
  int num1 = 23;
  int num2 = 45;

  int *p1 = &num1;
  int *p2 = &num2;

  int sum = *p1 + *p2;

  printf("%i\n", sum);

}

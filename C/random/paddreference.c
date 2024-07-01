#include <stdio.h>

// Write a program in C to add numbers using call by reference.
// Use a function

int add(int *ptr1, int *ptr2)
{
  int sum = *ptr1 + *ptr2;

  return(sum);
}

int main(void)
{
  int num1, num2;

  num1 = 54;
  num2 = 25;
  
  int *p1 = &num1;
  int *p2 = &num2;

  printf("%i\n", add(p1, p2));

}


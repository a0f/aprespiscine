#include <stdio.h>


void swap(int *ptr1, int *ptr2, int *ptr3)
{
  int bufferptr = *ptr2;
  
  *ptr2 = *ptr1;
  *ptr1 = *ptr3;
  *ptr3 = bufferptr;

}

int main(void)
{
  int element1 = 5;
  int element2 = 6;
  int element3 = 7;

  int *p1 = &element1;
  int *p2 = &element2;
  int *p3 = &element3;
  
  swap(p1, p2, p3);

  printf("Element 1: %i\n", element1); 
  printf("Element 2: %i\n", element2);
  printf("Element 3: %i\n", element3);

}


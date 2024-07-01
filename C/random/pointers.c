#include <stdio.h>

int main(void){

  int age = 4;
  int *ptr;

  ptr = &age;

  printf("%p\n", ptr);
  printf("%i\n", *ptr);


  int x = 727; // Declare variable x
  int* ptr2 = &x; // Declare a pointer to an int variable and assign to it the address of variable x
  printf("%p\n", &x); // Print the address of x
  printf("%p\n", ptr2); // Print the address pointed to by ptr 
  printf("%i\n", *ptr2); // Dereferences the address and prints the contents
  

}


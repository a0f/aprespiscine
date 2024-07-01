#include <stdio.h>

// preprocessor directive to define macro
#define N 10

int main(void)
{
  // uninitialized array
  int uarray[10];

  // initializedarray, does not require size number
  int iarray[] = {1, 2, 3, 4, 5};

  // but you can include it
  int iarray2[5] = {1, 2, 3, 4, 5};

  // var size
  int arrayvar[N];

  // for an initialized array, non-explicit elements will be 0
  // in this case all numbers after 3 are set to 0
  int numbers[100] = {1, 2, 3};

  // in this case all elements in the array are set to 0
  int zeroes[20] = {0};

  /* we can also designate specific indexes to be initalized
   * numbers in brackets here are said to be "designators"*/
  int a[15] = {[2] = 29, [9] = 7, [14] = 48};
  
  // additionally, order of designators does not matter
  int b[15] = {[14] = 29, [9] = 7, [12] = 48};

  /* for a non-initialized array, the compiler will deduce
   * length from the largest index  value +1 
   * this example would be length = 15 */
  int c[] = {[14] = 29, [9] = 7, [12] = 48};

  // you can mix and match the above rules
  int d[10] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6};

  // subscripting to access particular element in array
  printf("%i\n", iarray[3]);

  // exit 
  printf("Exiting.\n");
  return 0;
}

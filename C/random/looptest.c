#include<stdio.h>

int main() {
  double arr[] = {1.0, 8, 2.27, 16.2, 2, 3.14, 12.6, 1.62, 6.54, 9, 11};
  int len = sizeof(arr)/sizeof(double);
  
  // Checkpoint 1 code goes here.
  
  printf("%i\n", len);

  // Checkpoint 2 code goes here.
  int i = 0;
  while (i < len)
  {
    printf("%f\n", arr[i]);
    i++;
  }
}

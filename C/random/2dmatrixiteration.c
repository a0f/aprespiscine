#include<stdio.h>

int main() {
  int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}}; 

  // sets sum var
  int sum = 0;


  // finds length of rows
  int lenrow = sizeof(matrix)/sizeof(matrix[0]);
  // finds length of columns
  int lencol = sizeof(matrix[0])/sizeof(int);

  // sets var to iterate over rows
  int i = 0;
  while (i < lenrow)
  {
    // sets var to iterate over colums
    // ***needs to reset on every new row
    int y = 0;
    while (y < lencol)
    {
      sum+= matrix[i][y];
      y++;
    }
    i++;
  }
  printf("Total sum of array = %i\n", sum);
}

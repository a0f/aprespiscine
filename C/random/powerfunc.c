#include <stdio.h>

float average_age(int array[]);

int main(void)
{
  int ages[] = {14, 17, 18, 12, 14, 15, 15, 11, 13, 16};
  
  printf("%f\n", average_age(ages));
}

float average_age(int array[])
{
  int i, size, persons;
  float average;

  i = 0;
  average = 0;

  // this doesnt work because array is decayed to a pointer to the first element when within a function
  //
  size = sizeof(array) / sizeof(array[0]);
  
  
  persons = size;

  while(i >= 0)
  {
    average += array[i];
    i--;
  }

  average = (float)average / persons;

  return average;
}




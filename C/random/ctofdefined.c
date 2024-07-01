#include <stdio.h>

#define LOWER 0 //lower limit of table
#define UPPER 300
#define STEP 20

int main(void)
{
  int temp_f = 0;

  printf("*/Farenheit to Celcius Table/*\n");

  while (temp_f <= UPPER)
  {
    float temp_c = (5.0/9.0) * (temp_f-32);
    printf("%3dF = %6.2fC\n", temp_f, temp_c);
    temp_f += STEP;
  }
}

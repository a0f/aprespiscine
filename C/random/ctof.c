#include <stdio.h>

// function should print temp in c, 3 spaces, temp in f
void convert(int tempf)
{
  // (5/9) would = 0 cuz both are integers
  // 1 needs to be a float so it can = .55
  float tempc = (5.0/9.0) * (tempf - 32);
 
  /* for %x.yf, x refers to how many digits
   * wide the field is, and y refers to
   * for a float how many decimal places
   * it prints to for a given float*/
  printf("%3dF = %6.2fC\n", tempf, tempc);

}


int main(void)
{
  int temp = 0;
  printf("/*Fahrenheit-Celcius table*/\n");
  printf("----------------------------\n");
  while(temp <= 300)
  {
    convert(temp);
    temp += 20;
  }
  

  return 0;
}

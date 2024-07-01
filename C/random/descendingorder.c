#include <inttypes.h>
#include <stdio.h>

uint64_t descendingOrder(uint64_t n)
{
  int length = 0;
  int temp1 = n;
  int temp2 = n;
  
  while(temp1 != 0)
  {
    int digit = temp1 % 10;
    temp1 /= 10;
    length++;
  }

  int array[length];
  int i = 0;

  while(temp2 != 0)
  {
    int digit = temp2 % 10;
    temp2 /= 10;

    array[i] = digit;
    i++;
  }

  i = 0;
  while(i < length)
  {
    if(array[i] < array[i+1])
    {
      int buff = array[i];
      array[i] = array[i+1];
      array[i+1] = buff;
      i = 0;
    }
    else
    {
     i++;
    }
  
  }

  i = 0;
  while(i < length)
  {
    i++;
  }
   
  i = length - 1;
  int returnint = 0;
  int counter10 = 1;
  while(i >= 0)
  {
    int digit = array[i];
    returnint += digit * counter10;
    counter10 = counter10 * 10;
    i--;
  }

  uint64_t returnint1 = (uint64_t)returnint;

  return returnint1;
}

int main(void)
{
  int number = 836649;

  printf("%lu\n", descendingOrder(number));
}

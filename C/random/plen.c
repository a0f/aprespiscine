#include <stdio.h>

int main(void)
{
  char sentence[] = "The dog jumped over the box";

  char *ptr = &sentence[0];

  int counter = 0;

  while(*ptr != '\0')
  {
    counter++;
    ptr += 1;
  }

  printf("The length of the string is : %i\n", counter);
}

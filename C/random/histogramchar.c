#include <stdio.h>

#define IN 1
#define OUT 0

#define MAX_VALUE 26

int main(void)
{

  int c, i, counter, letter;

  int wlength[MAX_VALUE] = {0};
  
  i = 0;

  counter = 0;
  
  while((c = getchar()) != EOF)
    {
      if(c >= 65 && c <= 90)
      {
        letter = c - 65;
        wlength[letter] += 1;
      }
      else if(c >= 97 && c <= 122)
      {
        letter = c - 97;
        wlength[letter] += 1;
      }
      
    }
     

  i = 0;
  printf("Letter Frequency: ");

  while(i < MAX_VALUE)
  {
    printf(" %d", wlength[i]);
    i++;
  }
  printf("\n");

}

#include <stdio.h>

#define IN 1
#define OUT 0

#define MAX_WORD_LENGTH 20

int main(void)
{

  int c, i, counter, state;

  int wlength[MAX_WORD_LENGTH] = {0};
  
  i = 0;

  counter = 0;
  
  while((c = getchar()) != EOF)
    {
      // need to change to be everything but letters
      if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
      {
        // -1 because length starts at 1 (will never be a 0 length word)
        wlength[counter - 1] += 1;
        state = OUT;
        counter = 0;
      }
      else if (state == OUT)
      {
        state = IN;
        counter++;
      }
      else
      {
        counter++;
      }
    }
     

  i = 0;
  printf("Word Lengths: ");

  while(i < MAX_WORD_LENGTH)
  {
    printf(" %d", wlength[i]);
    i++;
  }
  printf("\n");

}

#include <stdio.h>

//read input into a line until \n (.eg. read a whole line)
//iterate over line, find amount of char
//if char > 80, print

#define MAXLINE 1000

int main(void)
{
  int c, i, counter;
  c = 0;
  i = 0;
  counter = 0;
  char line[MAXLINE]; // initializes a string of 1000

  while((c = getchar()) != EOF)
  {
    line[i] = c;
    i++;
    counter++;
    
    if(c == '\n') 
    {
      if(counter > 80)
      {
        line  = '\0';
        printf("%s", line);
      }

      i = 0;
      counter = 0;
    }
   }

}

  


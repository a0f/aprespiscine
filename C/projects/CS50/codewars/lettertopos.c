#include <stdio.h>
#include <stdlib.h>

// returned string has to be dynamically allocated and will be freed by the caller
char *alphabet_position(const char *text) {
 
  int length = 0;
  int i = 0;

  char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

  while(text[i] != '\0')
  {
    ++length;
    ++i;
  }

  char *ptr = (char*) malloc(100 * sizeof(char));

  char *ptrsave = ptr;
  
  if(ptr == NULL)
  {
    printf("Memory allocation failed. Exiting");
    exit(1);
  }

  while(*text != '\0')
  {
    if(*text > 64 && *text < 91 || *text > 96 && *text < 123) 
    {
      //sets counter, adds 1 cuz alphabet is values 1-26
      int counter = 0;
      ++counter;
      //counter -1 cuz index is 0-25
      while(text[counter] != alphabet[counter - 1])
      {
        ++counter;
      }
      
      *ptr = ;
      ++text;
      ++ptr;
    }
    else
    {
    *ptr = *text;
    ++ptr;
    ++text;
    }
  }

  printf("%s\n", ptrsave);


  return ptrsave;
}

int main(void)
{
  printf("%s", alphabet_position("The sunset sets at twelve o' clock."));
}

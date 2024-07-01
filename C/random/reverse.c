#include <stdio.h>

void reverse(char *string);

int main(void)
{
  char s1[] = "Hey this is definetely a string.";

  reverse(s1);

  int c, i;

  char input_buff[1000];

  i = 0;

  while((c = getchar()) != EOF)
  {
    if (c != '\n')
    {
      input_buff[i] = c;
      i++;
    }
    else if(c = '\n')
    {
      input_buff[i] = '\0';
      
    // run reverse function on string
    reverse(input_buff);

    i = 0;
    }
 
  }
}

void reverse(char *string)
{
  char *ptr1 = string;
  char buffer[1000];
  
  // int i will also be equal to length for second part
  int i = 0;

  // copies into buffer and gets length
  while(*string != '\0')
  {
    buffer[i] = *string;
  
    i++;
    string++;
  }
  //finish buffer string with null terminator
  buffer[i] = '\0';

  string = ptr1;

  while(i != 0)
  {
    *string = buffer[i - 1];

    i--;
    string++;
  }
  string = ptr1;

  //print reversed string.
  printf("%s\n", string);

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// lets make a program that dynamically allocates memory
// for a given input string


int main(void)
{
  char *ptr;
  int n; 
  char sentence[] = "Duck";

  n = strlen(sentence);

  ptr = (char*)malloc(n * sizeof(char));

  if (ptr == NULL) {
    printf("Memory not allocated, exiting.");
    return(1);
  }
  else {
    printf("Memory successfully allocated.");

  //  int i = 0;
  //  while(sentence[i] != '\0')
  //  {

  }

  free(sentence);
  
}



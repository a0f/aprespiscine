#include <stdlib.h>
#include <stdio.h>

// idea 1. create a function that can tie two strings together
// return a pointer to the new string


char *stringconc(char *string1, char *string2)
{
  // 1. find length of both strings combined
  
  int length = 0;
  int i = 0;
  while(string1[i] != '\0')
  {
    length++;
    i++;
  }
  i = 0;
  while(string2[i] != '\0')
  {
    length++;
    i++;
  }


  // 2. malloc a new array with that length
  char *concstring = (char*) malloc((length + 2) * sizeof(char));
  char *returnstr = concstring;

  if(concstring == NULL)
  {
    printf("Memory allocation failed.\n");
    exit(0);
  }


  // 3. iterate over both strings and combine in new array
  while(*string1 != '\0')
  {
    *concstring = *string1;
    ++concstring;
    ++string1;
  }
  
  // 3a. Add space between strings.
  *concstring = ' ';
  ++concstring;
  
  while(*string2 != '\0')
  {
   *concstring = *string2;
   ++concstring;
   ++string2;
   }


  return returnstr;
}

int main(void)
{
  char s1[] = "This is the first sentence.";
  char s2[] = "This is the second sentence.";

  char *ptr1 = &s1[0];
  char *ptr2 = &s2[0];



  char *ptr3 = stringconc(ptr1, ptr2);

  printf("%s", ptr3);
  printf("\n");
  ptr3 = stringconc(ptr3, ptr1);

  printf("%s\n", ptr3);

  free(ptr3);
}

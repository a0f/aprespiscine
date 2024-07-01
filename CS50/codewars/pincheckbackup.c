#include <stdbool.h>
#include <stdio.h>

bool validate_pin(const char *pin) {
    
    int counter = 0;
    // try this via null value after
    while (pin != NULL)
    { 
      printf("Checking : %i.\n", *pin);
      counter++;

      if ( *pin < 48 || *pin > 57)
      { 
        printf("Code must only be made up of digits.\n");
        return false;
      }

      pin++;
    }
    printf("Counter: %i\n", counter);
    if (counter != 4 && counter != 6)
    {
      printf("Code must be either 4 OR 6 digits long.\n");
      return false;
    }


    printf("New code successfully allocated\n");
    return true;

}

int main(void)
{
  char pin1[] = "1234";
  char pin2[] = "123456";
  char pin3[] = "a234";
  char pin4[] = "1234a7";

  validate_pin(pin4);
}

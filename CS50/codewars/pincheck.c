#include <stdbool.h>
#include <stdio.h>

bool validate_pin(const char *pin) {
    
    int counter = 0;
    // try this via null value after
    while (*pin != '\0')
    { 
      counter++;

      if ( *pin < 48 || *pin > 57)
      { 
        return false;
      }

      pin++;
    }
    if (counter != 4 && counter != 6)
    {
      return false;
    }


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

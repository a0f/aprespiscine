#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

size_t count_sheep(const bool sheep[/* count */], size_t count);

int main(void)
{
    bool sheep[25] = { true,  true,  true,  false,
  true,  true,  true,  true,
  true,  false, true,  false,
  true,  false, false, true,
  true,  true,  true,  true,
  false, false, true,  true };


  printf("%zu\n", count_sheep(sheep, 25));
}

size_t count_sheep(const bool sheep[/* count */], size_t count)
{
    int counter = count;
    for (int i = 0; i < count; i++)
    {
        if (sheep[i] == false || &sheep[i] == NULL)
        {
            counter--;
        }
    }
  return counter;
}

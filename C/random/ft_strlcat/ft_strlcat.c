// ADD HEADER
//
//COMMENT THIS OUT
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    char *ptr;
    unsigned int n;
    unsigned int counter;

    ptr = dest;
    n = 0;
    counter = 0;
    while(*dest != '\0')
        dest++;
        counter++; 
    while(n < size - 1)
    {
        *dest = *src;
        dest++;
        src++;
        n++;
        counter++;
    }
    *dest = '\0';
    return (counter);
}


int main(void)
{
    char destination[50] = "This should come before. ";
    char source[] = "This should come after. ";
    char destination2[50] = "This should come before. ";
    char source2[] = "This should come after. ";
    int mine;
    int original;

    mine = ft_strlcat(destination, source, 15);
    original = strlcat(destination2, source2, 15);
    printf("%d\n%d\n", ft_strlcat(mine, original, 15), strlcat(mine, original, 15));
}

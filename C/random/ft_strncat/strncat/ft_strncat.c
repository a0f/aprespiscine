#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char *ptr;
    unsigned int counter;

    ptr = dest;
    counter = 0;
    while (*dest != '\0')
        dest++;
    while (counter < nb && *src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
        counter++;
    }
    *dest = '\0';
    dest = ptr;
    return (dest);
}

int main(void)
{
    char destination[50] = "This should come before. ";
    char source[] = "This should come after.";
    char destination2[50] = "This should come before. ";
    char source2[] = "This should come after.";

    ft_strncat(destination, source, 50);
    strncat(destination2, source2, 50);
    printf("%s\n%s\n", destination, destination2); 
}

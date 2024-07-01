// ADD HEADER
//
//COMMENT THIS OUT
#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
    char *ptr;

    ptr = dest;
    while(*dest != '\0')
        dest++;
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    // can just return ptr
    dest = ptr;
    return (dest);
}


int main(void)
{
    char destination[50] = "This should come before. ";
    char source[] = "This should come after. ";
    char destination2[50] = "This should come before. ";
    char source2[] = "This should come after. ";

    ft_strcat(destination, source);
    strcat(destination2, source2);
    printf("%s\n%s\n", destination, destination2);
}

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

// function needs to return length of source
// if length >= dest size, its truncated
// will always terminate dest string
// callers responsiblity to handle this

int ft_strlen(char *str)
{
    int length;

    length = 0;
    while (*str != '\0')
    {
        str++;
        length++;
    }
    return (length);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    char *ptr;
    int srclen;
    int destlen;
    int counter;

    srclen = ft_strlen(src);
    destlen = ft_strlen(dest);
    ptr = dest;

    // we are returning what we tried to print?
    // or dest + counter?
    dest = dest + destlen;
    counter = destlen;
    //we start cating from end of dest string
    //we can also assume counter + destlen then
    if (counter > (size - 1))
    {
        return (srclen + size);
    }
    while (*src != '\0' && counter < (size - 1))
    {
        printf("%i\n", counter);
        *dest = *src;
        dest++;
        src++;
        counter++;
    }
    *dest = '\0';
    return (destlen + srclen);
}

int main(void)
{
    unsigned int original;
    unsigned int mine;
    unsigned int size;
    char destination[9] = "Hello "; 
    char destination2[9] = "Hello ";
    char source[] = "World";
    size = 7;

    mine = ft_strlcat(destination, source, size);
    original = strlcat(destination2, source, size);

    printf("My #%i - My S: %s\n", mine, destination);
    printf("OG #%i - OG S: %s\n", original, destination2);
}

// comment out and check previous ones.
#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2)
{
    while(*s1 == *s2)
    {
        s1++;
        s2++;
        if (*s1 == '\0')
        {
            return (0);
        }
    }
    return (*s1 - *s2);
}

char *ft_strstr(char *str, char *to_find)
{
    char *ptr;
    
    if (*str == '\0' && *to_find == '\0')
    {
        return (str);
    }
    while (*str != '\0')
    {
        if (*str == *to_find)
        {
            ptr = str;
            if (ft_strcmp(to_find, str) == 0)
                return (ptr);
        }
        str++;
    }
    return (0);
}

int main(void)
{
    char    haystack[] = "There is a needle in this haystack.";
    char    needle[] = "needle";

    printf("%s\n%s\n", ft_strstr(haystack, needle), strstr(haystack, needle));

    return(0);
}

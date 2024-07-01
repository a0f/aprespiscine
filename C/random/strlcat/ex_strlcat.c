#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

// function needs to return length of source
// if length >= dest size, its truncated
// will always terminate dest string
// callers responsiblity to handle this
int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				dst_len;
	int				src_len;
	int				bytes_left;
	unsigned int	i;
	unsigned int	j;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	bytes_left = (int)size - dst_len - 1;
	if (bytes_left >= 0)
	{
		i = dst_len;
		j = 0;
		while (bytes_left-- && src[j])
			dest[i++] = src[j++];
		dest[i] = '\0';
		return (src_len + dst_len);
	}
	return (src_len + size);
}

int main(void)
{
    unsigned int original;
    unsigned int mine;
    unsigned int size;
    char destination[9] = "Hello "; 
    char destination2[9] = "Hello ";
    char source[] = "World";
    size = 99;

    mine = ft_strlcat(destination, source, size);
    original = strlcat(destination2, source, size);

    printf("My #%i - My S: %s\n", mine, destination);
    printf("OG #%i - OG S: %s\n", original, destination2);
}

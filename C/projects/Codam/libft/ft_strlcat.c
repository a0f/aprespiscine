/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:11:33 by a0f               #+#    #+#             */
/*   Updated: 2024/08/16 23:38:13 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

// int ft_strlen(const char *str)
// {
// 	int i;

//     i = 0;
//     while (str[i] != '\0')
//     {
//         i++;
//     }
//     return (i);
// }

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dstlen;
    size_t srclen;

	dstlen = ft_strlen(dst);
    srclen = ft_strlen(src);
    while (*dst != '\0')
        dst++;
    if (size <= dstlen)
    {
        return (size + srclen);
    }
    while ((size - 1) - dstlen > 0 && *src != '\0')
    { 
        *dst = *src;
        size--;
		dst++;
		src++;
        
    }
    *dst = '\0';
    return (dstlen + srclen);
}

// int main(void)
// {
//     char dst[10] = "Hello";
//     char src[] = "World";

//     printf("return: %li\n", ft_strlcat(dst, src, 6));    
//     //printf("return: %li\n", strlcat(dst, src, 6));

// 	printf("%s\n", dst);
// }
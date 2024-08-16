/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:07:28 by a0f               #+#    #+#             */
/*   Updated: 2024/08/16 23:38:34 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//testing
// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>

// int ft_strlen(const char *str)
// {
//     int counter;

//     counter = 0;
//     while (*str)
//     {
//         str++;
//         counter++;
//     }

//     return (counter);
// }

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{

    int len;

    len = ft_strlen(src);
    if (size <= 0)
    {
        return (len);
    }
    while (size - 1 > 0 && *src != '\0')
    {
        *dst = *src;
        dst++;
        src++;
        size--;
    }
    *dst = '\0';

    return (len);
}

// int main(void)
// {
//     char dst[] = "123456789";
//     char src[] = "Hey.";

//     //printf("%li\n", ft_strlcpy(dst, src, 10));
//     printf("%li\n", strlcpy(dst, src, 10));

//     printf("%s\n", dst);
    
//     return (0);
// }
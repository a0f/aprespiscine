/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:34:48 by a0f               #+#    #+#             */
/*   Updated: 2024/08/16 23:37:15 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    while (n > 0)
    {
        if (*ptr == (unsigned char)c)
        {
            return (ptr);
        }
        ptr++;
        n--;
    }
    return (NULL);
}

// int main(void)
// {
//     char s1[] = "Hey, find this x";
    
//     printf("Found string: %s\n", (char *)(ft_memchr(s1, 'x', 16)));    
// }


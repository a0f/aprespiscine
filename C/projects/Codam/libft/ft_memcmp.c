/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:12:16 by a0f               #+#    #+#             */
/*   Updated: 2024/08/16 23:37:21 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ptr1;
    unsigned char *ptr2;

    ptr1 = (unsigned char*)s1;
    ptr2 = (unsigned char*)s2;

    while (n > 0)
    {
        if (*ptr1 != *ptr2)
        {
            return (*ptr1 - *ptr2);
        }
        ptr1++;
        ptr2++;
        n--;
    }
    return (0);
}

// int main(void)
// {
//     char s1[] = "Hello";
//     char s2[] = "HelloWorld";
    

//     printf("Mine: %i\n", ft_memcmp(s1, s2, 10));
//     printf("strncmp: %i\n", memcmp(s1, s2, 10));
// }
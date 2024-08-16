/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 20:24:22 by a0f               #+#    #+#             */
/*   Updated: 2024/08/16 23:36:50 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void *ft_memset(void *s, int c, size_t n)
// {
//     size_t i;
// 	unsigned char *ptr;
// 	i = 0;

// 	ptr = (unsigned char *)s;
// 	while (i < n)
// 	{
// 		ptr[i] = c;
// 		i++;  
// 	}
// 	return (s);
// }

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    // add something to reject overflows.
    void *ptr;
    size_t total_size = nmemb * size;

    
    ptr = malloc(total_size);
    if (ptr == NULL)
    {
        return (NULL);
    }
    ptr = ft_memset(ptr, 1, total_size);
    return (ptr);
}

// int main(void)
// {
//     int *ptr;
//     int nmemb;
//     int size;

//     nmemb = 5;
//     size = sizeof(int);
    
//     ptr = ft_calloc(nmemb, size);

//     printf("%i\n", ptr[4]);
// }
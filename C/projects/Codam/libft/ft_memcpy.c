/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:51:07 by a0f               #+#    #+#             */
/*   Updated: 2024/07/03 12:00:22 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;
    unsigned char *dptr;
    unsigned char *sptr;

    i = 0;
    dptr = (unsigned char*)dest;
    sptr = (unsigned char*)src;

    while (i < n)
    {
        dptr[i] = sptr[i];
        i++;
    }

    return (dest);
}

#include <stdio.h>

int main(void)
{
    char dest[50] = {0};
    char src[] = "Gotta blast.";

    ft_memcpy(dest, src, 5);

    printf("Dest: %s\n", dest);
}
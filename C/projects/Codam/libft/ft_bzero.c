/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:54:28 by a0f               #+#    #+#             */
/*   Updated: 2024/07/03 11:42:30 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_bzero(void *s, size_t n)
{
    size_t i;
	unsigned char *ptr;
	i = 0;

	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;  
	}
	return (s);
}

#include <stdio.h>

int	main(void)
{
	size_t n = 5;
	int c = '0';
    unsigned char s1[50] = "Hey this is a long sentence cuz it has to be.";


    printf("Before: %s\n", s1);
	ft_bzero(s1, n);

    int i = 0;
    unsigned char *ptr;
    ptr = (unsigned char *)s1;
    printf("After: ");
    while (i < 50)
    {
	    printf("%c", ptr[i]);
        i++;
    }
	
}
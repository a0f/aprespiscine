/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:54:28 by a0f               #+#    #+#             */
/*   Updated: 2024/07/03 11:22:12 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
	unsigned char *ptr;
	i = 0;

	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i++;  
	}
	return (s);
}

#include <stdio.h>

int	main(void)
{
	size_t n = 5;
	int c = '0';
	void *s1[50];

	ft_memset(s1, c, n);
	printf("%s\n", (unsigned char*)s1);
	
}
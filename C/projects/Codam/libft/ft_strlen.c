/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:26:37 by a0f               #+#    #+#             */
/*   Updated: 2024/07/02 12:36:23 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t len;
	
	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);
}

#include <stdio.h>
int	main(void)
{
	char s1[] = "Hello world!";

	printf("%li\n", ft_strlen(s1));
}
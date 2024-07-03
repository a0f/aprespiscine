/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:50:52 by a0f               #+#    #+#             */
/*   Updated: 2024/07/02 13:38:11 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	str = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			str = (char *)s;
		}
		s++;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	const char *s1 = "Hello, world!";
	int c = '.';

	printf("%p\n", ft_strrchr(s1, c));
}
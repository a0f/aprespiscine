/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 12:50:52 by a0f               #+#    #+#             */
/*   Updated: 2024/07/02 13:26:16 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char s1[] = "This is a whole ass sentence.";
	int c = 'z';

	ft_strchr(s1, c);
	//printf("%s\n", ft_strchr(s1, c));
}
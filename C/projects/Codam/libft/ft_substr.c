/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:54:52 by a0f               #+#    #+#             */
/*   Updated: 2024/08/16 23:51:13 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t len;
	
// 	len = 0;
// 	while (*s != '\0')
// 	{
// 		s++;
// 		len++;
// 	}

// 	return (len);
// }

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    char *str;
    int length;

    length = ft_strlen(s);
    if (!s)
        return (NULL);
    if (start >= length)
    {
        return (ft_strdup(""));
    }
    str = (char *)malloc((length - start + 1) * sizeof(char));
    if  (str == NULL)
    {
        return (NULL);
    }
    i = 0;
    while (i < len && s[start] != '\0')
    {
        str[i] = s[start];
        i++;
        start++;
    }
    str[i] = '\0';
    return (str);
}

int main(void)
{
    char const str[] = "You gotta find this x and take the string after.";
    printf("%s\n", ft_substr(str, 47, 4));
}
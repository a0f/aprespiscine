/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 22:47:01 by a0f               #+#    #+#             */
/*   Updated: 2024/08/17 16:09:55 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int total_len;
    char *str;
    int i;

    total_len = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc((total_len + 1 ) * sizeof(char));
    if (str == NULL)
        return (NULL);
    i = 0;
    while (*s1)
    {
        str[i] = *s1;
        i++;
        s1++;
    }
    while (*s2)
    {
        str[i] = *s2;
        i++;
        s2++;
    }
    str[i] = '\0';
    return (str);
}

// int main(void)
// {
//     char str1[] = "This should be at the start.";
//     char str2[] = "This should be at the end.";

//     printf("%s\n", ft_strjoin(str1, str2));
// }
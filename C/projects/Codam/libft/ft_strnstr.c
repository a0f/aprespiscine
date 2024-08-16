/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_ND.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:11:25 by a0f               #+#    #+#             */
/*   Updated: 2024/08/16 17:54:35 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;

    if (little[0] == '\0')
    {
        return ((char *)big);
    }
    while (big[i] != '\0' && i < len)
    {
        j = 0;
        while (big[i + j] == little[j] && i + j < len)
        {
            if (little[j + 1] == '\0')
            {
                return ((char *)&big[i]);
            }
            j++;
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    char str1[] = "Find the secret phrase within this string";
    char str2[] = "secret phrase";

    printf("%s\n", ft_strnstr(str1, str2, 41));
}


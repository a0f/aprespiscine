/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:08:48 by a0f               #+#    #+#             */
/*   Updated: 2024/08/18 20:02:23 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;
    int z;
    char *str;
    
    i = 0;
    j = ft_strlen(s1) - 1;
    z = 0;
    while (s1[i] && (ft_strchr(set, s1[i]) != 0))
    {
        i++;
    }
    while (j > i && (ft_strchr(set, s1[j]) != 0))
    {
        j--;
    }
    str = (char *)malloc((j - i + 2) * sizeof(char));
    if (str == NULL)
    {
        return (NULL);
    }
    while (i <= j)
        str[z++] = s1[i++];
    str[z] = '\0';
    return (str);
}


// int main(void)
// {
//     char str[] = "ababaaaMy name is Simonbbaaabba";
//     char trim[] = "ab";

//     printf("%s\n", ft_strtrim(str, trim));
// }


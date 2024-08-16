/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 17:33:11 by a0f               #+#    #+#             */
/*   Updated: 2024/08/16 23:37:46 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    int length;
    int i;
    char *str;

    length = 0;
    i = 0;
    while (s[length])
        length++;
    str = (char *)malloc((length + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

// int main(void)
// {
//     char str[] = "Hey you should duplicate this whole thing.";
//     char *dupe;
        
//     dupe = ft_strdup(str);
//     printf("%s\n", dupe);
//     free(dupe);
//     return (0);    
// }
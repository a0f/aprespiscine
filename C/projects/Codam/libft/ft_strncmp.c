/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:46:01 by a0f               #+#    #+#             */
/*   Updated: 2024/07/16 13:25:54 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (n > 0 && (*s1 != '\0' || *s2 != '\0'))
    {
        if (*s1 != *s2)
        {
            return (*s1 - *s2);
        }
        s1++;
        s2++;
        n--;
    }
    return (0);
}

int main(void)
{
    char s1[] = "123";
    char s2[] = "12345";
    

    printf("Mine: %i\n", ft_strncmp(s1, s2, 5));
    printf("strncmp: %i\n", strncmp(s1, s2, 5));
}
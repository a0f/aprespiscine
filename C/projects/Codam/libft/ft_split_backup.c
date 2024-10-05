// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_split_backup.c                                  :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/08/18 19:51:47 by a0f               #+#    #+#             */
// /*   Updated: 2024/09/19 11:56:22 by a0f              ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"

// int str_amount(const char *str, char deliminator)
// {
//     int lines;

//     lines = 1;

//     while(*str)
//     {
//         if(*str == deliminator)
//         {
//             lines++;
//         }
//         str++;
//     }
//     return (lines);
// }

// char **ft_split(char const *s, char c)
// {
//     char **str;
//     int i;
//     int j;
//     int col;
//     int len;
//     int lines;

//     lines = str_amount(s, c);
    
//     i = 0;
//     j = 0;
//     col = 0;
//     str = (char **)malloc(((lines + 1) * sizeof(char *)));
//      if (str == NULL)
//             return (NULL);
//     while (col < lines)
//     {
//         while (s[i] == c && s[i] != '\0')
//             i++;
//         len = 0;
//         while ((s[i + len] != c) && s[i + len] != '\0')
//         {
//             len++;
//         }
//         str[col] = (char *)malloc((len + 1) * sizeof(char));
//         if (str[col] == NULL)
//             return (NULL);
//         j = 0;
//         while (j < len)
//         {
//             str[col][j] = s[i + j];
//             j++;
//         }
//         str[col][len] = '\0';
//         col++;
//         i += len;
//     }
//     str[col] = NULL;
//     return (str);   
// }

// int main(void)
// {
//     char str[] = "These allxshould splitxcorrectly now.";
//     int i;
//     char **split;

//     split = ft_split(str, 'x');    
//     i = 0;
//     while (split[i])
//     {
//         printf("%s\n", split[i]);
//         i++;
//     }
// }
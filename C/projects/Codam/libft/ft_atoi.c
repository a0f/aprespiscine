/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a0f <a0f@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:07:41 by a0f               #+#    #+#             */
/*   Updated: 2024/08/16 23:35:59 by a0f              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		value = (*nptr - '0') + (value * 10);
		nptr++;
	}
	return (value * sign);
}
// #include <stdio.h>
// int main(void)
// {
// 	char str[] = " \t \n \v \r \f  -1776.5324";
// 	printf("%i\n", ft_atoi(str));
// }
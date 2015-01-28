/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 05:06:29 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 05:06:32 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	if (ft_strcmp(str, "-2147483648") == 0)
		return (-2147483648);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
		if (ft_isdigit(*str) == 0)
			return (0);
	}
	if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		result = result * 10 + *str - 48;
		str++;
	}
	return (sign * result);
}

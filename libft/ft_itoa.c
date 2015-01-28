/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 05:09:25 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 06:03:23 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_except(void)
{
	char	*str;

	str = ft_strnew(11);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

static void	ft_convert(int n, char *str, int i)
{
	str += i;
	while (i > 0)
	{
		*str = n % 10 + '0';
		n /= 10;
		str--;
		i--;
	}
	*str = n % 10 + '0';
}

static int	ft_len(int n)
{
	int		j;

	j = 0;
	while (n >= 10)
	{
		n /= 10;
		j++;
	}
	return (j);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		i;

	sign = 0;
	i = 0;
	if (n == -2147483648)
		return (ft_except());
	if (n < 0)
	{
		n *= -1;
		sign = 1;
		i++;
	}
	i += ft_len(n);
	str = ft_strnew(i + 1);
	ft_convert(n, str, i);
	if (sign == 1)
		str[0] = '-';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 19:33:41 by mmole             #+#    #+#             */
/*   Updated: 2014/03/09 19:33:43 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		obtain_nbr(char *str, int nbr)
{
	if (!(*str >= '0' && *str <= '9'))
		return (nbr);
	nbr = nbr * 10 + (*str - '0');
	return (obtain_nbr(str + 1, nbr));
}

int		ft_getnbr(char *str)
{
	int	nbr_sign;

	nbr_sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			nbr_sign *= -1;
		str = str + 1;
	}
	return (obtain_nbr(str, 0) * nbr_sign);
}

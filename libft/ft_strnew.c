/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 05:50:30 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 05:50:32 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	char	*strnew;

	if ((strnew = (char *)malloc((size + 1) * sizeof(*strnew))) == NULL)
		return (NULL);
	while (size != 0)
	{
		strnew[size] = '\0';
		size--;
	}
	strnew[size] = '\0';
	return (strnew);
}

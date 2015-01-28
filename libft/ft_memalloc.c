/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 05:10:06 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 05:10:09 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	if ((ptr = (char *)malloc(size * sizeof(*ptr))) == NULL)
		return (NULL);
	while (size != 0)
	{
		ptr[size] = '\0';
		size--;
	}
	ptr[size] = '\0';
	return (ptr);
}

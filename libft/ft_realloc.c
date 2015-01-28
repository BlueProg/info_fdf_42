/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 19:40:49 by mmole             #+#    #+#             */
/*   Updated: 2014/03/09 19:46:04 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*res;

	if ((res = malloc(new_size)))
	{
		ft_bzero(res, new_size);
		if (ptr)
		{
			ft_memmove(res, ptr, old_size);
			free(ptr);
		}
	}
	return (res);
}

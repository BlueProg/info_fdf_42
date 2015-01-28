/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 05:10:41 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 05:10:43 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;

	if (s == NULL)
		return (NULL);
	src = (const unsigned char *)s;
	while (n--)
	{
		if (*src == (unsigned char)c)
			return ((void *)src);
		++src;
	}
	return (NULL);
}

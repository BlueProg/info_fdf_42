/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 05:10:24 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 06:05:23 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char			*dst;
	const char		*src;
	unsigned char	ch;

	dst = s1;
	src = s2;
	while (n != 0)
	{
		*dst++ = ch;
		ch = *src++;
		if (ch == (unsigned char)c)
			return (dst);
		n--;
	}
	return (NULL);
}

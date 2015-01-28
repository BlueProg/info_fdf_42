/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 05:48:49 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 05:48:51 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*save;

	save = s1;
	while (*save)
		save++;
	while (n != 0 && *s2 != '\0')
	{
		*save = *s2++;
		n--;
		save++;
	}
	if (*save != '\0')
		*save = '\0';
	return (s1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 05:51:05 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 05:51:06 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*save;

	save = 0;
	while (1)
	{
		if (*s == c)
			save = (char *)s;
		if (!*s)
			return (save);
		s++;
	}
}

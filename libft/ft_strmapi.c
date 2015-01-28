/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 05:48:35 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 05:48:36 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = -1;
	if (s == NULL || f == NULL)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	while (s[++i] != '\0')
		str[i] = f(i, s[i]);
	return (str);
}

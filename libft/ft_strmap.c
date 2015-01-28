/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 05:48:20 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 05:48:21 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = -1;
	if (s == NULL || f == NULL)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	while (s[++i] != '\0')
		str[i] = f(s[i]);
	return (str);
}

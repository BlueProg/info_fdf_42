/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 05:52:12 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 05:52:14 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	str = ft_strnew(ft_strlen(s));
	while (s[i] == 9 || s[i] == 10 || s[i] == 32)
		i++;
	while (s[i] != '\0')
	{
		str[j] = s[i];
		i++;
		j++;
	}
	j--;
	while (str[j] == 9 || str[j] == 10 || str[j] == 32)
	{
		str[j] = '\0';
		j--;
	}
	return (str);
}

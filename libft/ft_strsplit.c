/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 05:51:24 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 06:06:32 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char			*ft_cpystr(const char *s, char c)
{
	char			*str;
	unsigned int	cnt;
	unsigned int	cnt1;

	cnt1 = 0;
	cnt = 0;
	while (s[cnt] != c && s[cnt] != '\0')
		cnt++;
	str = (char *)malloc(sizeof(char) * (cnt + 1));
	if (!str)
		return (NULL);
	while (*s != c && *s != '\0')
	{
		str[cnt1++] = *s;
		s++;
	}
	str[cnt1] = '\0';
	return (str);
}

static const char	*ft_mv_str(const char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	return (s);
}

static unsigned int	ft_cnt_string(const char *s, char c)
{
	unsigned int	cnt;
	unsigned int	cnt_string;

	cnt = 0;
	cnt_string = 1;
	while (s[cnt])
	{
		if (s[cnt] == c && (s[cnt + 1] != c) && s[cnt + 1] != '\0')
			cnt_string++;
		cnt++;
	}
	if (s[0] != c)
		cnt_string++;
	return (cnt_string);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**tstr;
	unsigned int	cnt;

	if (!s)
		return (NULL);
	cnt = 0;
	tstr = (char **)malloc(sizeof(char *) * ft_cnt_string(s, c));
	if (!tstr)
		return (NULL);
	while (*s)
	{
		if (*s == c && *s != '\0')
			s++;
		else
		{
			tstr[cnt] = ft_cpystr(s, c);
			cnt++;
			s = ft_mv_str(s, c);
		}
	}
	tstr[cnt] = NULL;
	return (tstr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 02:56:29 by mmole             #+#    #+#             */
/*   Updated: 2014/04/21 02:43:01 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_parseheight(char *file)
{
	int		fd;
	int		cmp;
	char	*line;

	cmp = 0;
	if ((fd = open(file, O_RDONLY)) == -1)
		exit(-1);
	while (get_next_line(fd, &line))
		cmp++;
	close(fd);
	return (cmp);
}

char	**ft_cleanchar(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab && tab[i])
	{
		while (tab && tab[i][j])
		{
			if (!(ft_isdigit(tab[i][j])))
				tab[i][j] = ' ';
			j++;
		}
		j = 0;
		i++;
	}
	return (tab);
}

char	**ft_givefile(char *file)
{
	char	*line;
	char	**tab;
	int		i;
	int		fd;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_parseheight(file) + 2));
	if ((fd = open(file, O_RDONLY)) == -1)
		exit(-1);
	while (get_next_line(fd, &line))
	{
		tab[i] = ft_strdup(line);
		i++;
	}
	tab[i] = NULL;
	close(fd);
	tab = ft_cleanchar(tab);
	return (tab);
}

int		ft_cmpheight(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int		ft_countx(char *str)
{
	int	i;
	int	cmp;
	int	bol;

	bol = 1;
	i = 0;
	cmp = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && bol == 1)
		{
			cmp++;
			i++;
			bol = 0;
		}
		else if (str[i] != ' ' && str[i] != '\t' && bol == 0)
			i++;
		else if (str[i] == ' ' || str[i] == '\t')
		{
			i++;
			bol = 1;
		}
	}
	return (cmp);
}

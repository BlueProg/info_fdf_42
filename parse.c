/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 02:59:37 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 04:41:07 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "fdf.h"
#include <stdlib.h>

int		**ft_creatint(char **tab)
{
	int	x;
	int	y;
	int	**tint;

	y = 0;
	tint = (int **)malloc(sizeof(int *) * (ft_cmpheight(tab) + 2));
	tint[0] = (int *)malloc(sizeof(int) * 1);
	tint[0][0] = ft_cmpheight(tab) + 1;
	while (tab[y])
	{
		x = ft_countx(tab[y]);
		tint[y + 1] = (int *)malloc(sizeof(int) * (x + 1));
		tint[y + 1][0] = x;
		y++;
	}
	return (tint);
}

int		**ft_setab(int **tab, char **file)
{
	int		x;
	int		y;
	char	**tmp;

	y = 1;
	while (y < tab[0][0])
	{
		x = 0;
		while (x < tab[y][0])
		{
			tmp = ft_strsplit(file[y - 1], ' ');
			tab[y][x + 1] = ft_atoi(tmp[x]);
			x++;
		}
		y++;
	}
	return (tab);
}

int		**ft_parse(char *file)
{
	char	**tchar;
	int		**tint;

	tchar = ft_givefile(file);
	tint = ft_creatint(tchar);
	tint = ft_setab(tint, tchar);
	return (tint);
}

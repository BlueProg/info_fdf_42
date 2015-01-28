/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tracing2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/18 12:28:42 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 04:44:47 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "fdf.h"

void	ft_traceh(int x, int y, t_struct *d, t_coord c)
{
	c.y1 = (y * c.ecy + c.pdy - (x * 12) - \
		(ft_modulp(d, d->tab[y + 1][x + 1]) / 2));
	c.x1 = (x * c.ecx + c.pdx - (y * 12) - \
		(ft_modulp(d, d->tab[y + 1][x + 1]) / 3));
	c.y2 = (y * c.ecy + c.pdy - ((x + 1) * 12) - \
		(ft_modulp(d, d->tab[y + 1][x + 2]) / 2));
	c.x2 = ((x + 1) * c.ecx + c.pdx - (y * 12) - \
		(ft_modulp(d, d->tab[y + 1][x + 2]) / 3));
	ft_givepoint(d, c);
}

void	ft_tracev(int x, int y, t_struct *d, t_coord c)
{
	c.y1 = (y * c.ecy + c.pdy - (x * 12) - \
		(ft_modulp(d, d->tab[y + 1][x + 1]) / 2));
	c.x1 = (x * c.ecx + c.pdx - (y * 12) - \
		(ft_modulp(d, d->tab[y + 1][x + 1]) / 3));
	c.y2 = ((y - 1) * c.ecy + c.pdy - (x * 12) - \
		(ft_modulp(d, d->tab[y][x + 1]) / 2));
	c.x2 = (x * c.ecx + c.pdx - ((y - 1) * 12) - \
		(ft_modulp(d, d->tab[y][x + 1]) / 3));
	ft_givepoint(d, c);
}

void	ft_trace(int x, int y, t_struct *d, t_coord c)
{
	c.pdx = WINL / 3;
	c.pdy = WINH / 3;
	c.ecx = WINL / 2 / ft_mx(d);
	c.ecy = WINH / 2 / d->tab[0][0];
	if (d->tab[y + 1][0] > (x + 1))
		ft_traceh(x, y, d, c);
	if (y > 0 && d->tab[y][0] > x)
		ft_tracev(x, y, d, c);
}

void	ft_draw(t_struct *data, t_coord c)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	ft_putendl("Calcul en cours.");
	while ((y + 1) < data->tab[0][0])
	{
		while (x < data->tab[(y + 1)][0])
		{
			ft_trace(x, y, data, c);
			x++;
		}
		x = 0;
		y++;
	}
	ft_putendl("Calcul terminer.");
}

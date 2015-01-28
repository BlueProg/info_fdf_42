/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tracing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/17 14:14:53 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 04:45:14 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include "fdf.h"

void	ft_trace1(t_struct *d, t_coord c)
{
	int	x;
	int	y;

	x = c.x1;
	while (x <= c.x2)
	{
		y = c.y1 + ((c.y2 - c.y1) * (x - c.x1)) / (c.x2 - c.x1);
		if ((x < 0 || x >= WINL) || (y < 0 || y >= WINH))
			x++;
		else
		{
			d->data[(d->sizeline * y) + x * (d->bpp / 8)] = 180;
			d->data[(d->sizeline * y) + x * (d->bpp / 8) + 1] = 180;
			d->data[(d->sizeline * y) + x * (d->bpp / 8) + 2] = 180;
			x++;
		}
	}
}

void	ft_trace2(t_struct *d, t_coord c)
{
	int	x;
	int	y;

	y = c.y1;
	while (y >= c.y2)
	{
		x = c.x1 + ((c.x2 - c.x1) * (y - c.y1)) / (c.y2 - c.y1);
		if ((x < 0 || x >= WINL) || (y < 0 || y >= WINH))
			y--;
		else
		{
			d->data[(d->sizeline * y) + x * (d->bpp / 8)] = 180;
			d->data[(d->sizeline * y) + x * (d->bpp / 8) + 1] = 180;
			d->data[(d->sizeline * y) + x * (d->bpp / 8) + 2] = 180;
			y--;
		}
	}
}

int		ft_abs(int result)
{
	return (result >= 0 ? result : -result);
}

void	ft_givepoint(t_struct *d, t_coord c)
{
	if (c.x1 <= c.x2 && (c.x2 - c.x1 >= ft_abs(c.y2 - c.y1)))
		ft_trace1(d, c);
	else
		ft_trace2(d, c);
}

int		ft_modulp(t_struct *data, int p)
{
	int		x;
	int		y;
	int		max;
	int		result;

	x = 0;
	y = 0;
	max = 0;
	result = 0;
	while ((y + 1) < data->tab[0][0])
	{
		while (x < data->tab[(y + 1)][0])
		{
			if (data->tab[(y + 1)][x + 1] > max)
				max = data->tab[(y + 1)][x + 1];
			x++;
		}
		x = 0;
		y++;
	}
	if (max != 0)
		result = (double)p / (double)max * 35;
	return (result);
}

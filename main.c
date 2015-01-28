/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 00:32:55 by mmole             #+#    #+#             */
/*   Updated: 2015/01/27 18:52:53 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/includes/libft.h"
#include <fcntl.h>
#include "fdf.h"
#include <mlx.h>
#include <stdlib.h>

int		ft_expose(t_struct *d)
{
	mlx_put_image_to_window(d->ptr, d->win, d->img, 0, 0);
	return (0);
}

int		ft_press_key(int keycode, t_struct *d)
{
	if (*d->tab)
	{
		if (keycode == 65307)
			exit(EXIT_SUCCESS);
	}
	return (0);
}

int		ft_mx(t_struct *d)
{
	int	max;
	int	i;

	i = 0;
	max = 0;
	while (i < d->tab[0][0])
	{
		if (d->tab[i][0] > max)
			max = d->tab[i][0];
		i++;
	}
	return (max);
}

int		main(int argc, char **argv)
{
	t_struct	d;
	t_coord		coord;

	if (argc > 1)
	{
		if (open(argv[1], O_RDONLY) == -1)
		{
			ft_putstr(argv[1]);
			ft_putstr(" give an error\n");
		}
		d.tab = ft_parse(argv[1]);
		d.ptr = mlx_init();
		d.img = mlx_new_image(d.ptr, WINL, WINH);
		d.win = mlx_new_window(d.ptr, WINL, WINH, NAME);
		d.data = mlx_get_data_addr(d.img, &d.bpp, &d.sizeline, &d.endian);
		ft_draw(&d, coord);
		mlx_hook(d.win, 2, 1, ft_press_key, &d);
		mlx_expose_hook(d.win, ft_expose, &d);
		mlx_loop(d.ptr);
	}
	else
		ft_putendl("Error, please give map: ./fdf map");
	return (0);
}

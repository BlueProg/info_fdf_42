/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 04:48:17 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 04:48:18 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct	s_struct
{
	int		**tab;
	void	*ptr;
	void	*win;
	void	*img;
	char	*data;
	int		endian;
	int		sizeline;
	int		bpp;
}				t_struct;

typedef struct	s_coord
{
	int		x1;
	int		y1;
	int		x2;
	int		y2;
	int		p;
	int		ecx;
	int		ecy;
	int		pdx;
	int		pdy;
}				t_coord;

#endif

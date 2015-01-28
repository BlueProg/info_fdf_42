/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dblarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 19:32:42 by mmole             #+#    #+#             */
/*   Updated: 2014/03/09 19:33:08 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		**malloc_dblarray(int width, int height)
{
	int	**dblarray;
	int	i;

	dblarray = (int**)malloc(sizeof(int*) * width);
	i = 0;
	while (i < width)
	{
		dblarray[i] = (int*)malloc(sizeof(int) * height);
		i++;
	}
	return (dblarray);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 05:53:18 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 05:57:41 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "sys/types.h"
# include "sys/uio.h"
# include "libft.h"
# include "struct_get.h"

# define BUFF_SIZE 8

int		get_next_line(int const fd, char **line);

#endif

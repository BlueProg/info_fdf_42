/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_get.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/27 05:55:41 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 05:57:28 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_GET_H
# define STRUCT_GET_H

typedef struct		s_info
{
	char			*start;
	char			*buf;
	int				fd;
	int				offset;
	struct s_info	*next;
}					t_info;

#endif

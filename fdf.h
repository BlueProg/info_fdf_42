/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 02:47:48 by mmole             #+#    #+#             */
/*   Updated: 2014/04/27 04:56:42 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define WINH 900
# define WINL 1400
# define NAME "Fdf"
# include "struct.h"

int		**ft_creatint(char **tab);
int		**ft_setab(int **tab, char **file);
int		**ft_parse(char *file);
int		ft_parseheight(char *file);
char	**ft_cleanchar(char **tab);
char	**ft_givefile(char *file);
int		ft_cmpheight(char **tab);
int		ft_countx(char *str);
int		ft_modulp(t_struct *data, int p);
void	ft_givepoint(t_struct *d, t_coord c);
int		ft_abs(int result);
void	ft_trace2(t_struct *d, t_coord c);
void	ft_trace1(t_struct *d, t_coord c);
void	ft_traceh(int x, int y, t_struct *d, t_coord c);
void	ft_tracev(int x, int y, t_struct *d, t_coord c);
void	ft_trace(int x, int y, t_struct *d, t_coord c);
void	ft_draw(t_struct *d, t_coord c);
int		ft_mx(t_struct *d);

#endif

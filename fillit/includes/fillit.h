/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 11:11:29 by ghtouman          #+#    #+#             */
/*   Updated: 2018/05/02 15:09:51 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdio.h>
# include "../libft/libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# define FALSE 0
# define TRUE 1

typedef struct		s_struct
{
	int		base_grid;
	int		grid_size;
}					t_struct;

typedef struct		s_stock
{
	char			*content;
	struct s_stock	*next;
}					t_stock;

void		ft_lstpush_back(t_stock **begin_list, char *content);
void		tab_map(t_struct *ma_struct);
void		afficherListe(t_stock *ma_list);
int			check_error(t_stock *ma_list);


int			ft_sqrt(int nb);
t_stock		*ft_create_elem(void *content);

#endif

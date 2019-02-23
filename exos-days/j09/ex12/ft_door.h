/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 12:28:29 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/16 13:04:29 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# include <unistd.h>
# include <stdlib.h>

# define TRUE 1
# define OPEN 1
# define CLOSE 0

typedef int			t_bool;

typedef struct		s_door
{
	int state;
}					t_door;

int					is_door_open(t_door *door);
int					is_door_close(t_door *door);
int					open_door(t_door *door);
int					close_door(t_door *door);
void				ft_putstr(char *str);

#endif

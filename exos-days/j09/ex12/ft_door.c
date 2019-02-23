/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 12:35:34 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/16 13:04:22 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

void		ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

t_bool		open_door(t_door *door)
{
	ft_putstr("Door is opening...\n");
	door->state = OPEN;
	return (TRUE);
}

t_bool		close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
	return (TRUE);
}

t_bool		is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state = OPEN);
}

t_bool		is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	return (door->state = CLOSE);
}

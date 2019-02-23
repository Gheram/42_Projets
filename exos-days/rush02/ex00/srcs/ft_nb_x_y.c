/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_x_y.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 16:21:50 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/25 23:08:09 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_nb_x(char *str)
{
	int x;

	x = 0;
	while (str[x] && str[x] != '\n')
		x++;
	return (x);
}

int		ft_nb_y(char *str)
{
	int y;
	int i;

	y = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			y++;
		i++;
	}
	return (y);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_line.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:23:07 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/28 14:45:35 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_nb_x(char *str)
{
	int x;
	int xi;
	int back;

	x = 0;
	back = 0;
	while (str[x] != '\n')
		x++;
	xi = x + 1;
	while (str[xi] != '\n')
	{
		xi++;
		back++;
	}
	return (back);
}

int		ft_nb_y(char *str)
{
	int y;
	int i;

	y = 0;
	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i])
	{
		if (str[i] == '\n')
			y++;
		i++;
	}
	return (y);
}

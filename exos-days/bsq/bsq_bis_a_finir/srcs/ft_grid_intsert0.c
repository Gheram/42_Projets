/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_intsert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 18:25:43 by asamir-k          #+#    #+#             */
/*   Updated: 2018/02/28 18:45:44 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		**ft_grid_intsert(char *str)
{
	int x;
	int y;
	int countline;
	int **tab;
	int i;

	countline = ft_nb_y(str);
	if (!(tab = (int**)malloc(sizeof(int *) * countline)))
		return (NULL);
	y = 0;
	i = 1;
	x = ft_nb_x(str);
	while (str[i] != '\n')
		i++;
	i++;
	while (y < countline)
	{
		if (!(tab[y] = (int*)malloc(sizeof(int) * (x))))
			return (NULL);
		x = 0;
		while (str[i] != '\n')
		{
			if (str[i] == '0')
				tab[y][x++] = 0;
			if (str[i] == '1')
				tab[y][x++] = 1;
			i++;
		}
		i++;
		y++;
	}
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 12:05:53 by ghtouman          #+#    #+#             */
/*   Updated: 2018/05/02 12:09:05 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"


void tab_map(t_struct *map_struct)
{
	int			x;
	int			y;
	char		map[map_struct->base_grid][map_struct->base_grid + 1];

	x = 0;
	while (x < map_struct->base_grid)
	{
		y = 0;
		while (y < map_struct->base_grid + 1)
		{
			if (y == map_struct->base_grid)
			{
				map[x][y] = '\n';
			}
			else
				map[x][y] = '.';
			y++;
		}
		x++;
	}
	map[x - 1][y] = '\0';
	printf("%s", *map);
}

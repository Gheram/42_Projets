/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_intsert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 18:25:43 by asamir-k          #+#    #+#             */
/*   Updated: 2018/02/28 23:17:31 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		**ft_grid_intsert(char *str)
{
	int val[4];
	int **tab;

	val[3] = ft_nb_y(str);
	tab = (int**)malloc(sizeof(int *) * val[3]);
	val[1] = 0;
	val[2] = 1;
	val[0] = ft_nb_x(str);
	while (str[val[2]] != '\n')
		val[2]++;
	val[2]++;
	while (val[1] < val[3])
	{
		tab[val[1]] = (int*)malloc(sizeof(int) * (val[0]));
		val[0] = 0;
		while (str[val[2]] != '\n')
		{
			str[val[2]] == '0' ? tab[val[1]][val[0]++] = 0 : 0;
			str[val[2]] == '1' ? tab[val[1]][val[0]++] = 1 : 0;
			val[2]++;
		}
		val[2]++;
		val[1]++;
	}
	return (tab);
}

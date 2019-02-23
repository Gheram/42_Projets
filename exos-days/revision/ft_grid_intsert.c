/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_intsert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 18:25:43 by asamir-k          #+#    #+#             */
/*   Updated: 2018/02/28 23:17:47 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_print_words_tables(int **tab)
{
	int i;
	int j;

	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			ft_putchar(tab[i][j]);
		ft_putchar('\n');
	}
}
/*
int        **ft_grid_intsert(char *str)
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
	ft_print_words_tables(tab);
    return (tab);
}
*/

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
	i = 0;
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
	ft_print_words_tables(tab);
	return (tab);
}

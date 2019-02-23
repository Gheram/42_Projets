/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrixalgo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 15:18:01 by asamir-k          #+#    #+#             */
/*   Updated: 2018/02/28 23:24:03 by asamir-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_found_max(int **tab, int x, int y, char *str)
{
	int toby[5];
	int ligne;
	int colonne;
	int position[3];

	ligne = 0;
	position[0] = 1;
	while (ligne < y)
	{
		colonne = 0;
		while (colonne < x)
		{
			if (position[0] < tab[ligne][colonne])
			{
				position[0] = tab[ligne][colonne];
				position[1] = ligne;
				position[2] = colonne;
			}
			colonne++;
		}
		ligne++;
	}
	ft_with_cube(str);
	move_map(position, str, x, toby);
	ft_putstr(str);
}

void	move_map(int position[3], char *str, int x, int *toby)
{
	toby[4] = position[0];
	toby[0] = 0;
	toby[1] = 0;
	while (str[toby[1]] != '\n')
		toby[1]++;
	toby[1]++;
	while (str[toby[1]++])
	{
		str[toby[1]] == '\n' ? toby[0]++ : 0;
		if (toby[0] == position[1])
			break ;
	}
	toby[1]++;
	toby[2] = toby[1] + position[2];
	while (toby[1] < toby[2])
		toby[1]++;
	toby[3] = position[0];
	while (toby[3]--)
	{
		toby[4] = position[0];
		while (toby[4]-- > 0)
			str[toby[1]--] = 'x';
		toby[1] = toby[1] - x - 1 + position[0];
	}
}

int		ft_min(int a, int b, int c)
{
	int smallest;

	smallest = (a >= b) ? b : a;
	return (smallest >= c) ? c : smallest;
}

void	matrixalgo(int **tab, int x, int y, char *str)
{
	int i;
	int j;

	i = 1;
	while (i < y)
	{
		j = 1;
		while (j < x)
		{
			if (tab[i][j] == 1)
				tab[i][j] = ft_min(tab[i - 1][j - 1], tab[i][j - 1],
				tab[i - 1][j]) + 1;
			j++;
		}
		i++;
	}
	ft_found_max(tab, x, y, str);
}

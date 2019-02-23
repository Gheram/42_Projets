/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrixalgo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 15:18:01 by asamir-k          #+#    #+#             */
/*   Updated: 2018/02/28 22:52:50 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_found_max(int **tab, int x, int y, char *str)
{
	int ligne;
	int colonne;
	int position[3];

	ligne = 0;
	position[0] = 0;
	ft_print_words_tables(tab);
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
	printf("========================%d\n", position[0]);
	printf("========================%d\n", position[1]);
	printf("========================%d\n", position[2]);

	ft_with_cube(str);
	move_map(position, str, x, check_error(str));
	ft_putstr(str);
}


void	move_map(int position[3], char *str, int x, int *tab)
{
	int count;
	int i;
	int go_colonne;
	int tmp;
	int value;
	(void)value;
	(void)x;
	printf("=========%c\n", tab[1]);
	printf("=========%c\n", tab[2]);
	printf("=========%c\n", tab[3]);

	count = 0;
	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i++])
	{
		if (str[i] == '\n')
			count++;
		if (count == position[1])
			break ;
	}
	i++;
	go_colonne = i + position[2];
	while (i < go_colonne)
		i++;
	tmp = position[0];
	printf("%d\n", position[0]);
	while (tmp--)
	{
		/*value = position[0];
		printf("postion=======%d\n", position[0]);
		printf("value=========%d\n", value);
		while (value-- > 0)
		{
//makeprintf("++++++++++++=\n");
			str[i--] = 'x';
			printf("%s\n", str);

		}
		i = i - x - 1 + position[0];*/
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

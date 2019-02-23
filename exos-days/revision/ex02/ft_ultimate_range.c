/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 17:56:11 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/14 10:52:50 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min < max)
	{
		*range = (int*)malloc(sizeof(**range) * (max - min));
		if (*range == NULL)
			return (0);
		while (min < max)
		{
			(*range)[i] = min;
			min++;
			i++;
		}
		return (i);
	}
	*range = NULL;
	return (0);
}

int     main(void)
{
		int **t;
		int i = 0;
		int j;
		j = ft_ultimate_range(t, 2, 6);
		printf("%d\n", j);
		while (i < 4)
		{
			printf("%d\n", t[0][i++]);
		}
		return (0);
}

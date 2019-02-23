/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 17:56:11 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/14 10:10:45 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

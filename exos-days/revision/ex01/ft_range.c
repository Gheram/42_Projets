/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 18:02:29 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/14 11:06:00 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*range;

	i = 0;
	range = NULL;
	if (min < max)
	{
		range = (int*)malloc(sizeof(*range) * (max - min));
		if (range == NULL)
			return (NULL);
		while (min < max)
		{
			range[i] = min;
			i++;
			min++;
		}
	}
	return (range);
}

int main()
{
	int *t;
	int i = 0;
	t = ft_range(5, 8);
	while (t[i])
	{	
		printf("%d\n", t[i]);
		i++;
	}
	return (0);
}

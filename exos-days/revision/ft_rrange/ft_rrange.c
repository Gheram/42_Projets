/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 19:31:30 by exam              #+#    #+#             */
/*   Updated: 2018/02/23 20:44:49 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *range;
	int inc;
	int index;

	index = 0;	
	inc = (end - start >= 0) ? 1 : -1;
	if (inc > 0)
		range = malloc(1 + end - start);
	else
		range = malloc(1 + start - end);
	while (inc * (inc + end - start) > 0)
	{
		range[index] = end;
		end -= inc;
		index++;
	}
	return (range);
}

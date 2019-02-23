/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 16:10:26 by ghtouman          #+#    #+#             */
/*   Updated: 2018/03/01 16:22:38 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int *tab;
	int i;
	int difference;
	printf("ddddd\n");
	if (start > end)
		difference = start - end;
	else
		difference = end - start;
	if(!(tab = (int *)malloc(sizeof(*tab) * (difference + 1))))
		return (NULL);
	i = 0;
	if (start < end)
	{
		while(end >= start)
			tab[i++] = end--;
	}
	else
	{
		while (end <= start)
			tab[i++] = end++;
	}
	printf("%d\n", *tab);
	return(tab);
}

int main(void) {
	int *t;
	int i;

	t = ft_rrange(0, -3);
	i = 0;
	printf("%d\n", *t);
	while(t[i])
		printf("%d\n", t[i++]);
	return 0;
}

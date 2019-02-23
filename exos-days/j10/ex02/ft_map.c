/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 13:53:57 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/19 17:45:52 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *map;
	int i;

	i = 0;
	if (!(map = (int*)malloc(sizeof(*map) * length)))
		return (NULL);
	while (length--)
		map[i++] = f(*tab++);
	return (map);
}

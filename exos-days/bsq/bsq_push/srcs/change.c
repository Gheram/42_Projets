/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 07:22:40 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/28 19:17:12 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_parse_change(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i])
	{
		if (str[i] == '.')
			str[i] = '1';
		if (str[i] == 'o')
			str[i] = '0';
		i++;
	}
	return (str);
}

char	*ft_with_cube(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i])
	{
		if (str[i] == '1')
			str[i] = '.';
		if (str[i] == '0')
			str[i] = 'o';
		i++;
	}
	return (str);
}

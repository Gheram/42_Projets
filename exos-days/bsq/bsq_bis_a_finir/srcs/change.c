/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 07:22:40 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/28 22:08:11 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_parse_change(char *str)
{
	int i;
	int *sol;

	i = 0;
	sol = check_error(str);
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i])
	{
		if (str[i] == sol[3] + '0')
			str[i] = '1';
		if (str[i] == sol[2] + '0')
			str[i] = '0';
		i++;
	}
	return (str);
}

char	*ft_with_cube(char *str)
{
	int i;
	int *sol;

	i = 0;
	sol = check_error(str);
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i])
	{
		if (str[i] == '1')
			str[i] = sol[3] + '0';
		if (str[i] == '0')
			str[i] = sol[2] + '0';
		i++;
	}
	return (str);
}

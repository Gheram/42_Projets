/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 11:31:38 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/25 12:19:51 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexp.h"

char	*delete_spaces(char *str)
{
	int		i;
	int		j;
	char	*resultat;
	int		size;

	i = 0;
	size = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			size++;
		i++;
	}
	resultat = (char *)malloc(sizeof(char) * size);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			resultat[j++] = str[i];
		i++;
	}
	resultat[j] = '\0';
	return (resultat);
}

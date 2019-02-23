/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 14:48:12 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/25 14:49:15 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int taille_dest;
	int i;

	taille_dest = ft_strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[taille_dest + i] = src[i];
		i++;
	}
	dest[taille_dest + i] = '\0';
	return (dest);
}

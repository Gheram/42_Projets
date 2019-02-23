/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 11:16:51 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/12 12:57:20 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 13:58:20 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/14 10:16:44 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

	i = 0;
	taille_dest = ft_strlen(dest);
	while (src[i])
	{
		dest[taille_dest + i] = src[i];
		i++;
	}
	dest[taille_dest + i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		size;

	i = 1;
	size = 0;
	while (i < argc)
		size += (ft_strlen(argv[i++]) + 1);
	str = (char*)malloc(sizeof(*str) * (size));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (++i < argc)
	{
		ft_strcat(str, argv[i]);
		if (i != argc - 1)
			ft_strcat(str, "\n");
	}
	str[size] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 12:33:39 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/09 13:20:10 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int taille_dest;

	taille_dest = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i])
	{
		dest[taille_dest + i] = src[i];
		i++;
	}
	dest[taille_dest + i] = '\0';
	return (dest);
}

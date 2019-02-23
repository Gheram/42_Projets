/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 08:51:41 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/12 14:06:30 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int taille_dest;
	unsigned int taille_src;

	taille_dest = 0;
	while (dest[taille_dest] && taille_dest < size)
		taille_dest++;
	taille_src = -1;
	while (src[++taille_src])
	{
		if (taille_dest + taille_src + 1 < size)
			dest[taille_dest + taille_src] = src[taille_src];
	}
	dest[taille_dest + taille_src] = '\0';
	return (taille_dest + taille_src);
}

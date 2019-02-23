/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 12:58:51 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/12 14:06:52 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int taille_src;
	unsigned int taille_dest;

	taille_dest = 0;
	taille_src = -1;
	while (src[++taille_src])
	{
		if (taille_src + 1 < size)
		{
			dest[taille_dest] = src[taille_src];
			taille_dest++;
		}
	}
	dest[taille_dest] = '\0';
	return (taille_src);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 08:56:09 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/09 13:10:39 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int counter;

	counter = -1;
	while (src[++counter])
		dest[counter] = src[counter];
	dest[counter] = '\0';
	return (dest);
}

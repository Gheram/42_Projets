/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 09:23:54 by ghtouman          #+#    #+#             */
/*   Updated: 2019/01/15 09:24:32 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t		ft_intlen(long int n)
{
	int i;

	i = 0;
	if (!n)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char		*str;
	size_t		len;
	size_t		i;
	long int	nb;

	nb = (long int)n;
	len = ft_intlen(nb);
	if (!(str = (char*)(malloc(sizeof(char) * (len + 1)))))
		return (NULL);
	str[len] = '\0';
	i = 0;
	if (nb < 0)
	{
		str[i++] = '-';
		nb = -nb;
	}
	while (i < len)
	{
		str[len - 1] = nb % 10 + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}

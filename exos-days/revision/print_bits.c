/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:57:28 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/22 14:35:06 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include  <stdlib.h>

void    print_bits(unsigned char octet)
{
	int     i;
	char    c;

	i = 128;
	while (i > 0)
	{
		if (octet < i)
		{
			c = '0';
			i = i / 2;
			write(1, &c, 1);
		}
		else
		{
			c = '1';
			octet = octet - i;
			i = i / 2;
			write(1, &c, 1);
		}
	}
}

int		main()
{
	print_bits(-3);
	return (0);
}

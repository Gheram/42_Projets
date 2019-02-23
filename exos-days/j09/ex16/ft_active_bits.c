/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 12:26:04 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/16 12:26:39 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	int div;
	int bits;
	int sign;

	bits = 0;
	div = 1073741824;
	if (value < 0)
		value = value * -1;
	while (div > 0)
	{
		if (value >= div)
		{
			bits++;
			value = value % div;
		}
		div = div / 2;
	}
	return (bits);
}

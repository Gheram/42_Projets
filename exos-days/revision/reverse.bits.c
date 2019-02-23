/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 13:09:16 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/23 12:14:08 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
unsigned char reverse_bits(unsigned char octet)
{
	unsigned char   r = 0;
	unsigned        byte_len = 8;
	
	while (byte_len--)
	{
		r = (r << 1) | (octet & 1);
		octet >>= 1;
	}
	return (r);
}
int main()
{
	printf("%d", reverse_bits(108));
	return(0);
}

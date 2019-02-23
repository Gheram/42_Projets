/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 13:09:36 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/16 14:55:13 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
unsigned char swap_bits(unsigned char octet)
{
	  return ((octet >> 4 & 0x0F) | (0xF0 & octet << 4));
}
int main()
{
	  printf("%d\n", swap_bits(108));
	    return(0);
}

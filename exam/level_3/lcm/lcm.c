/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 07:14:44 by ghtouman          #+#    #+#             */
/*   Updated: 2019/01/15 07:23:02 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int lcm(unsigned int a, unsigned b)
{
	int pgcd;
	int old_a;
	int old_b;

	pgcd = 0;
	old_a = a;
	old_b = b;
	while (1)
	{
		if (a == 0)
		   break;
		b = b % a;
		if (b == 0)
			break;
		a = a % b;
	}
	pgcd = (!b) ? a : b;
	return (pgcd ? (old_a / pgcd * old_b) : 0);
}
	

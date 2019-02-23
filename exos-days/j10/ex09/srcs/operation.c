/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 12:23:59 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/19 18:06:34 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

void	ft_add(int valeur1, int valeur2)
{
	ft_putnbr(valeur1 + valeur2);
	ft_putchar('\n');
}

void	ft_sub(int valeur1, int valeur2)
{
	ft_putnbr(valeur1 - valeur2);
	ft_putchar('\n');
}

void	ft_mul(int valeur1, int valeur2)
{
	ft_putnbr(valeur1 * valeur2);
	ft_putchar('\n');
}

void	ft_div(int valeur1, int valeur2)
{
	if (valeur2 == 0)
		ft_putstr("Stop : division by zero\n");
	else
	{
		ft_putnbr(valeur1 / valeur2);
		ft_putchar('\n');
	}
}

void	ft_mod(int valeur1, int valeur2)
{
	if (valeur2 == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(valeur1 % valeur2);
		ft_putchar('\n');
	}
}

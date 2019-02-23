/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 16:15:36 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/24 15:45:54 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_suitebis(int x, int l)
{
	while (l != x)
	{
		l++;
		if (l == 1)
			ft_putchar('C');
		else if (l == x)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
}

void	ft_suite(int x, int y, int l, int h)
{
	while (h != y)
	{
		h++;
		l = 0;
		if (h != y)
		{
			while (l != x)
			{
				l++;
				if ((l == 1) || (l == x))
					ft_putchar('B');
				else
					ft_putchar(' ');
			}
		}
		if (h == y)
			ft_suitebis(x, l);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int l;
	int h;

	l = 0;
	h = 1;
	if (x > 0 && y > 0 && x <= 2147483647 && y <= 2147483647)
	{
		while (l != x)
		{
			l++;
			if (l == 1)
				ft_putchar('A');
			else if (l == x)
				ft_putchar('C');
			else
				ft_putchar('B');
		}
		ft_putchar('\n');
		if (y != 1)
			ft_suite(x, y, l, h);
	}
}

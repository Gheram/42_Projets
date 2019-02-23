/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 12:49:02 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/15 15:37:58 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	ft_putnbr(int nb)
{
	int long n;

	n = nb;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	while (par->str)
	{
		i = -1;
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		while ((par->tab)[++i])
		{
			ft_putstr((par->tab)[i]);
			ft_putchar('\n');
		}
		par++;
	}
}

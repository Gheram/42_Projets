/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 19:31:35 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/25 12:19:50 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexp.h"

void	ft_putnbr(int nb)
{
	long int n;

	n = nb;
	if (n < 0)
	{
		n = n * (-1);
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

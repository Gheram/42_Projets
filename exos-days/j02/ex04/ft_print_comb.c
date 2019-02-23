/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 11:20:15 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/06 11:24:59 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = -1;
	while (i <= 7)
	{
		j = ++i;
		while (j <= 8)
		{
			k = ++j + 1;
			while (k <= 9)
			{
				ft_putchar(i + '0');
				ft_putchar(j + '0');
				ft_putchar(k++ + '0');
				if (i != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

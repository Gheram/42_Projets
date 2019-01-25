/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 08:24:40 by ghtouman          #+#    #+#             */
/*   Updated: 2019/01/15 09:21:04 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long int nb;

	nb = n;
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((n  % 10) + '0');
}

int			ft_atoi(const char *str)
{
	int			nega;
	long int	nb;
	int			i;

	nega = 1;
	nb = 0;
	i = 0;
	while ((*str >= 0 && *str <= 26) || (*str >= 28 && *str <= 32))
		str++;
	if (str[0] == '+' && str[1] == '-')
		return (0);
	if (*str == '-')
		nega = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
		i++;
	}
	(i > 19 && nega == 1) ? nb = -1 : 0;
	(i > 19 && nega == -1) ? nb = 0 : 0;
	return (nb * nega);
}

int		is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	int		nb;
	int		sum;

	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		sum = 0;
		while (nb > 0)
			if (is_prime(nb--))
				sum += (nb + 1);
		ft_putnbr(sum);
	}
	if (argc != 2)
		write(1, "0\n", 2);
	else
		write(1, "\n", 2);
	return (0);
}

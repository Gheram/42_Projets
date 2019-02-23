/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 16:55:07 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/28 21:04:54 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		cut(long int nb, int nega)
{
	if (nega == 1)
		nb = -nb;
	if (nb == -2147483648)
		return (-2147483648);
	else if (nb == 2147483647)
		return (2147483647);
	else
		return (nb);
}

int		ft_atoi(char *str)
{
	int			nega;
	long int	nb;

	nega = 0;
	nb = 0;
	while (*str >= 0 && *str < 33)
		str++;
	if (str[0] == '+' && str[1] == '-')
		return (0);
	if (*str == '+')
		str++;
	if (*str == '-')
	{
		nega = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *(str + 3) != '\n')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (cut(nb, nega));
}

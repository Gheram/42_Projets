/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 12:58:22 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/08 15:27:17 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	if (nb == 1 || power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

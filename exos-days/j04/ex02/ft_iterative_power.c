/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 11:00:41 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/08 15:30:19 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int resultat;

	resultat = nb;
	if (power == 1)
		return (nb);
	if (nb == 1 || power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	while (--power > 0)
		resultat *= nb;
	return (resultat);
}

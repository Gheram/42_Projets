/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 09:59:09 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/07 19:33:10 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int resultat;

	i = 1;
	resultat = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (++i <= nb)
		resultat *= i;
	return (resultat);
}

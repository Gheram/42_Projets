/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 14:39:20 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/07 19:22:57 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int resultat;

	resultat = 1;
	if (nb < 0)
		return (0);
	while (resultat < (nb / resultat))
		resultat++;
	if (resultat * resultat == nb)
		return (resultat);
	else
		return (0);
}

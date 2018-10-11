/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 15:05:13 by ghtouman          #+#    #+#             */
/*   Updated: 2018/04/30 15:35:36 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sqrt(int nb)
{
	int resultat;

	resultat = 1;
	if (nb < 0)
		return (0);
	while (resultat <= (nb / resultat))
		resultat++;
	if (resultat * resultat >= nb)
		return (resultat);
	else
		return (0);
}

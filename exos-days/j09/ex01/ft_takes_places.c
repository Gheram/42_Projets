/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_places.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 09:45:57 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/16 10:13:10 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sentence_am(int x, int y, char m1, char m2)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 %c.M. AND %d.00 %c.M.\n",
			x, m1, y, m2);
}

void	ft_takes_place(int hour)
{
	if (hour == 0)
		ft_sentence_am(12, 1, 'A', 'A');
	if (hour == 11)
		ft_sentence_am(hour, hour + 1, 'A', 'P');
	if (hour == 12)
		ft_sentence_am(hour, 1, 'P', 'P');
	if (hour == 23)
		ft_sentence_am(hour - 12, 12, 'P', 'A');
	if (hour < 0 || hour > 23)
		return ;
	if (hour > 0 && hour < 11)
		ft_sentence_am(hour, hour + 1, 'A', 'A');
	if (hour > 12 && hour < 23)
		ft_sentence_am(hour - 12, hour - 11, 'P', 'P');
}

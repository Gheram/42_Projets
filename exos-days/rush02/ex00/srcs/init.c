/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 19:33:11 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/25 23:06:32 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_check		*rush_00(void)
{
	t_check *rush;

	if (!(rush = (t_check*)malloc(sizeof(t_check))))
		return (NULL);
	rush->debut[0] = 'o';
	rush->debut[1] = '-';
	rush->debut[2] = 'o';
	rush->milieu[0] = '|';
	rush->milieu[1] = ' ';
	rush->milieu[2] = '|';
	rush->fin[0] = 'o';
	rush->fin[1] = '-';
	rush->fin[2] = 'o';
	return (rush);
}

t_check		*rush_01(void)
{
	t_check *rush;

	if (!(rush = (t_check*)malloc(sizeof(t_check))))
		return (NULL);
	rush->debut[0] = '/';
	rush->debut[1] = '*';
	rush->debut[2] = '\\';
	rush->milieu[0] = '*';
	rush->milieu[1] = ' ';
	rush->milieu[2] = '*';
	rush->fin[0] = '\\';
	rush->fin[1] = '*';
	rush->fin[2] = '/';
	return (rush);
}

t_check		*rush_02(void)
{
	t_check *rush;

	if (!(rush = (t_check*)malloc(sizeof(t_check))))
		return (NULL);
	rush->debut[0] = 'A';
	rush->debut[1] = 'B';
	rush->debut[2] = 'A';
	rush->milieu[0] = 'B';
	rush->milieu[1] = ' ';
	rush->milieu[2] = 'B';
	rush->fin[0] = 'C';
	rush->fin[1] = 'B';
	rush->fin[2] = 'C';
	return (rush);
}

t_check		*rush_03(void)
{
	t_check *rush;

	if (!(rush = (t_check*)malloc(sizeof(t_check))))
		return (NULL);
	rush->debut[0] = 'A';
	rush->debut[1] = 'B';
	rush->debut[2] = 'C';
	rush->milieu[0] = 'B';
	rush->milieu[1] = ' ';
	rush->milieu[2] = 'B';
	rush->fin[0] = 'A';
	rush->fin[1] = 'B';
	rush->fin[2] = 'C';
	return (rush);
}

t_check		*rush_04(void)
{
	t_check *rush;

	if (!(rush = (t_check*)malloc(sizeof(t_check))))
		return (NULL);
	rush->debut[0] = 'A';
	rush->debut[1] = 'B';
	rush->debut[2] = 'C';
	rush->milieu[0] = 'B';
	rush->milieu[1] = ' ';
	rush->milieu[2] = 'B';
	rush->fin[0] = 'C';
	rush->fin[1] = 'B';
	rush->fin[2] = 'A';
	return (rush);
}

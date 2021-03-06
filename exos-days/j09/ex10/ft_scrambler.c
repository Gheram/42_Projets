/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 12:12:18 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/16 12:13:50 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scramble(int ***a, int *b, int *******c, int ****d)
{
	int tmpa;
	int tmpb;
	int tmpc;
	int tmpd;

	tmpa = ***a;
	tmpb = *b;
	tmpc = *******c;
	tmpd = ****d;
	*******c = tmpa;
	****d = tmpc;
	*b = tmpd;
	***a = *b;
}

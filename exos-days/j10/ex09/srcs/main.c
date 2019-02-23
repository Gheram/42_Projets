/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 18:27:31 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/19 18:09:45 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"
#include "ft_opp.h"

void	ft_usage(int a, int b)
{
	(void)a;
	(void)b;
	ft_putstr("error : only [ + - * / % ] are accepted.\n");
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 4)
		return (0);
	while (i < 5)
	{
		if (ft_strcmp(argv[2], g_opptab[i].opp) == 0)
		{
			g_opptab[i].f(ft_atoi(argv[1]), ft_atoi(argv[3]));
			return (0);
		}
		i++;
	}
	g_opptab[5].f(ft_atoi(argv[1]), ft_atoi(argv[3]));
	return (0);
}

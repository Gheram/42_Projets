/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 09:27:00 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/21 15:55:50 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char *transfere;

	transfere = *a;
	*a = *b;
	*b = transfere;
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		check;

	if (tab == NULL)
		return ;
	i = 0;
	while (tab[i])
		++i;
	while (--i > (check = 0))
	{
		j = -1;
		while (++j < i)
			if (ft_strcmp(tab[j + 1], tab[j]) < 0)
				ft_swap(tab + j + (check = 1), tab + j);
		if (check == 0)
			break ;
	}
}

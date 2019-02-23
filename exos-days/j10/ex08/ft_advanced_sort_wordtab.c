/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 09:31:33 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/21 09:31:39 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_swap(char **a, char **b)
{
	char *transfere;

	transfere = *a;
	*a = *b;
	*b = transfere;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int j;
	int check;

	if (tab == NULL || cmp == NULL)
		return ;
	i = 0;
	while (tab[i])
		++i;
	while (--i > (check = 0))
	{
		j = -1;
		while (++j < i)
			if (cmp(tab[j + 1], tab[j]) < 0)
				ft_swap(tab + j + (check = 1), tab + j);
		if (check == 0)
			break ;
	}
}

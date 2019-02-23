/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 12:22:54 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/14 12:28:23 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split_whitespaces(char *str);
void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (tab[i][++j])
			ft_putchar(tab[i][j]);
		ft_putchar('\n');
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 13:59:46 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/14 10:20:44 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_w(char *str)
{
	int i;
	int nb;
	int words;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		words = 0;
		while ((str[i] == '\n' || str[i] == '\t' || str[i] == 32)
				&& str[i] != '\0')
			i++;
		while (str[i] != 32 && str[i] != '\t' && str[i] != '\n'
				&& str[i] != '\0')
		{
			i++;
			words = 1;
		}
		if (words == 1)
			nb++;
	}
	return (nb);
}

int		count_l(char *str)
{
	int i;

	i = 0;
	while (str[i] && !(str[i] == '\n' || str[i] == '\t' || str[i] == ' '))
		i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		count;
	int		word_len;
	int		nb_of_words;

	count = 0;
	nb_of_words = count_w(str);
	if (!(tab = (char **)malloc(sizeof(*tab) * count_w(str) + 1)))
		return (NULL);
	while (count < nb_of_words)
	{
		while ((*str == '\n' || *str == '\t' || *str == ' ') && *str)
			str++;
		word_len = count_l(str);
		if (!(tab[count] = (char *)malloc(word_len + 1)))
			return (NULL);
		tab[count][word_len] = '\0';
		i = 0;
		while (i < word_len)
			tab[count][i++] = *str++;
		count++;
	}
	tab[count] = 0;
	return (tab);
}

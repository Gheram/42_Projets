/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split000.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 13:28:36 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/23 14:38:30 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int count_w(char *str)
{
	int nb_mots;
	int i;
	int mots;

	i = 0;
	while (str[i] != '\0')
	{
		mots = 0;
		while ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && str[i] != '\0')
			i++;
		while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		{
			i++;
			mots = 1;
		}
		if (mots == 1)
			nb_mots++;
	}
	return (nb_mots);
}

int count_l(char *str)
{
	int i;

	i = 0;
	while(str[i] && !(str[i] == '\t' || str[i] == '\n' || str[i] == ' '))
		i++;
	return (i);
}

char  **ft_split(char *str)
{
	int nb_mots;
	int word_len;
	int i;
	int count;
	char **tab;

	count = 0;
	nb_mots = count_w(str);
	if (!(tab = (char**)malloc(sizeof(*tab) * count_w(str) + 1)))
		return (NULL);
	while (count < nb_mots)
	{
		while ((*str == '\t' || *str == ' ' || *str == '\n') && *str)
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

int main(int ac, char **av)
{
	char **tab;

	tab = ft_split(av[1]);
	while (*tab)
		printf("%s", *tab++);
	return (0);
}

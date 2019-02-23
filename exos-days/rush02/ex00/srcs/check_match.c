/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_match.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 17:47:00 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/25 23:36:39 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		check(t_check *rush, char *str, int x, int y)
{
	int resultat;

	resultat = 0;
	if (x < 1 || y < 1)
		return (0);
	if (check_debut(rush, str, x, y) == 0)
		resultat = 1;
	resultat = 0;
	if (check_milieu(rush, str, x, y) == 0)
		resultat = 1;
	resultat = 0;
	if (check_fin(rush, str, x, y) == 0)
		resultat = 1;
	return (resultat);
}

int		check_debut(t_check *rush, char *str, int x, int y)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	if (x == 1 && y == 1 && ft_strncmp(&rush->debut[0], &str[0], 1) == 0)
		return (0);
	if (x == 2 && y == 1 && ft_strncmp(&rush->debut[0], &str[0], 1) == 0
			&& ft_strncmp(&rush->debut[2], &str[1], 1) == 0)
		return (0);
	if ((x == 1 && y == 2 && ft_strncmp(&rush->debut[0], &str[0], 1) == 0
			&& ft_strncmp(&rush->milieu[0], &str[0], 1) == 0))
		return (0);
	if ((ft_strncmp(&rush->debut[0], &str[0], 1) == 0)
		&& (ft_strncmp(&rush->debut[1], &str[1], 1) == 0)
		&& (ft_strncmp(&rush->debut[2], &str[i - 1], 1) == 0))
		return (0);
	return (1);
}

int		check_milieu(t_check *rush, char *str, int x, int y)
{
	int i;
	int j;

	i = 0;
	if (x == 1 && y == 1 && ft_strncmp(&rush->debut[0], &str[0], 1) == 0)
		return (0);
	if ((x == 2 && y == 1 && ft_strncmp(&rush->debut[0], &str[0], 1) == 0
			&& ft_strncmp(&rush->debut[2], &str[1], 1) == 0))
		return (0);
	if ((x == 1 && y == 2 && ft_strncmp(&rush->debut[0], &str[0], 1) == 0
			&& ft_strncmp(&rush->milieu[0], &str[0], 1) == 0))
		return (0);
	while (str[i] != '\n')
		i++;
	j = i;
	while (str[j] != '\n')
		j++;
	if ((ft_strncmp(&rush->milieu[0], &str[j], 1) == 0)
		&& (ft_strncmp(&rush->milieu[1], &str[j + 1], 1) == 0)
		&& (ft_strncmp(&rush->milieu[2], &str[j - 1], 1) == 0))
		return (0);
	else
		return (1);
}

int		check_fin(t_check *rush, char *str, int x, int y)
{
	int i;
	int fin;

	i = 0;
	if (x == 1 && y == 1 && ft_strncmp(&rush->debut[0], &str[0], 1) == 0)
		return (0);
	if (x == 2 && y == 1 && ft_strncmp(&rush->debut[0], &str[0], 1) == 0
		&& ft_strncmp(&rush->debut[2], &str[1], 1) == 0)
		return (0);
	if ((x == 1 && y == 2 && ft_strncmp(&rush->debut[0], &str[0], 1) == 0
			&& ft_strncmp(&rush->milieu[0], &str[0], 1) == 0))
		return (0);
	while (str[i])
		i++;
	fin = i - 2;
	i -= 2;
	while (str[i] != '\n')
		i--;
	if ((ft_strncmp(&rush->fin[0], &str[i + 1], 1) == 0)
		&& (ft_strncmp(&rush->fin[1], &str[i + 2], 1) == 0)
		&& (ft_strncmp(&rush->fin[2], &str[fin], 1) == 0))
		return (0);
	else
		return (1);
}

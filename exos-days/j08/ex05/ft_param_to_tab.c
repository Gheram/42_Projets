/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 15:46:27 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/15 15:46:29 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	dest = (char*)malloc(sizeof(*dest) * (i + 1));
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

struct	s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*tab_struct;

	if (!(tab_struct = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	i = -1;
	while (++i < ac)
	{
		tab_struct[i].size_param = ft_strlen(av[i]);
		tab_struct[i].str = av[i];
		tab_struct[i].copy = ft_strdup(av[i]);
		tab_struct[i].tab = ft_split_whitespaces(av[i]);
	}
	tab_struct[i].str = 0;
	return (tab_struct);
}

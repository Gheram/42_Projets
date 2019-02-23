/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 11:16:50 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/28 22:39:47 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_read(void)
{
	int		i;
	int		ret;
	char	*buf;
	char	*str;
	t_list	*ma_list;

	ma_list = NULL;
	i = -1;
	if (!(buf = (char*)malloc(sizeof(char) * BUF_SIZE + 1)))
		return (NULL);
	while ((ret = read(0, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_list_push_back(&ma_list, ft_strdup(buf), ret);
	}
	str = init_malloc(ma_list);
	return (str);
}

char	*init_malloc(t_list *ma_list)
{
	int		size_total;
	t_list	*begin;
	char	*str;

	begin = ma_list;
	size_total = 0;
	while (ma_list != NULL)
	{
		size_total = size_total + ma_list->size;
		ma_list = ma_list->next;
	}
	if (!(str = malloc(sizeof(char) * size_total + 1)))
		return (NULL);
	str[0] = '\0';
	while (begin)
	{
		ft_strcat(str, begin->data);
		begin = begin->next;
	}
	return (str);
}

int		main(void)
{
	char	*str;
	int		**tab;
	int		x;
	int		y;

	str = ft_read();
	check_error(&(str[0]));
	x = ft_nb_x(str);
	y = ft_nb_y(str);
	ft_parse_change(str);
	tab = ft_grid_intsert(str);
	matrixalgo(tab, x, y, str);
	return (0);
}

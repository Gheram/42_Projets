/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 23:17:27 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/25 23:18:24 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

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

void	ft_print_x_y(int x, int y)
{
	ft_putchar(' ');
	ft_putnbr(x);
	ft_putchar(' ');
	ft_putnbr(y);
	ft_putchar('\n');
}

void	ft_print_rush(char *str, int x, int y)
{
	if (check(rush_00(), str, x, y) == 1)
	{
		ft_putstr("[colle00]");
		ft_print_x_y(x, y);
	}
	if (check(rush_01(), str, x, y) == 1)
	{
		ft_putstr("[colle01]");
		ft_print_x_y(x, y);
	}
	if (check(rush_02(), str, x, y) == 1)
	{
		ft_putstr("[colle02]");
		ft_print_x_y(x, y);
	}
	if (check(rush_03(), str, x, y) == 1)
	{
		ft_putstr("[colle03]");
		ft_print_x_y(x, y);
	}
	if (check(rush_04(), str, x, y) == 1)
	{
		ft_putstr("[colle04]");
		ft_print_x_y(x, y);
	}
}

int		main(void)
{
	char	*str;
	int		x;
	int		y;

	str = ft_read();
	x = ft_nb_x(str);
	y = ft_nb_y(str);
	ft_print_rush(str, x, y);
	return (0);
}

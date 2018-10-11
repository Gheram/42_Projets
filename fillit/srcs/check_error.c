/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 14:43:02 by ghtouman          #+#    #+#             */
/*   Updated: 2018/05/02 15:58:13 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		size_error(char *str)
{
	int i;
	int point;
	int cross;

	i = -1;
	point = 0;
	cross = 0;
	while (str[++i])
	{
		if (str[i] == '.')
			point++;
		if (str[i] == '#')
			cross++;
	}
	if (cross != 4 && point != 12)
		return (FALSE);
	return(TRUE);
}

int  	ntreturn_error(char *str)
{
	int i;
	int nreturn;

	i = 4;
	nreturn = 0;
	while (str[i] && i < 21)
	{
		if (str[i] == '\n')
			nreturn++;
		else
			return (FALSE);
		i = i + 5;
	}
	if ((nreturn == 4 && str[20] == '\n' && str[21]== '\0') ||
		((nreturn == 4 && str[21] == '\n' && str[22] == '\0')))
		return (TRUE);
	return (FALSE);
}

int		link_error(char *str)
{
	int i;
	int link;

	i = -1;
	link = 0;
	while (str[++i])
	{
		if (str[i] == '#')
		{
			if (str[i + 1] == '#')
				link++;
			if (str[i + 5] == '#')
				link++;
			if (str[i - 1] == '#')
				link++;
			if (str[i - 5] == '#')
				link++;
		}
	}
	if (link == 6 || link == 8)
		return (TRUE);
	return(FALSE);
}

int		check_error(t_stock *ma_list)
{


	while (ma_list)
	{
		link_error(ma_list->content);
		if ((size_error(ma_list->content) == FALSE
			|| ntreturn_error(ma_list->content) == FALSE)
			|| link_error(ma_list->content) == FALSE)
		{
			ft_putstr_fd("error\n", 2);
			return (FALSE);
		}
		else
			ma_list = ma_list->next;
	}
	printf("=======Check_error good======\n");
	return (TRUE);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 08:53:41 by ghtouman          #+#    #+#             */
/*   Updated: 2019/01/15 09:31:34 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*list;

	size = 0;
	list = begin_list;
	if (list)
	{
		while (!(list->next))
		{
			list = list->next;
			size++;
		}
	}
	return (size - 1);
}

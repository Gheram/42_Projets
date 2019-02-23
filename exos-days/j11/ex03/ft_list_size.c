/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 11:20:35 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/22 17:45:13 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		size;
	t_list	*element;

	size = 0;
	element = begin_list;
	while (element)
	{
		element = element->next;
		size++;
	}
	return (size);
}

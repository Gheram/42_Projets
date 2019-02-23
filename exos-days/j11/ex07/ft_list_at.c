/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 10:07:17 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/24 11:01:57 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = nbr;
	while (i-- && begin_list != NULL)
		begin_list = begin_list->next;
	if (begin_list == NULL)
		return (NULL);
	else
		return (begin_list);
}

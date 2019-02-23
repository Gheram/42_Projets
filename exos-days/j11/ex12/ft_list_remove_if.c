/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 18:30:33 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/26 13:00:50 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *temporaire;

	if (*begin_list)
	{
		if ((*cmp)((*begin_list)->data, data_ref) == 0)
		{
			temporaire = (*begin_list);
			(*begin_list) = (*begin_list)->next;
			free(temporaire);
			ft_list_remove_if(begin_list, data_ref, cmp);
		}
		else
			ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);
	}
}

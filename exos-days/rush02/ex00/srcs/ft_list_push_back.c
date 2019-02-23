/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:00:41 by ghtouman          #+#    #+#             */
/*   Updated: 2019/02/15 14:44:50 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_list_push_back(t_list **begin_list, void *data, int ret)
{
	t_list *element;
	t_list *temporaire;

	if (begin_list == NULL)
		return ;
	if ((element = ft_create_elem(data)) == NULL)
		return ;
	element->size = ret;
	if (*begin_list == NULL)
	{
		*begin_list = element;
		return ;
	}
	temporaire = *begin_list;
	while (temporaire->next != NULL)
		temporaire = temporaire->next;
	temporaire->next = element;
}

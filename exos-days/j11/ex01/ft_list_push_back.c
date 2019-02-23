/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:00:41 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/22 17:38:55 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *element;
	t_list *temporaire;

	if (begin_list == NULL)
		return ;
	if ((element = ft_create_elem(data)) == NULL)
		return ;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 11:56:25 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/28 07:52:36 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *before;
	t_list *element;
	t_list *temporaire;

	if (!begin_list || (element = *begin_list) == NULL)
		return ;
	before = NULL;
	while (element != NULL)
	{
		temporaire = element->next;
		element->next = before;
		before = element;
		element = temporaire;
	}
	*begin_list = before;
}

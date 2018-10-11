/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 15:01:17 by ghtouman          #+#    #+#             */
/*   Updated: 2018/04/30 15:01:59 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_stock		*ft_create_elem(void *content)
{
	t_stock *struc;

	if (!(struc = malloc(sizeof(*struc))))
		return (NULL);
	struc->content = content;
	struc->next = NULL;
	return (struc);
}

void	ft_lstpush_back(t_stock **begin_list, char *content)
{
	t_stock *element;
	t_stock *temporaire;

	if (begin_list == NULL)
		return ;
	if ((element = ft_create_elem(content)) == NULL)
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

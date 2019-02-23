/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 18:13:54 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/22 17:54:13 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *temporaire;
	t_list *before;

	if (*begin_list == NULL || begin_list == NULL)
		return ;
	temporaire = *begin_list;
	while (temporaire->next != NULL)
	{
		before = temporaire;
		temporaire = temporaire->next;
		free(before);
	}
	free(temporaire);
	*begin_list = NULL;
}

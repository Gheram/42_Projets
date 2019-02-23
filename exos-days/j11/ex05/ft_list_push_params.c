/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 14:08:22 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/24 10:57:10 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*first;
	t_list	*element;

	if (ac < 1)
		return (NULL);
	if ((first = ft_create_elem(av[--ac])) == NULL)
		return (NULL);
	element = first;
	while (ac > 0 && (element->next = ft_create_elem(av[--ac])) != NULL)
		element = element->next;
	return (first);
}

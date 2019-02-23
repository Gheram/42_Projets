/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:59:10 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/24 19:26:33 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_list		*ft_create_elem(void *data)
{
	t_list *struc;

	if (!(struc = malloc(sizeof(*struc))))
		return (NULL);
	struc->data = data;
	struc->next = NULL;
	return (struc);
}

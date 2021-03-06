/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 10:49:23 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/09 13:02:20 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
	}
	return (1);
}

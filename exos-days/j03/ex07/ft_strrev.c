/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 15:17:46 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/07 09:37:11 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	transfere;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i--;
	while (i > j)
	{
		transfere = str[i];
		str[i] = str[j];
		str[j] = transfere;
		i--;
		j++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 16:42:31 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/21 19:18:47 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int sens;

	i = 1;
	sens = 1;
	while (i < length)
	{
		if (i == 1 && f(tab[i - 1], tab[i]) < 0)
			sens *= -1;
		if (f(tab[i - 1], tab[i]) * sens < 0)
			return (0);
		i++;
	}
	return (1);
}

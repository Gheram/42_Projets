/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 08:59:43 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/23 12:15:02 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char *str, char c, int i)
{
	int j;

	j = 0;
	while (j < i)
	{
		if (str[j] == c)
			return (0);
		j++;
	}
	return (1);
}

void ft_inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while(s1[i])
	{
		if((check(s1, s1[i], i) == 1))
		{
			j = 0;
			while(s2[j])
			{
				if(s1[i] == s2[j])
				{
					write(1, &s1[i], 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
}

int main(int ac, char ** av)
{
	if (ac == 3)
		ft_inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

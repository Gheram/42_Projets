/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:54:18 by ghtouman          #+#    #+#             */
/*   Updated: 2018/03/01 15:31:33 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write (1, &c, 1);
}

void    repeat_alpha(char *str)
{
	int i;
	int y;
	int compteur;
	i = -1;
	while (str[++i])
	{
		compteur = -1;
		if (str[i] >= 65 && str[i] <= 90)
			y = str[i] - 'A' + 1;
		if (str[i] >= 97  && str[i] <= 122)
			y = str[i] - 'a' + 1;
		while(++compteur < y)
			ft_putchar(str[i]);
	}
}

int main(int argc, char **argv)
{
	repeat_alpha("AbcD");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asamir-k <asamir-k@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 16:06:57 by asamir-k          #+#    #+#             */
/*   Updated: 2018/02/28 22:29:22 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
/*
char	ft_wrong_line_numbers(char *str)
{
	if (size_line != y)
		return(print_error);
}

char	ft_wrong_col_numbers(char *str, int )
{
	if (size_col != x)
		return (print error);
}

char	ft_wrong_char(char *str)
{
	if(jack[x][y] != mapresolv || jack[x][y] != obstacle || jack[x][y] != casevide)
	{
		return (print_error);
	}
}*/

int 	*check_error(char *str)
{
	int i;
	int *jack;

	jack = (int *)(malloc)(sizeof(int) * 4);
	i = 0;
	if (str[0] <= '0' || str[0] > '9')
	{
		ft_putstr("map error\n");
		exit(0);
	}
	while (str[i] != '\n')
		i++;
	jack[1] = str[i - 1];
	jack[2] = str[i - 2];
	jack[3] = str[i - 3];
	if (jack[1] == jack[2] || jack[2] == jack[3] || jack[1] == jack[3])
	{
		print_error();
		exit(0);
	}
	jack[0] = ft_atoi(str);
	return (jack);

}

void	print_error()
{
	write(1, "map error\n", 10);
}

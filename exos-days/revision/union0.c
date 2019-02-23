/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 08:59:43 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/23 10:58:52 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;
	
	if (!str || !*str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main (int argc, char **argv)
{
	int		i;
	int		check;
	int		current;
	char	temporaire[ft_strlen(argv[1]) + ft_strlen(argv[2])];

	i = 0;
	check = 0;
	current = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			check = 0;
			while (check != current)
			{
				if (temporaire[check] == argv[1][i])
					break;
				check++;
			}
			if (check == current)
			{
				ft_putchar(argv[1][i]);
				temporaire[current] = argv[1][i];
				++current;
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			check = 0;
			while (check != current)
			{
				if (temporaire[check] == argv[2][i])
					break;
				check++;
			}
			if (check == current)
			{
				ft_putchar(argv[2][i]);
				temporaire[current] = argv[2][i];
				current++;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}


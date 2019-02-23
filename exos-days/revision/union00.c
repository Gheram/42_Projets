/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <ghtouman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 08:59:43 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/23 12:14:11 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int        ft_strlen(char *str)
{
    int    i;

    i = 0;
   if (!str || !*str)
		return (0);
    while (str[i] != '\0')
        i++;
    return (i);
}

int        main(int ac, char **av)
{
    int    i;
    int    current;
    int check;
    char tmp[ft_strlen(av[1]) + ft_strlen(av[2])];

    i = 0;
    current = 0;
    check = 0;
    if (ac == 3)
    {
        while(av[1][i] != '\0')
        {
            check = 0;
            while (check != current)
            {
                if (tmp[check] == av[1][i])
                    break;
                ++check;
            }
            if (check == current)
            {
                ft_putchar(av[1][i]);
                tmp[current] = av[1][i];
                ++current;
            }
            ++i;
        }
        i = 0;
        while(av[2][i] != '\0')
        {
            check = 0;
            while (check != current)
            {
                if (tmp[check] == av[2][i])
                    break;
                ++check;
            }
            if (check == current)
            {
                ft_putchar(av[2][i]);
                tmp[current] = av[2][i];
                ++current;
            }
            ++i;
        }
    }
    ft_putchar('\n');
    return (0);
	}

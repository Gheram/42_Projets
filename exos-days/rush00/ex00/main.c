/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghtouman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/11 16:13:42 by ghtouman          #+#    #+#             */
/*   Updated: 2018/02/11 16:13:49 by ghtouman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		colle(int x, int y);

int		ft_atoi(char *str)
{
	int	nbr;
	int	i;
	int	neg;

	nbr = 0;
	i = 0;
	neg = 1;
	while (str[i] <= 32 && str[i] >= 0)
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			nbr = nbr * 10 + (str[i] - '0');
			i++;
		}
		return (nbr * neg);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		colle(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
